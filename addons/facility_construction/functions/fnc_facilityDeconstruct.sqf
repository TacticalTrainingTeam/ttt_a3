#include "..\script_component.hpp"
/*
* Author: Andx, originally by EinStein
*
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Context <HASHMAP>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller", "_context"];

private _varPrefix = _context get "varPrefix";
private _vehicle = _target getVariable [_varPrefix + "_vehicle", objNull];

[
    [
        _context get "strings" get "hintLoaded",
        round ((getPos _target) getDir (getPos _vehicle)),
        round ((getPos _target) distance (getPos _vehicle))
    ], 3
] call ace_common_fnc_displayTextStructured;

_vehicle setVariable [_varPrefix + "_hasFacility", true, true];
_vehicle setVariable [_varPrefix + "_facility", objNull, true];
[QGVAR(setFuel), [_vehicle, _vehicle getVariable [_varPrefix + "_fuel", 100]], _vehicle] call CBA_fnc_targetEvent;
deleteVehicle _target;
_caller switchMove "";
