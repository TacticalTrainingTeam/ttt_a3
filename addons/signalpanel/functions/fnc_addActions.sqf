#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Builds the config for, and registers with, the shared TTT "deployable
* tarp" framework (see ttt_common's deployable* functions).
*
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ttt_signalpanel_fnc_addActions;
*
* Public: No
*/

private _tarpItems = [
    [QGVAR(tarp_Black), "Tarp_01_Large_Black_F"],
    [QGVAR(tarp_Green), "Tarp_01_Large_Green_F"],
    [QGVAR(tarp_Red), "Tarp_01_Large_Red_F"],
    [QGVAR(tarp_Yellow), "Tarp_01_Large_Yellow_F"]
];

private _config = createHashMapFromArray [
    ["constructId", "ttt_signalpanel_constuct"],
    ["deconstructId", "ttt_signalpanel_deconstuct"],
    ["tarpItems", _tarpItems],
    ["inUseVar", "ttt_signalpanel_inUse"],
    ["buildTime", GVAR(buildTime)],
    ["deconstructTimeMultiplier", 2],
    ["useAnimation", GVAR(useAnimation)],
    ["constructText", LLSTRING(actionConstruct)],
    ["deconstructText", LLSTRING(actionDeconstruct)],
    ["abortText", LLSTRING(abort)],
    ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
    ["hintLoaded", LLSTRING(hintLoaded)]
];

[_config] call EFUNC(common,deployableAddActions);
