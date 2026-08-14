# TTT Resupply

Scans all player loadouts at mission start, builds per-category item databases
(averaged across all present players), and lets mission makers spawn typed supply
crates on demand via an ACE action on pre-placed depot objects or via Zeus modules.

## Crate types

| Type | Box class (NATO default) | Contents |
|---|---|---|
| **Ammo** | `Box_NATO_Ammo_F` | Rifle / pistol magazines |
| **Grenades** | `Box_NATO_Grenades_F` | Hand grenades, smoke, flares |
| **AT Ammunition** | `Box_NATO_WpsLaunch_F` | Rocket / missile launcher ammo |
| **Explosives** | `Box_NATO_AmmoOrd_F` | Mines, demo charges, satchels |
| **Support** | `Box_NATO_Support_F` | Misc inventory items (batteries, cable ties, etc.) |
| **Medical Alpha** | `ttt_common_sana_crate` | Basic medical (pre-defined by /common) |
| **Medical Bravo** | `ttt_common_sanb_crate` | Mid medical (pre-defined by /common) |
| **Medical Charlie** | `ttt_common_sanc_crate` | Advanced medical (pre-defined by /common) |

Dynamic crates (Ammo–Support) are filled from the scanned database.
Medical crates spawn the pre-defined TTT common classes as-is.

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
|---|---|---|---|
| Enable Resupply | Checkbox | `false` | Master toggle |
| Crate Faction | List | `NATO` | Box class prefix: NATO / OPFOR / INDEP |
| Quantity Multiplier | Slider (0.5–5.0) | `1.0` | Scale factor on per-player averages |
| Depot Object Variable | Editbox | `ttt_resupply_enabled` | Variable name checked on tagged objects |

## Mission Maker Usage

### ACE action on a depot object

Add to the object's **Init** field:

```sqf
this setVariable ["ttt_resupply_enabled", true];
```

Players see a **Resupply** submenu on the object with all eight crate types listed.
The submenu is only visible when the addon is enabled.

The crate spawns 3 m to the right of the depot object.

### Zeus modules

In Zeus, open the **Supports** category. Eight modules are available — one per
crate type. Placing a module spawns the corresponding crate at that position and
removes the module logic.

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
- `ace_interact_menu`
