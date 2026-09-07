#include "..\script_component.hpp"
/*
 * Author: Andx
 * Statement for the ACE self action: joins the active coin check if the player is in range and
 * hasn't responded yet, notes if they already have, otherwise requests a new one - unless a
 * check is already running elsewhere, in which case nothing happens until it ends.
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

(_unit call FUNC(scanChecks)) params ["_joinId", "_nearAnswered", "_checkInProgress"];

if (_joinId != "") exitWith {
    private _holder = objectFromNetId _joinId;
    if (!isNull _holder) then {
        [_unit, _class, _holder] call FUNC(respond);
        GVAR(respondedHolderId) = _joinId;
    };
};

if (_nearAnswered) exitWith {
    [LLSTRING(alreadyTossed), true] call ace_common_fnc_displayText;
};

if (_checkInProgress) exitWith {
    [LLSTRING(inProgress), true] call ace_common_fnc_displayText;
};

[_unit] call FUNC(start);
