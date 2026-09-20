#include "..\script_component.hpp"

/*
 * Author: Andx
 * Checks whether a crate of the given type could currently be spawned - the
 * depot's per-type stock (if limited) must not be exhausted, the loadout
 * scan must have completed, and for dynamic types, its category must not be
 * empty. Pre-filled crates (medical and the other common crates) skip the
 * scan check since they are filled independent of the scan database, but are
 * still subject to the depot's stock limit. Used by the ACE action condition to hide crate types that
 * would just fail with a hint if picked.
 *
 * Arguments:
 * 0: Crate type - "ammo", "grenades", "at", "explosives", "support",
 *    "medical_alpha", "medical_bravo", "medical_charlie", "spreng", "pio",
 *    "eod", "eod_ugv", "uav", "mark", "paradrop" <STRING>
 * 1: Depot object the action is attached to, or objNull for no stock limit <OBJECT>
 *
 * Return Value:
 * Available <BOOLEAN>
 *
 * Example:
 * ["ammo", myDepot] call ttt_resupply_fnc_isCrateAvailable;
 *
 * Public: No
 */

params [["_type", "", [""]], ["_container", objNull, [objNull]]];

if ([_container, _type] call FUNC(getCrateLimit) == 0) exitWith { false };

if (_type in GVAR(prefilled)) exitWith { true };

if (!GVAR(db_init)) exitWith { false };

(GVAR(db) getOrDefault [_type, []]) isNotEqualTo []
