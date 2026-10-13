#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the player is turned out in the given hatch seat and can leave the vehicle through it.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *      2: STRING - Hatch, "commander", "driver", "left", "right" or "middle"
 *
 *  Returns:
 *      BOOLEAN - Can get out through hatch.
 *
 *  Example:
 *      [cursorObject, player, "left"] call ttt_compat_rnt_fnc_canGetOutHatch
 *
 * Public: NO
 */

params ["_vehicle", "_player", "_hatch"];

private _isInTurret = switch (_hatch) do {
    case "commander": {(_vehicle turretUnit MARDER_COMMANDER_TURRET_PATH isEqualTo _player) || {_vehicle turretUnit MARDER_COMMANDER_HIGHER_TURRET_PATH isEqualTo _player}};
    case "driver": {_vehicle turretUnit MARDER_DRIVER_TURRET_PATH isEqualTo _player};
    case "left": {_vehicle turretUnit MARDER_HATCH_LEFT_TURRET_PATH isEqualTo _player};
    case "right": {_vehicle turretUnit MARDER_HATCH_RIGHT_TURRET_PATH isEqualTo _player};
    case "middle": {_vehicle turretUnit MARDER_HATCH_MIDDLE_TURRET_PATH isEqualTo _player};
    default {false};
};

alive _vehicle &&
{_isInTurret} &&
{isTurnedOut _player}
