#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/functions/fnc_load.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), renamed
 *
 *  Description:
 *      Loads the dismounted Milan with the Milan tube the player carries as backpack.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_loadStaticMilan
 *
 * Public: NO
 */

params ["_milan", "_player"];

// reload only works where the Milan is local, addMagazineGlobal has a global effect
_milan addMagazineGlobal MILAN_MAGAZINE;
[QGVAR(reload), [_milan], _milan] call CBA_fnc_targetEvent;

removeBackpackGlobal _player;
_milan animateSource ["ReloadMagazine", 0, true];
