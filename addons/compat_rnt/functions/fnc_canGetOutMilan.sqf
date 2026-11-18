#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canGetOutMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Checks if the player sits on the Milan of the Marder and can move back to the commander seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can get out
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_canGetOutMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle turretUnit MARDER_MILAN_TURRET_PATH isEqualTo _player}
