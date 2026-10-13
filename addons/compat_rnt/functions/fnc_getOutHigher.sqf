#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Moves the player from the higher seat back into the normal seat of the given seat group (commander or loader) and unlocks it.
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
 *      [vehicle player, player, "commander"] call ttt_compat_rnt_fnc_getOutHigher
 *
 * Public: NO
 */

params ["_vehicle", "_player", ["_seat", "commander"]];

private _config = configOf _vehicle;

_player action ["moveToTurret", _vehicle, getArray (_config >> format [QGVAR(%1Turret), _seat])];
[QEGVAR(common,unlockSeat), [_player]] call CBA_fnc_localEvent;
_vehicle setVariable [getText (_config >> format [QGVAR(%1BinoVariable), _seat]), false, true];
