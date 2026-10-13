#include "..\script_component.hpp"
/*
* Author: Timi007
* Gets the smoke launcher muzzle of the given vehicle class from its config (ttt_smoke_launcher_muzzle).
*
* Arguments:
* 0: STRING - Vehicle class
*
* Return Value:
* STRING - Smoke launcher muzzle, empty string if the vehicle has none
*
* Example:
* [typeOf _vehicle] call ttt_smoke_launcher_fnc_getSmokeLauncher
*
* Public: No
*/


params [["_vehicleClass", "", [""]]];

if (_vehicleClass isEqualTo "") exitWith {""};

GVAR(muzzleCache) getOrDefaultCall [_vehicleClass, {
    getText (configFile >> "CfgVehicles" >> _vehicleClass >> QGVAR(muzzle))
}, true]
