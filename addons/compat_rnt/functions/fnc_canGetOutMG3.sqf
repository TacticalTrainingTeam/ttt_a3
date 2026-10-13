#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the player can leave the MG3 seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can get out of MG3.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canGetOutMG3
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle turretUnit WIESEL_TOW_MG3_TURRET_PATH isEqualTo _player}
