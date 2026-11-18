#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/functions/fnc_canLoad.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), renamed, checks the ammo of the Milan magazine instead of the magazine list
 *
 *  Description:
 *      Checks if the player can load the dismounted Milan: they stand next to it, carry a Milan tube as backpack and it is not loaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can load
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canLoadStaticMilan
 *
 * Public: NO
 */

params ["_milan", "_player"];

alive _milan &&
{(_player distance _milan) < MILAN_ACTION_DISTANCE} &&
{objectParent _player isNotEqualTo _milan} &&
{backpack _player isEqualTo MILAN_BARREL} &&
{!STATIC_MILAN_LOADED(_milan)}
