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
* [] call ttt_dronepanel_fnc_addActions;
*
* Public: No
*/

private _tarpItems = [
    [QGVAR(tarp_Black), "Tarp_01_Small_Black_F"],
    [QGVAR(tarp_Green), "Tarp_01_Small_Green_F"],
    [QGVAR(tarp_Red), "Tarp_01_Small_Red_F"],
    [QGVAR(tarp_Yellow), "Tarp_01_Small_Yellow_F"]
];

// The drone tarp also needs a helipad prop so drones can land on it
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
    ["tarpItems", _tarpItems],
    ["inUseVar", "ttt_dronepanel_inUse"],
    ["buildTime", GVAR(buildTime)],
    ["deconstructTimeMultiplier", 2],
    ["useAnimation", GVAR(useAnimation)],
    ["constructText", LLSTRING(actionConstruct)],
    ["deconstructText", LLSTRING(actionDeconstruct)],
    ["abortText", LLSTRING(abort)],
    ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
    ["hintLoaded", LLSTRING(hintLoaded)],
    ["onConstruct", _onConstruct],
    ["onDeconstruct", _onDeconstruct]
];

[_config] call EFUNC(common,deployableAddActions);
