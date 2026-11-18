#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canUnloadMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Checks if the player can unload the Milan of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can unload
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_canUnloadMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle animationSourcePhase "Hide_Milan_Source" isEqualTo 0} &&
{_vehicle magazinesTurret MARDER_MILAN_TURRET_PATH isNotEqualTo []} &&
{[_vehicle, _player, true] call FUNC(canOperateMilan)}
