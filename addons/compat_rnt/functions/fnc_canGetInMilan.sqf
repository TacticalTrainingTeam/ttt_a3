#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canGetInMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, also requires the Milan seat to be empty
 *
 *  Description:
 *      Checks if the player can move from the commander seat onto the assembled Milan of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can get in
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_canGetInMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle animationSourcePhase "Hide_Milan_Source" isEqualTo 0} &&
{isNull (_vehicle turretUnit MARDER_MILAN_TURRET_PATH)} &&
{[_vehicle, _player] call FUNC(canOperateMilan)}
