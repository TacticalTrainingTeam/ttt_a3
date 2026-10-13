#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_getInCommanderHigher.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for commander and loader seats, merged with fnc_getInLoaderHigher.sqf
 *
 *  Description:
 *      Moves the player into the higher seat of the given seat group (commander or loader) and locks the lower one.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player
 *      2: STRING - Seat, "commander" or "loader" (default: "commander")
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player, "commander"] call ttt_compat_rnt_fnc_getInHigher
 *
 * Public: NO
 */

params ["_vehicle", "_player", ["_seat", "commander"]];

([_vehicle, _seat] call FUNC(getSeatData)) params ["_turret", "_higherTurret", "", "_binoVariable"];

_player action ["moveToTurret", _vehicle, _higherTurret];
[QEGVAR(common,lockSeat), [_vehicle, _turret, _player]] call CBA_fnc_localEvent;
_vehicle setVariable [_binoVariable, true, true];
