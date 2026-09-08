#!/usr/bin/env python3

import os
import re
import sys
import urllib.request
import xml.etree.ElementTree as ET

# COIN DATABASE SYNC
# ------------------
# Fetches the TTT squad rosters (main + TvT) and adds a coin_check db.hpp entry
# for any player not already present, keeping GVAR(coin_N) numbering sequential
# and gap-free. Also appends the new classnames to weapons[] in config.cpp, as
# required by db.hpp's own documented convention.
#
# Players appearing in either roster more than once (or in both rosters) are
# only added once, using their first-encountered name.

SQUAD_URLS = [
    "https://tacticalteam.de/squadxml/squad.xml",
    "https://tacticalteam.de/squadxml_tvt/squad.xml",
]

ADDON_DIR = os.path.join("addons", "coin_check")
DB_PATH = os.path.join(ADDON_DIR, "db.hpp")
CONFIG_PATH = os.path.join(ADDON_DIR, "config.cpp")


def resolve_path(path):
    # Allow running from root directory and tools directory
    if os.path.exists("addons"):
        return path
    return os.path.join("..", path)


def fetch_members(url):
    request = urllib.request.Request(url, headers={"User-Agent": "ttt-coin-sync"})

    with urllib.request.urlopen(request, timeout=15) as response:
        data = response.read()

    root = ET.fromstring(data)
    members = []

    for member in root.findall("member"):
        uid = member.get("id")
        name = member.get("nick") or member.findtext("name")

        if uid and uid.isdigit() and name:
            members.append((uid.strip(), name.strip()))

    return members


def collect_squad_members():
    seen = set()
    members = []

    for url in SQUAD_URLS:
        for uid, name in fetch_members(url):
            if uid in seen:
                continue
            seen.add(uid)
            members.append((uid, name))

    return members


def parse_existing_db(db_path):
    with open(db_path, "r", encoding="utf-8") as file:
        content = file.read()

    existing_uids = set(re.findall(r'uid\s*=\s*"([^"]*)"', content))
    existing_numbers = [int(n) for n in re.findall(r"coin_(\d+)\)", content)]
    next_number = max(existing_numbers, default=0) + 1

    return existing_uids, next_number


def escape_config_string(value):
    return value.replace('"', '""')


def build_entry(number, uid, name):
    uid_escaped = escape_config_string(uid)
    display_name = escape_config_string("Coin ({})".format(name))

    return (
        "class GVAR(coin_{}): GVAR(coin_base) {{\n"
        "    scope = 1;\n"
        '    uid = "{}";\n'
        '    displayName = "{}";\n'
        "}};\n"
    ).format(number, uid_escaped, display_name)


def update_db(db_path, new_entries):
    with open(db_path, "a", encoding="utf-8") as file:
        for entry in new_entries:
            file.write("\n" + entry)


def update_config(config_path, new_numbers):
    with open(config_path, "r", encoding="utf-8") as file:
        content = file.read()

    match = re.search(r"weapons\[\]\s*=\s*\{(.*?)\};", content, re.DOTALL)

    if not match:
        print("  ERROR: Could not find weapons[] array in {}.".format(config_path))
        return False

    existing = re.findall(r"QGVAR\((coin_\d+)\)", match.group(1))
    all_names = existing + ["coin_{}".format(n) for n in new_numbers]

    indent = "            "
    body = ",\n".join("{}QGVAR({})".format(indent, name) for name in all_names)
    new_block = "weapons[] = {{\n{}\n        }};".format(body)

    content = content[: match.start()] + new_block + content[match.end() :]

    with open(config_path, "w", encoding="utf-8") as file:
        file.write(content)

    return True


def main():
    print("Coin Database Sync")
    print("-------------------")

    db_path = resolve_path(DB_PATH)
    config_path = resolve_path(CONFIG_PATH)

    print("Fetching squad rosters...")

    try:
        members = collect_squad_members()
    except Exception as e:
        print("ERROR: Failed to fetch/parse squad XML: {}".format(e))
        return 1

    print("Found {} unique player(s) across both rosters.".format(len(members)))

    existing_uids, next_number = parse_existing_db(db_path)

    new_entries = []
    new_numbers = []
    number = next_number

    for uid, name in members:
        if uid in existing_uids:
            continue

        new_entries.append(build_entry(number, uid, name))
        new_numbers.append(number)
        print("  + coin_{}: {} ({})".format(number, name, uid))
        number += 1

    if not new_entries:
        print("No new players to add. Database is up to date.")
        return 0

    update_db(db_path, new_entries)

    if not update_config(config_path, new_numbers):
        return 1

    print(
        "Added {} new coin(s) to {} and {}.".format(
            len(new_entries), db_path, config_path
        )
    )
    return 0


if __name__ == "__main__":
    sys.exit(main())
