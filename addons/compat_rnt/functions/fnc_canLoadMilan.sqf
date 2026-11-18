#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canLoadMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Checks if the player can load the Milan of the Marder: it is assembled and empty and a Milan tube is in the cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can load
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_canLoadMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle animationSourcePhase "Hide_Milan_Source" isEqualTo 0} &&
{_vehicle magazinesTurret MARDER_MILAN_TURRET_PATH isEqualTo []} &&
{[_vehicle, _player, true] call FUNC(canOperateMilan)} &&
{MILAN_BARREL in backpackCargo _vehicle}
