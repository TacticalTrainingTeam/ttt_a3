#include "..\script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_handleFired.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), only the smoke launcher part
 *
 *  Description:
 *      Fired event handler of the Marder. Plays the smoke launcher effect of Redd'n'Tank when the smoke launcher was fired by the gunner or commander.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: STRING - Weapon
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call ttt_compat_rnt_fnc_handleMarderFired
 *
 * Public: NO
 */

params ["_vehicle", "_weapon"];

if (_weapon == QGVAR(SmokeLauncher)) then {
    [_vehicle] call Redd_fnc_SmokeLauncher;
};
