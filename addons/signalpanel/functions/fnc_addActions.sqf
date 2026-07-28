#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Builds the config for, and registers with, the shared TTT "deployable
* panel/tent" framework (see ttt_common's deployable* functions).
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

private _classname = {
    switch (GVAR(tarpColor)) do {
        case 0: {"Tarp_01_Large_Black_F"};
        case 1: {"Tarp_01_Large_Green_F"};
        case 2: {"Tarp_01_Large_Red_F"};
        case 3: {"Tarp_01_Large_Yellow_F"};
        default {"Tarp_01_Large_Red_F"};
    };
};

private _config = createHashMapFromArray [
    ["constructId", "ttt_signalpanel_constuct"],
    ["deconstructId", "ttt_signalpanel_deconstuct"],
    ["classname", _classname],
    ["deconstructClass", call _classname],
    ["enable", GVAR(enable)],
    ["supportedBackpacks", parseSimpleArray GVAR(supportedBackpacks)],
    ["hasItemVar", "ttt_signalpanel_hasTarp"],
    ["inUseVar", "ttt_signalpanel_inUse"],
    ["buildTime", GVAR(buildTime)],
    ["deconstructTimeMultiplier", 2],
    ["constructText", LLSTRING(actionConstruct)],
    ["deconstructText", LLSTRING(actionDeconstruct)],
    ["abortText", LLSTRING(abort)],
    ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
    ["hintLoaded", LLSTRING(hintLoaded)]
];

[_config] call EFUNC(common,deployableAddActions);
