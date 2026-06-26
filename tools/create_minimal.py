import os
import shutil
import zipfile
from pathlib import Path

FULL_ZIP = Path("releases/ttt-latest.zip")
TEMP_DIR = Path("releases/ttt-temp")
MINIMAL_ZIP = Path("releases/ttt-minimal.zip")
ADDON_LIST = Path(".github/minimal-addons.txt")


def read_addon_list():
    print("Reading minimal addon list...")
    with ADDON_LIST.open("r", encoding="utf-8") as f:
        return {line.strip() for line in f if line.strip()}


def extract_full_zip():
    print("Extracting full build...")
    if TEMP_DIR.exists():
        shutil.rmtree(TEMP_DIR)

    with zipfile.ZipFile(FULL_ZIP, "r") as z:
        z.extractall(TEMP_DIR)


def find_addons_dir():
    # Find first directory ending with /addons
    for root, dirs, files in os.walk(TEMP_DIR):
        if os.path.basename(root) == "addons":
            return Path(root)
    raise RuntimeError("Could not find addons directory inside extracted ZIP")


def process_addons(addons_dir, keep_addons):
    print(f"Processing addons in: {addons_dir}")

    for pbo_file in addons_dir.glob("*.pbo"):
        addon_name = pbo_file.stem.replace("ttt_", "")

        if addon_name not in keep_addons:
            print(f"Removing: {pbo_file.name}")

            # Remove .pbo
            pbo_file.unlink(missing_ok=True)

            # Remove all signature variants:
            # ttt_addonName.pbo.<key>.bisign
            for bisign in addons_dir.glob(f"{pbo_file.name}.*.bisign"):
                print(f"Removing signature: {bisign.name}")
                bisign.unlink()

        else:
            print(f"Keeping: {pbo_file.name}")


def create_minimal_zip():
    print("Creating minimal ZIP...")
    if MINIMAL_ZIP.exists():
        MINIMAL_ZIP.unlink()

    with zipfile.ZipFile(MINIMAL_ZIP, "w", zipfile.ZIP_DEFLATED) as z:
        for root, dirs, files in os.walk(TEMP_DIR):
            for file in files:
                full_path = Path(root) / file
                rel_path = full_path.relative_to(TEMP_DIR)
                z.write(full_path, rel_path)


def cleanup():
    print("Cleaning up...")
    shutil.rmtree(TEMP_DIR, ignore_errors=True)


def main():
    keep_addons = read_addon_list()
    extract_full_zip()
    addons_dir = find_addons_dir()
    process_addons(addons_dir, keep_addons)
    create_minimal_zip()
    cleanup()
    print(f"Minimal version created at: {MINIMAL_ZIP}")


if __name__ == "__main__":
    main()
