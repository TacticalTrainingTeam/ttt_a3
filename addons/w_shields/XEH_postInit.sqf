#include "script_component.hpp"

//Registered on every machine (not just the server) since HandleDamage only has an effect on whichever machine the target is local to
[QGVAR(addVehicleShield), {
    params ["_target"];
    if (isNull _target || {_target getVariable [QGVAR(hasVHS), false]}) exitWith {};
    [_target] call FUNC(addVehicleShield);

    //Only hint once - the handler above runs on every machine, but only one server exists
    if (isServer) then {
        [LLSTRING(hintVehicleShieldAdded)] call ace_zeus_fnc_showMessage;
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(removeVehicleShield), {
    params ["_target"];
    if (isNull _target) exitWith {};
    private _removed = [_target] call FUNC(removeVehicleShield);

    //Only hint once and only if this machine actually had a handler to remove
    if (isServer && {_removed}) then {
        [LLSTRING(hintVehicleShieldRemoved)] call ace_zeus_fnc_showMessage;
    };
}] call CBA_fnc_addEventHandler;

if (isServer) then {
    [QGVAR(addBuildingShield), {
        params ["_target"];
        if (isNull _target || {_target getVariable [QGVAR(hasBuildingShield), false]}) exitWith {};
        [_target] call FUNC(buildingShield);
        [LLSTRING(hintBuildingShieldAdded)] call ace_zeus_fnc_showMessage;
    }] call CBA_fnc_addEventHandler;

    [QGVAR(removeBuildingShield), {
        params ["_target"];
        if (isNull _target || {!(_target getVariable [QGVAR(hasBuildingShield), false])}) exitWith {};
        [_target] call FUNC(removeBuildingShield);
        [LLSTRING(hintBuildingShieldRemoved)] call ace_zeus_fnc_showMessage;
    }] call CBA_fnc_addEventHandler;
};
