#include "..\script_component.hpp"
/*
 * Author: Andx
 * Checks the active coin check, if any, against a unit: whether it can still be joined, whether
 * the unit is standing at one it already answered, and whether a check is running at all - used
 * so activating the self action doesn't spawn a redundant check or start a second one.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: ACE_player)
 *
 * Return Value:
 * 0: Ground weapon holder netId of the check to join, "" if none in range <STRING>
 * 1: Whether the unit is within range of a check it already answered <BOOL>
 * 2: Whether a check is currently active, anywhere <BOOL>
 *
 * Public: No
 */

params [["_unit", ACE_player, [objNull]]];

private _joinId = "";
private _nearAnswered = false;
private _checkInProgress = false;

if (!isNil QGVAR(activeCheck)) then {
    GVAR(activeCheck) params ["_holderNetId", "_pos", "_endTime"];

    if (_endTime > CBA_missionTime) then {
        _checkInProgress = true;

        if (_unit distance _pos <= RESPONSE_RADIUS) then {
            if (_holderNetId == GVAR(respondedHolderId)) then {
                _nearAnswered = true;
            } else {
                _joinId = _holderNetId;
            };
        };
    };
};

[_joinId, _nearAnswered, _checkInProgress]
