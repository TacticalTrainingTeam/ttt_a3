#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Moves the commander into the TOW seat and locks the commander seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getInTOW
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

_player action ["moveToTurret", _vehicle, WIESEL_TOW_TURRET_PATH];
[QEGVAR(common,lockSeat), [_vehicle, WIESEL_TOW_COMMANDER_TURRET_PATH, _player]] call CBA_fnc_localEvent;

_vehicle animate ["Seat_L_Trans", 1];
_vehicle animate ["TOW_Hide_Rohr", 0];
