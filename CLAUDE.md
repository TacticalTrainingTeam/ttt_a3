# TTT-Mod (ttt_a3)

Arma 3 mod built on the CBA/ACE component framework, packaged with HEMTT.

## Coding guidelines

All SQF and config code must follow the ACE3 coding guidelines:
<https://ace3.acemod.org/wiki/development/coding-guidelines>

Key points to apply consistently in this repo:

- **Components**: every addon lives under `addons/<component>/` with a `script_component.hpp`, `XEH_preInit.sqf`/`XEH_postInit.sqf` as needed, and functions under `functions/fnc_*.sqf`.
- **Macros**: use `QUOTE`, `QGVAR`, `GVAR`, `FUNC`, `EFUNC` etc. from `script_macros.hpp` instead of hardcoding `ttt_<component>_*` strings.
- **Function headers**: every function file starts with `#include "..\script_component.hpp"` and a header block (`Author:`, description, `Arguments:`, `Return Value:`, `Public:`), matching the existing style in `addons/*/functions/fnc_*.sqf`.
- **params**: always declare typed `params` at the top of a function; don't rely on implicit `_this` indexing.
- **private**: explicitly declare locals with `private _x = ...`; don't rely on undeclared-local auto-privatization.
- **Indentation**: 4 spaces, no tabs.
- **Naming**: `camelCase` for functions/variables, `snake_case`/`ttt_` prefix for classnames per existing convention; brackets/operators spaced as in ACE style (`if (...) then {`, `foreach`, etc.).
- **No magic numbers/strings**: pull config paths and repeated literals into named locals or macros where the codebase already does so.
- Match existing patterns in the file/component you're editing over introducing a new style.

## Performance considerations

Follow ACE3's performance guidance:
<https://ace3.acemod.org/wiki/development/coding-guidelines#8-performance-considerations>

In short: avoid unscheduled/scheduled loops that poll every frame or on a tight `sleep`, avoid unnecessary `spawn`, and avoid PFH/`onEachFrame` handlers that run more often than needed. Each of these has a real CPU cost multiplied across every client/server tick.

Prefer CBA alternatives over hand-rolled polling:

- **`CBA_fnc_waitUntilAndExecute`** instead of `waitUntil { sleep 0.1; ... }` loops — CBA batches these checks efficiently rather than each spawning its own scheduled thread.
- **`CBA_fnc_addPerFrameHandler`** (with an explicit interval) instead of raw `onEachFrame`/tight `spawn` loops, when a per-frame check is genuinely required.
- **Events (`CBA_fnc_addEventHandler` / `CBA_fnc_localEvent` / `CBA_fnc_globalEvent`)** instead of polling for a state change — fire an event when the state actually changes rather than checking it repeatedly. This is almost always preferable to a wait loop when you control the code that produces the state change.

When reviewing or writing code, prefer converting existing polling loops to events/CBA helpers where a clean trigger point exists, rather than adding new polling.

## Documentation

Three separate layers, each for a different audience — don't blend them, and when a behavior change touches one, check whether the others have gone stale too.

