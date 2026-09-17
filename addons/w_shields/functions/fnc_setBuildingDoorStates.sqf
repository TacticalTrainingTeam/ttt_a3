#include "..\script_component.hpp"
#include "defines.inc"
/*
 * Author: Andx
 *
 * Description:
 * Sets the state (closed/locked/open) of a building's doors using the vanilla bis_disabled_door_N convention.
 *
 * Arguments:
 * 0: Target building <OBJECT>
 * 1: Door states, index 0 = door 1 <ARRAY of DOOR_STATE_*>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params [
    ["_target", objNull, [objNull]],
    ["_states", [], [[]]]
];

if (isNull _target || {_states isEqualTo []}) exitWith {};

//Eden's module Combo attribute delivers its value as a string (eg. "0"), not the numeric "value" field configured
//in CfgVehicles.hpp's Values class, so states arriving here need coercing back to a number for SETUP_DOOR's selects
_states = _states apply {if (_x isEqualType "") then {parseNumber _x} else {_x}};

{
    SETUP_DOOR(_target, _forEachIndex, _x)
} forEach _states;

_target setVariable [QGVAR(doorStates), _states, true];
