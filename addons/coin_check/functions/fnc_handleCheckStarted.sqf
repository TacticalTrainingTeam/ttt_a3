#include "..\script_component.hpp"
/*
 * Author: Andx
 * CBA global event handler run on every client when the server grants a new coin check.
 * Records it so the self action can react to it, tosses the initiator's own coin now that the
 * shared holder is confirmed to exist, and prompts other nearby eligible players to respond.
 *
 * Arguments:
 * 0: Ground weapon holder netId <STRING>
 * 1: Position of the check <POSITION>
 * 2: Response deadline, in CBA_missionTime <NUMBER>
 * 3: Initiator netId <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_holderNetId", "_pos", "_endTime", "_initiatorNetId"];

GVAR(activeCheck) = [_holderNetId, _pos, _endTime, _initiatorNetId];

if (netId ACE_player == _initiatorNetId) exitWith {
    (ACE_player call FUNC(hasCoin)) params ["_hasCoin", "_class"];
    if (!_hasCoin) exitWith {};

    [ACE_player, _class, objectFromNetId _holderNetId] call FUNC(respond);
    GVAR(respondedHolderId) = _holderNetId;

    [format [LLSTRING(started), RESPONSE_RADIUS, RESPONSE_TIME], true] call ace_common_fnc_displayText;
};

if (!GVAR(enabled)) exitWith {};
if (ACE_player distance _pos > RESPONSE_RADIUS) exitWith {};

(ACE_player call FUNC(hasCoin)) params ["_hasCoin"];
if (!_hasCoin) exitWith {};

[format [LLSTRING(prompt), round (_endTime - CBA_missionTime)], true] call ace_common_fnc_displayText;
