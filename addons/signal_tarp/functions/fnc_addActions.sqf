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
* [] call ttt_signal_tarp_fnc_addActions;
*
* Public: No
*/

private _tarpItems = [
    [QGVAR(tarp_Black), "Tarp_01_Large_Black_F"],
    [QGVAR(tarp_Green), "Tarp_01_Large_Green_F"],
    [QGVAR(tarp_Red), "Tarp_01_Large_Red_F"],
    [QGVAR(tarp_Yellow), "Tarp_01_Large_Yellow_F"]
];

private _onConstruct = {
    params ["_object", "_caller"];

    [_object, false] remoteExec ["allowDamage", (owner _object), false];
};

private _config = createHashMapFromArray [
    ["constructId", QGVAR(construct)],
    ["deconstructId", QGVAR(deconstruct)],
    ["tarpItems", _tarpItems],
    ["inUseVar", QGVAR(inUse)],
    ["buildTime", GVAR(buildTime)],
    ["useAnimation", GVAR(useAnimation)],
    ["animation", GVAR(buildAnimation)],
    ["constructText", LLSTRING(actionConstruct)],
    ["deconstructText", LLSTRING(actionDeconstruct)],
    ["abortText", LLSTRING(abort)],
    ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
    ["hintLoaded", LLSTRING(hintLoaded)],
    ["onConstruct", _onConstruct]
];

[_config] call EFUNC(tarps,deployableAddActions);
