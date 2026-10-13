#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canAttachLadder.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Checks if the player turned out at the hatch on the given side can set up a ladder on the Marder: there is no ladder on that side yet and a ladder pack is in the cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *      2: STRING - Side, "left" or "right"
 *
 *  Returns:
 *      BOOLEAN - Can attach ladder
 *
 *  Example:
 *      [cursorObject, player, "left"] call ttt_compat_rnt_fnc_canAttachLadder
 *
 * Public: NO
 */

params ["_vehicle", "_player", "_side"];

(GVAR(ladderSides) get _side) params ["_turret", "_ladderVariable"];
private _ladder = [_vehicle, _ladderVariable] call FUNC(getAttachedLadder);

alive _vehicle &&
{isNull _ladder} &&
{(_vehicle turretUnit _turret) isEqualTo _player} &&
{isTurnedOut _player} &&
{"ACE_TacticalLadder_Pack" in backpackCargo _vehicle}
