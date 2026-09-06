#include "..\script_component.hpp"
/*
 * Author: Andx
 * Scans the active coin checks (there can be several at once, in different places) for a unit:
 * finds one it can still join, and notes whether it's standing at one it already answered -
 * used so activating the self action doesn't spawn a redundant check on top of that one.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: ACE_player)
 *
 * Return Value:
 * 0: Ground weapon holder netId of a joinable check, "" if none <STRING>
 * 1: Whether the unit is within range of a check it already answered <BOOL>
 *
 * Public: No
 */

params [["_unit", ACE_player, [objNull]]];

private _joinId = "";
private _nearAnswered = false;

{
    _y params ["_pos", "_radius", "_endTime"];

    if (_endTime > CBA_missionTime && {_unit distance _pos <= _radius}) then {
        if (_x in GVAR(respondedTo)) then {
            _nearAnswered = true;
        } else {
            if (_joinId == "") then { _joinId = _x; };
        };
    };
} forEach GVAR(activeChecks);

[_joinId, _nearAnswered]
