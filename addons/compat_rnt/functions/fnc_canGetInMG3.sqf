#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the player can move from the loader seat to the MG3 seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can get in MG3.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canGetInMG3
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{
    ((_vehicle turretUnit WIESEL_TOW_LOADER_TURRET_PATH isEqualTo _player) && {_vehicle animationSourcePhase "Hatch_R_Rear_Source" isEqualTo 1}) || // is loader and turned out
    {_vehicle turretUnit WIESEL_TOW_LOADER_HIGHER_TURRET_PATH isEqualTo _player} // is loader and turned out higher
}
