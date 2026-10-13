#include "..\script_component.hpp"
/**
 *  Author: Timi007
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

private _turret = [];
private _ladder = objNull;
switch (_side) do {
    case "left": {
        _turret = MARDER_HATCH_LEFT_TURRET_PATH;
        _ladder = [_vehicle, QGVAR(ladderLeft)] call FUNC(getAttachedLadder);
    };
    case "right": {
        _turret = MARDER_HATCH_RIGHT_TURRET_PATH;
        _ladder = [_vehicle, QGVAR(ladderRight)] call FUNC(getAttachedLadder);
    };
};

!isNull _ladder &&
{isNull EGVAR(vehicle_ladder,ladder)} && // Not already adjusting a ladder
{(_vehicle turretUnit _turret) isEqualTo _player} &&
{isTurnedOut _player} &&
{[_ladder] call ace_tacticalladder_fnc_isLadderEmpty}
