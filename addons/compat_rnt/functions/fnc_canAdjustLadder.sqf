#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canAdjustLadder.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, guards the ACE function
 *
 *  Description:
 *      Checks if the player turned out at the hatch on the given side can adjust the ladder on that side.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *      2: STRING - Side, "left" or "right"
 *
 *  Returns:
 *      BOOLEAN - Can adjust ladder
 *
 *  Example:
 *      [cursorObject, player, "left"] call ttt_compat_rnt_fnc_canAdjustLadder
 *
 * Public: NO
 */

params ["_vehicle", "_player", "_side"];

(GVAR(ladderSides) get _side) params ["_turret", "_ladderVariable"];
private _ladder = [_vehicle, _ladderVariable] call FUNC(getAttachedLadder);

!isNull _ladder &&
{isNull EGVAR(vehicle_ladder,ladder)} && // Not already adjusting a ladder
{(_vehicle turretUnit _turret) isEqualTo _player} &&
{isTurnedOut _player} &&
{isNil "ace_tacticalladder_fnc_isLadderEmpty" || {[_ladder] call ace_tacticalladder_fnc_isLadderEmpty}}
