# TTT Resupply

Scans all player loadouts at mission start, builds per-category item databases
(averaged across all present players), and lets mission makers spawn typed supply
crates on demand via an ACE action on pre-placed depot objects or via Zeus modules.

## Crate types

| Type | Box class (NATO default) | Contents |
| --- | --- | --- |
| **Ammo** | `Box_NATO_Ammo_F` | Rifle / pistol magazines |
| **Grenades** | `Box_NATO_Grenades_F` | Hand grenades, smoke, flares |
| **AT Ammunition** | `Box_NATO_WpsLaunch_F` | Rocket / missile launcher ammo |
| **Explosives** | `Box_NATO_AmmoOrd_F` | Mines, demo charges, satchels |
| **Support** | `Box_NATO_Support_F` | Misc inventory items (batteries, cable ties, etc.) |
| **Medical Alpha** | `ttt_common_sana_crate` | Basic medical (pre-defined by /common) |
| **Medical Bravo** | `ttt_common_sanb_crate` | Mid medical (pre-defined by /common) |
| **Medical Charlie** | `ttt_common_sanc_crate` | Advanced medical (pre-defined by /common) |

Dynamic crates (Ammo–Support) are filled from the scanned database. If no player
carried anything in a given category (e.g. no AT launcher ammo), that crate is not
spawned at all, and whoever requested it (player or Zeus) gets a hint explaining why.
Medical crates spawn the pre-defined TTT common classes as-is.

In the ACE menu specifically, dynamic crate types are hidden entirely (rather than
shown and then failing) while the loadout scan hasn't finished yet, or once finished,
if that category ended up empty. Medical crate types are always listed. A successful
spawn also confirms itself to the requester the same way a failure would.

If **KAT Advanced Medical** (`kat_main`) is loaded, the medical crate types
automatically spawn the `/compat_kam` equivalents (`ttt_compat_kam_sana_crate`,
`_sanb_crate`, `_sanc_crate`) instead, so mission makers don't need to change
anything when switching medical mods.

## Item classification

Items are classified from player loadouts at mission start:

- `magazines _unit` — classified by ammo CfgAmmo hierarchy:
  - `RocketBase` / `MissileBase` → AT
  - `MineBase` / `BombCore` → Explosives
  - `GrenadeBase` / `SmokeShell` / `FlareBase` → Grenades
  - everything else → Ammo
- `items _unit` — all go to Support

> **Note**: The scan runs 5 seconds after mission start. JIP players are not included.

## Settings (CBA)

| Setting | Type | Default | Description |
| --- | --- | --- | --- |
| Crate Faction | List | `NATO` | Box class prefix: NATO / OPFOR / INDEP |
| Quantity Multiplier | Slider (0.5–5.0) | `1.0` | Scale factor on per-player averages |

There is no master on/off switch. The ACE menu only appears on objects tagged
with `ttt_resupply_container` (mission maker's explicit choice), and Zeus
modules are always available to curators.

## Mission Maker Usage

### ACE action on a depot object

Add to the object's **Init** field:

```sqf
this setVariable ["ttt_resupply_container", true];
```

Players see a **Resupply** submenu on the object with all eight crate types listed.

The crate spawns in an empty spot found near whichever player triggered the
action (searched within 10 m), rather than at a fixed offset from the depot.

### Zeus modules

In Zeus, open the **Supports** category. Eight modules are available — one per
crate type. Placing a module spawns the corresponding crate in an empty spot
near that position (searched within 10 m) and removes the module logic.

These modules are Zeus-only: they're deliberately hidden from the classic 2D
mission editor and from 3DEN (placing a resupply crate ahead of time doesn't
make sense — mission makers should use a depot object with the ACE action, or
the script API, instead).

### Script API

```sqf
// Spawn at a world position
[getPos myMarker, "ammo"]        remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
[getPos myMarker, "grenades"]    remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
[getPos myMarker, "at"]          remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
[getPos myMarker, "explosives"]  remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
[getPos myMarker, "support"]     remoteExec ["ttt_resupply_fnc_spawnCrate", 2];

// Medical crates (pre-filled, no database needed)
[getPos myMarker, "medical_alpha"]   remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
[getPos myMarker, "medical_bravo"]   remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
[getPos myMarker, "medical_charlie"] remoteExec ["ttt_resupply_fnc_spawnCrate", 2];

// Spawn next to an existing object
[supplyDepot, "ammo"] remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
```

## Dependencies

- `ttt_common` (medical crate classes + `fnc_crateFiller`)
- `ace_common` (structured on-screen confirmation/failure text for the ACE action)
- `ace_interact_menu`
- `ace_zeus` (Zeus curator message feed used to report Zeus-triggered spawn results)
- `ttt_compat_kam` (optional; used automatically for medical crates when `kat_main` is loaded)
