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
* [] call ttt_drone_tarp_fnc_addActions;
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
    private _pad =  createVehicle ["Land_HelipadEmpty_F", getPos _object, [], 0, "CAN_COLLIDE"];
    [_object, false] remoteExec ["allowDamage", (owner _object), false];
    _object setVariable [QGVAR(helipad), _pad, true];
};

private _onDeconstruct = {
    params ["_target"];
    private _pad = _target getVariable [QGVAR(helipad), objNull];
    if !(isNull _pad) then { deleteVehicle _pad; };
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
    ["onConstruct", _onConstruct],
    ["onDeconstruct", _onDeconstruct]
];

[_config] call EFUNC(tarps,deployableAddActions);