- **`addons/<component>/readme.md`** — developer-facing. Explains how the code works and *why* non-obvious decisions were made (algorithms, config class names, cross-addon interactions, dependencies), for whoever maintains or extends the addon next. Free to be as technical as needed. Section headers follow existing convention across the repo: `## Abhängigkeiten` for dependencies, `## Maintainer` left in English even in an otherwise-German readme — check a few sibling `readme.md` files before introducing a new heading style.
- **Function headers and inline comments** — code-level, for whoever is reading that specific file. Every `fnc_*.sqf` gets the ACE-style header block (`Author:`, description, `Arguments:`, `Return Value:`, `Public:`) per the coding guidelines above. Inline comments explain the *why*, not the *what* (see the root-level "Default to writing no comments" guidance) — a comment earns its place only when it captures a non-obvious constraint, invariant, or workaround, e.g. this codebase's recurring `exitWith`-scoping gotcha (nested inside `if/then` it only exits that block, not the function/loop) gets called out inline wherever it applies, not just documented once centrally.
- **`docs/ttt-a3/<kategorie>/<seite>.md`** (plus the landing page `docs/ttt-a3.md`) — user/mission-maker-facing, published as a section of the TTT wiki (<https://wiki.tacticalteam.de/de/ttt-a3>). Explains what the addon does and how to use it (settings, crate/item types, init-line variables, script API) without leaking implementation detail — no config class internals, no naming a specific underlying framework (CBA, ACE, …) unless the mission maker has to type its name themselves. Written in accessible, non-technical German: this is the audience with the least SQF/config background. See "User docs (wiki)" below for how these files are published and formatted.

A behavior change without a matching update to the readme and/or user docs (whichever are affected) counts as an incomplete change, not just a code change.

### User docs (wiki)

The old mkdocs site (`docs/addons/`, `mkdocs.yml`, docs.tacticalteam.de) no longer exists; don't recreate it or link to it.

- **This repo is the source of truth.** `.github/workflows/sync-wiki.yml` copies `docs/ttt-a3/` and `docs/ttt-a3.md` one way into the wiki's git repo (`TacticalTrainingTeam/wiki.tacticalteam.de`, locale `de`) on every push to `master` that touches those paths. It uses `rsync --delete`, so deleting or renaming a file here deletes or moves the wiki page. The `ttt-a3` pages in the wiki are read-only: never edit them through the wiki (or the TTT Wiki MCP tools), since the next sync overwrites the change. Use the wiki only to read other pages, e.g. to check link targets.
- **Layout**: one page per addon in a category folder, a category landing page `docs/ttt-a3/<kategorie>.md` next to each folder, and the overall landing page `docs/ttt-a3.md`. Categories: `allgemein` (works without setup, for players), `funktional` (placed, enabled or scripted by mission makers/Zeus), `assets` (equipment and vehicles in TTT style), `kompatibilität` (compat addons for other mods), `grundlagen` (base addons used by other addons). File names are lowercase with hyphens (`compat-3cb-factions.md`, not `compat_3cb_factions.md`). An addon with several pages gets a subfolder (`funktional/common/functions.md`, `funktional/common/objects.md`).
- **No nav file**: category and landing pages list their pages with `::block-index{path="/ttt-a3/<kategorie>" ...}`, so a new page shows up once it's in the right folder. The only manual list is the "Minimal Version" list in `docs/ttt-a3.md`, which has to match `.github/minimal-addons.txt` (read by `tools/create_minimal.py`) when an addon is added to or removed from the minimal build.
- **Page format**: follow the wiki's template (<https://wiki.tacticalteam.de/de/intern/vorlage>), style guide (<https://wiki.tacticalteam.de/de/intern/styleguide>) and tag guideline (<https://wiki.tacticalteam.de/de/intern/tags>), and copy the structure of an existing sibling page:
  - Wiki.js frontmatter: `title`, a one-sentence `description`, `published: true`, `tags` (always `arma3` and `ttt-mod`, plus topic/audience tags such as `missionsbauer`, `referenz`), `editor: markdown`, `dateCreated`. Don't add a `date:` field; the wiki sets it.
  - Body order: compat box (Arma 3 green, Reforger red for this mod), `::block-infobox` with `Ansprechpartner` (quoted value), a short intro, then the content. Category and landing pages have no compat box or infobox.
  - Headings start at `#` (the page title comes from the frontmatter) and go no deeper than `####` without skipping levels. Common top-level sections are `# Benutzung`, `# Einstellungen`, `# Funktionen`, `# Voraussetzungen`, `# Klassennamen`, `# Events`. Don't add empty sections.
  - Internal links are absolute wiki paths with locale, e.g. `/de/ttt-a3/funktional/resupply` (no `.md`, no relative paths). Links to other wiki pages such as `/de/missionsbau/...` work too.
  - Use an en dash (`–`) rather than a hyphen in running German text.
- The PR template's documentation checkbox refers to these files.

## HEMTT

This project is built and linted with [HEMTT](https://hemtt.dev/). Configuration lives in `.hemtt/project.toml` (SQF lint: `command_case`; config lint: `math_could_be_unquoted` pedantic).

**Before considering any SQF/config change complete, run `hemtt check` from the repo root and it must pass cleanly (no errors/warnings introduced).** Fix lint/parse issues it reports rather than suppressing them.

```
hemtt check
```

## Pull requests

Follow `.github/PULL_REQUEST_TEMPLATE.md`:

- **Title**: `Component - Add|Fix|Change|Remove {changes}`, e.g. `Resupply - Add database rebuild function and ZEN context menu entry`.
- **Description**: start with the template's `## When merged this pull request will:` heading, followed by one bullet per change (each change on its own line). Keep the template's `## Important` checklist (docs included, development guidelines applied, title format used) and the `## Known Issues` section; tick the boxes that apply.
- **Labels and assignee**: add the matching `changelog/*` label (plus `documentation` if docs changed) and assign the user.
