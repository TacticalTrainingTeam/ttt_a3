#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Context <HASHMAP>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target", "_caller", "_context"];

private _strings = _context get "strings";

// Just a sanity check that there's room at all before running the whole progress bar - the
// facility doesn't exist yet at this point, so its own bounding box isn't known until
// FUNC(facilityConstruct) actually creates it and places it precisely.
private _targetHalfLength = (((boundingBoxReal _target) select 1 select 1) - ((boundingBoxReal _target) select 0 select 1)) / 2;
private _estimatedDistance = _targetHalfLength + FACILITY_ESTIMATED_HALF_LENGTH + FACILITY_PLACEMENT_CLEARANCE;

private _position = (_target getPos [-_estimatedDistance, getDir _target]) findEmptyPosition [2, 10, "Tank"];

if (_position isEqualTo []) exitWith {
    [_strings get "hintErrorNoSpace", true] call ace_common_fnc_displayText;
};

private _varPrefix = _context get "varPrefix";
_target setVariable [_varPrefix + "_hasFacility", false, true];
_target setVariable [_varPrefix + "_fuel", fuel _target, true];

[QGVAR(setFuel), [_target, 0], _target] call CBA_fnc_targetEvent;
[QGVAR(setVelocity), [_target, [0, 0, 0]], _target] call CBA_fnc_targetEvent;

if (_context get "useAnimation") then {
    _caller playMove (_context get "buildAnimation");
};

[
    _context get "buildTime",
    [_target, _caller, _context],
    {
        (_this select 0) params ["_target", "_caller", "_context"];
        [_target, _caller, _context] call FUNC(facilityConstruct);
    },
    {
        (_this select 0) params ["_target", "_caller", "_context"];
        [_target, _caller, _context] call FUNC(cancel);
    },
    _strings get "actionConstruct"
] call ace_common_fnc_progressBar;
