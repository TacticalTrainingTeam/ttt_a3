#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/functions/fnc_canUnload.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), renamed, also requires a free backpack slot
 *
 *  Description:
 *      Checks if the player can unload the dismounted Milan. The player must not wear a backpack,
 *      because the Milan tube is handed over as backpack.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can unload
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canUnloadStaticMilan
 *
 * Public: NO
 */

params ["_milan", "_player"];

alive _milan &&
{(_player distance _milan) < MILAN_ACTION_DISTANCE} &&
{objectParent _player isNotEqualTo _milan} &&
{backpack _player isEqualTo ""} &&
{(magazinesAllTurrets _milan) findIf {(_x select 2) > 0} != -1}
