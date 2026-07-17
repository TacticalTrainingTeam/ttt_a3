#include "..\script_component.hpp"

/*
 * Author: Andx
 * Zeus module handler. Derives the crate type from the module classname and
 * spawns the corresponding resupply crate at the module position.
 * All eight Zeus module classes share this single function.
 *
 * Arguments:
 * 0: Module logic object <OBJECT>
 * 1: Synchronized units (unused) <ARRAY>
 * 2: Whether the module was activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [moduleLogic, [], true] call ttt_resupply_fnc_zeusModule;
 *
 * Public: No
 */

params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};

// Map module classname to crate type
private _typeMap = createHashMapFromArray [
    [QGVAR(zeusAmmo),       "ammo"],
    [QGVAR(zeusGrenades),   "grenades"],
    [QGVAR(zeusAt),         "at"],
    [QGVAR(zeusExplosives), "explosives"],
    [QGVAR(zeusSupport),    "support"],
    [QGVAR(zeusMedAlpha),   "medical_alpha"],
    [QGVAR(zeusMedBravo),   "medical_bravo"],
    [QGVAR(zeusMedCharlie), "medical_charlie"]
];

private _type = _typeMap getOrDefault [typeOf _logic, "ammo"];
[getPos _logic, _type] call FUNC(spawnCrate);
deleteVehicle _logic;
