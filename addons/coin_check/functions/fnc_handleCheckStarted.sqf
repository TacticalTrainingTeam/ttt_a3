#include "..\script_component.hpp"
/*
 * Author: Andx
 * CBA global event handler run on every client when a coin check starts. Registers the check
 * (there may be several active at once, in different places) so the self action can react to
 * it, and prompts nearby eligible players to respond.
 *
 * Arguments:
 * 0: Ground weapon holder netId <STRING>
 * 1: Position of the check <POSITION>
 * 2: Response radius <NUMBER>
 * 3: Response deadline, in CBA_missionTime <NUMBER>
 * 4: Initiator netId <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_holderNetId", "_pos", "_radius", "_endTime", "_initiatorNetId"];

[] call FUNC(pruneChecks);
GVAR(activeChecks) set [_holderNetId, [_pos, _radius, _endTime]];

if (netId ACE_player == _initiatorNetId) exitWith {};
if (!GVAR(enabled)) exitWith {};
if (ACE_player distance _pos > _radius) exitWith {};

(ACE_player call FUNC(hasCoin)) params ["_hasCoin"];
if (!_hasCoin) exitWith {};

[format [LLSTRING(prompt), round (_endTime - CBA_missionTime)], true] call ace_common_fnc_displayText;
