#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the player can move from the commander seat to the TOW seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can get in TOW.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canGetInTOW
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{
    ((_player isEqualTo commander _vehicle) && {_vehicle animationSourcePhase "Hatch_L_Rear_Source" isEqualTo 1}) || // is commander and turned out
    {_vehicle turretUnit WIESEL_TOW_COMMANDER_HIGHER_TURRET_PATH isEqualTo _player} // is commander and turned out higher
}
