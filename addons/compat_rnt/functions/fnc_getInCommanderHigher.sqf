#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Moves the player into the higher commander seat and locks the lower one.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getInCommanderHigher
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

private _config = configOf _vehicle;

_player action ["moveToTurret", _vehicle, getArray (_config >> QGVAR(commanderHigherTurret))];
[QEGVAR(common,lockSeat), [_vehicle, getArray (_config >> QGVAR(commanderTurret)), _player]] call CBA_fnc_localEvent;
_vehicle setVariable [getText (_config >> QGVAR(binoVariable)), true, true];
