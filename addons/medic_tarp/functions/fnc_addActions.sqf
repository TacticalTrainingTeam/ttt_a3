#include "..\script_component.hpp"
/*
* Author: EinStein
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
* [] call ttt_medic_tarp_fnc_addActions;
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

    _object setVariable ["ace_medical_isMedicalFacility", true, true];
    [_object, false] remoteExec ["allowDamage", (owner _object), false];

    private _position = getPos _object;
    {
        createVehicle [_x, _position, [], 1, "CAN_COLLIDE"];
    } forEach (parseSimpleArray GVAR(additionalItems));

    private _arrayItems = nearestObjects [_position, (parseSimpleArray GVAR(additionalItems)), 10];
    {
        _x addCuratorEditableObjects [([_object] + _arrayItems), false];
    } forEach allCurators;
};

private _onDeconstruct = {
    params ["_target"];
    private _arrayItems = nearestObjects [(getPos _target), (parseSimpleArray GVAR(additionalItems)), 10];
    deleteVehicle _arrayItems;
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
