#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Moves the player from the higher commander seat back into the normal one and unlocks it.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getOutCommanderHigher
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

private _config = configOf _vehicle;

_player action ["moveToTurret", _vehicle, getArray (_config >> QGVAR(commanderTurret))];
[QEGVAR(common,unlockSeat), [_player]] call CBA_fnc_localEvent;
_vehicle setVariable [getText (_config >> QGVAR(binoVariable)), false, true];
