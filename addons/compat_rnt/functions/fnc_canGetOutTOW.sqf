#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the player can leave the TOW seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can get out of TOW.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canGetOutTOW
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle turretUnit WIESEL_TOW_TURRET_PATH isEqualTo _player}
