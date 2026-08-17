#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Facility or Vehicle <OBJECT>
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

[_context get "strings" get "abort", true] call ace_common_fnc_displayText;
_caller switchMove "";

if (typeOf _target == _context get "facilityObject") then {
    _target setVariable [_varPrefix + "_inUse", false, true];

    private _vehicle = _target getVariable [_varPrefix + "_vehicle", objNull];

    [QGVAR(setFuel), [_vehicle, _vehicle getVariable [_varPrefix + "_fuel", 100]], _vehicle] call CBA_fnc_targetEvent;
} else {
    _target setVariable [_varPrefix + "_hasFacility", true, true];

    [QGVAR(setFuel), [_target, _target getVariable [_varPrefix + "_fuel", 100]], _target] call CBA_fnc_targetEvent;
};
