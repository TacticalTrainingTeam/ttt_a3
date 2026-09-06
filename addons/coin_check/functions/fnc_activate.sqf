#include "..\script_component.hpp"
/*
 * Author: Andx
 * Statement for the ACE self action: joins a nearby active coin check the player hasn't
 * responded to yet, otherwise starts a new one - unless the player is standing at a check
 * they already answered, in which case nothing happens (avoids spawning a redundant check
 * right on top of one they've already dealt with).
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _unit = ACE_player;

(_unit call FUNC(hasCoin)) params ["_hasCoin", "_class"];
if (!_hasCoin) exitWith {};

[] call FUNC(pruneChecks);

(_unit call FUNC(scanChecks)) params ["_joinId", "_nearAnswered"];

if (_joinId != "") exitWith {
    private _holder = objectFromNetId _joinId;
    if (!isNull _holder) then {
        [_unit, _class, _holder] call FUNC(respond);
        GVAR(respondedTo) pushBackUnique _joinId;
    };
};

if (_nearAnswered) exitWith {
    [LLSTRING(alreadyTossed), true] call ace_common_fnc_displayText;
};

[_unit, _class] call FUNC(start);
