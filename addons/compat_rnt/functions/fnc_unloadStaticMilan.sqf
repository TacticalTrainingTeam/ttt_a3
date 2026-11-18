#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/functions/fnc_unload.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), renamed
 *
 *  Description:
 *      Unloads the dismounted Milan and hands the Milan tube to the player as backpack.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_unloadStaticMilan
 *
 * Public: NO
 */

params ["_milan", "_player"];

[QGVAR(removeMagazines), [_milan, MILAN_MAGAZINE], _milan] call CBA_fnc_targetEvent;
_player addBackpackGlobal MILAN_BARREL;
_milan animateSource ["ReloadMagazine", 1, true];
