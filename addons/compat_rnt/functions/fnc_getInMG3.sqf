#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_getInMG3.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Moves the loader into the MG3 seat and locks the loader seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getInMG3
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

_player action ["moveToTurret", _vehicle, WIESEL_TOW_MG3_TURRET_PATH];
[QEGVAR(common,lockSeat), [_vehicle, WIESEL_TOW_LOADER_TURRET_PATH, _player]] call CBA_fnc_localEvent;

_vehicle animate ["Seat_R_Trans", 1];
