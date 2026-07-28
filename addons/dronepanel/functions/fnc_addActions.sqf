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
* [] call ttt_dronepanel_fnc_addActions;
*
* Public: No
*/

private _classname = {
    switch (GVAR(tarpColor)) do {
        case 0: {"Tarp_01_Small_Black_F"};
        case 1: {"Tarp_01_Small_Green_F"};
        case 2: {"Tarp_01_Small_Red_F"};
        case 3: {"Tarp_01_Small_Yellow_F"};
        default {"Tarp_01_Small_Red_F"};
    };
};

// The drone panel also needs a helipad prop so drones can land on it
private _onConstruct = {
    params ["_object"];
    private _pad = "Land_HelipadEmpty_F" createVehicle (getPos _object);
    _pad setDir (getDir _object);
    _object setVariable [QGVAR(helipad), _pad, true];
};

private _onDeconstruct = {
    params ["_target"];
    private _pad = _target getVariable [QGVAR(helipad), objNull];
    if !(isNull _pad) then { deleteVehicle _pad; };
};

private _config = createHashMapFromArray [
    ["constructId", "ttt_dronepanel_constuct"],
    ["deconstructId", "ttt_dronepanel_deconstuct"],
    ["classname", _classname],
    ["deconstructClass", call _classname],
    ["enable", GVAR(enable)],
    ["supportedBackpacks", parseSimpleArray GVAR(supportedBackpacks)],
    ["hasItemVar", "ttt_dronepanel_hasTarp"],
    ["inUseVar", "ttt_dronepanel_inUse"],
    ["buildTime", GVAR(buildTime)],
    ["deconstructTimeMultiplier", 2],
    ["constructText", LLSTRING(actionConstruct)],
    ["deconstructText", LLSTRING(actionDeconstruct)],
    ["abortText", LLSTRING(abort)],
    ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
    ["hintLoaded", LLSTRING(hintLoaded)],
    ["onConstruct", _onConstruct],
    ["onDeconstruct", _onDeconstruct]
];

[_config] call EFUNC(common,deployableAddActions);
