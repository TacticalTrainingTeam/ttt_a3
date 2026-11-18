#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canLoadMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), seat check of the Milan functions merged into one function
 *
 *  Description:
 *      Checks if the player may operate the Milan of the Marder: the commander turned out or in the higher commander seat,
 *      optionally also the unit turned out in the right hatch.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *      2: BOOLEAN - Also allow the right hatch (default: false)
 *
 *  Returns:
 *      BOOLEAN - Player may operate the Milan
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_canOperateMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player", ["_allowHatch", false]];

((_player isEqualTo commander _vehicle) && {_vehicle animationSourcePhase "hatchCommander" isEqualTo 1}) || // is commander and turned out
{_vehicle turretUnit MARDER_COMMANDER_HIGHER_TURRET_PATH isEqualTo _player} || // is in the higher commander seat
{_allowHatch && {_vehicle turretUnit MARDER_HATCH_RIGHT_TURRET_PATH isEqualTo _player} && {isTurnedOut _player}}
