#include "..\script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_handleFired.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, runs next to the fired handler of Redd'n'Tank
 *
 *  Description:
 *      FiredBIS event handler of the Marder. Plays the smoke launcher effect of Redd'n'Tank when the
 *      smoke launcher copy of this addon was fired. Redd's own fired handler only reacts to its own
 *      weapon class, so the effect is not played twice.
 *      After a Milan shot, hides the tube and removes the Milan magazine, which otherwise stays in the
 *      turret, so that the Milan has to be loaded again from the cargo. Redd's handler still drops the empty tube.
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
 *  Public: No
 */

params ["_vehicle", "_weapon"];

if (_weapon == QGVAR(SmokeLauncher)) then {
    [_vehicle] call Redd_fnc_SmokeLauncher;
};

// FiredBIS runs on every machine, the magazine can only be removed where the turret is local
if (_weapon == "Redd_Milan" && {_vehicle turretLocal MARDER_MILAN_TURRET_PATH}) then {
    _vehicle animateSource ["ReloadMagazine", 1, true];
    _vehicle removeMagazinesTurret [MILAN_MAGAZINE, MARDER_MILAN_TURRET_PATH];
};
