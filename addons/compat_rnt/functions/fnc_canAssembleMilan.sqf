#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canAssembleMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Checks if the player can assemble the Milan on the Marder: a Milan tripod (Redd'n'Tank or GM) is in the cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can assemble
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_canAssembleMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

private _backpacks = backpackCargo _vehicle;

alive _vehicle &&
{_vehicle animationSourcePhase "Hide_Milan_Source" > 0} &&
{[_vehicle, _player] call FUNC(canOperateMilan)} &&
{MILAN_TRIPOD in _backpacks || {MILAN_TRIPOD_GM in _backpacks}}
