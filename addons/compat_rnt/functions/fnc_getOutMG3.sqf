#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_getOutMG3.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Moves the player from the MG3 seat back to the loader seat and unlocks it.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getOutMG3
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

_player action ["moveToTurret", _vehicle, WIESEL_TOW_LOADER_TURRET_PATH];
[QEGVAR(common,unlockSeat), [_player]] call CBA_fnc_localEvent;
[_vehicle, "loader"] call FUNC(resetSeatState);

_vehicle animate ["Seat_R_Trans", 0];
