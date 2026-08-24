#include "script_component.hpp"

//Registered on every machine (not just the server) since HandleDamage only has an effect on whichever machine the target is local to
//Hints are NOT shown here - ace_zeus_fnc_showMessage only renders on the machine with the curator display open, so callers
//(the Zeus module, ZEN context menu, etc.) show it themselves locally right after dispatching this event
[QGVAR(addVehicleShield), {
    params ["_target"];
    if (isNull _target) exitWith {};
    [_target] call FUNC(addVehicleShield);
}] call CBA_fnc_addEventHandler;

[QGVAR(removeVehicleShield), {
    params ["_target"];
    if (isNull _target) exitWith {};
    [_target] call FUNC(removeVehicleShield);
}] call CBA_fnc_addEventHandler;

if (isServer) then {
    [QGVAR(addBuildingShield), {
        params ["_target"];
        if (isNull _target || {_target getVariable [QGVAR(hasBuildingShield), false]}) exitWith {};
        [_target] call FUNC(buildingShield);
    }] call CBA_fnc_addEventHandler;

    [QGVAR(removeBuildingShield), {
        params ["_target"];
        if (isNull _target || {!(_target getVariable [QGVAR(hasBuildingShield), false])}) exitWith {};
        [_target] call FUNC(removeBuildingShield);
    }] call CBA_fnc_addEventHandler;
};
