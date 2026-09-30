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

(_this select 0) params ["_target", "_caller", "_context"];

private _varPrefix = _context get "varPrefix";
_target setVariable [_varPrefix + "_inUse", true, true];

private _vehicle = _target getVariable [_varPrefix + "_vehicle", objNull];

_vehicle setVariable [_varPrefix + "_fuel", fuel _vehicle, true];
[QGVAR(setFuel), [_vehicle, 0], _vehicle] call CBA_fnc_targetEvent;
[QGVAR(setVelocity), [_vehicle, [0, 0, 0]], _vehicle] call CBA_fnc_targetEvent;

if (_context get "useAnimation") then {
    _caller playMove (_context get "buildAnimation");
};

[
    _context get "buildTime",
    [_target, _caller, _context],
    {
        (_this select 0) params ["_target", "_caller", "_context"];
        [_target, _caller, _context] call FUNC(facilityDeconstruct);
    },
    {
        (_this select 0) params ["_target", "_caller", "_context"];
        [_target, _caller, _context] call FUNC(cancel);
    },
    _context get "strings" get "actionDeconstruct"
] call ace_common_fnc_progressBar;
