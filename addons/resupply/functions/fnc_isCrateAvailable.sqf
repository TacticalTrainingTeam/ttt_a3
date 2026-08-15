#include "..\script_component.hpp"

/*
 * Author: Andx
 * Checks whether a crate of the given type could currently be spawned - the
 * loadout scan must have completed and, for dynamic types, its category must
 * not be empty. Medical crates are always available since they are pre-filled
 * independent of the scan database. Used by the ACE action condition to hide
 * crate types that would just fail with a hint if picked.
 *
 * Arguments:
 * 0: Crate type - "ammo", "grenades", "at", "explosives", "support",
 *    "medical_alpha", "medical_bravo", "medical_charlie" <STRING>
 *
 * Return Value:
 * Available <BOOLEAN>
 *
 * Example:
 * ["ammo"] call ttt_resupply_fnc_isCrateAvailable;
 *
 * Public: No
 */

params [["_type", "", [""]]];

if (_type in ["medical_alpha", "medical_bravo", "medical_charlie"]) exitWith { true };

if (!GVAR(db_init)) exitWith { false };

(GVAR(db) getOrDefault [_type, []]) isNotEqualTo []
