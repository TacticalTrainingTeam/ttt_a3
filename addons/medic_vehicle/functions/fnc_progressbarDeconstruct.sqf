#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

_target setVariable ["ttt_medic_vehicle_inUse", true, true];

_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
private "_vehicle";
private _ArrayVehicle = [];
{
    if (!(_x getVariable ["ttt_medic_vehicle_hasTent", true])) then {
        _ArrayVehicle pushBack _x
    };
} forEach _arrayVehicles;
_vehicle = _ArrayVehicle select 0;
_vehicle setVariable ["ttt_medic_vehicle_fuel", (fuel _vehicle), true];
[_vehicle, 0] remoteExec ["setFuel", (owner _vehicle), false];
[_vehicle, [0, 0, 0]] remoteExec ["setVelocity", (owner _vehicle), false];

if (GVAR(useAnimation)) then {
    _caller playMove GVAR(buildAnimation);
};

[
    GVAR(buildTime),
    [_target,_caller],
    {
        (_this select 0) params ["_target", "_caller"];
        [_target,_caller] call FUNC(tentDeconstruct);
    },
    {
        (_this select 0) params ["_target", "_caller"];
        [_target,_caller] call FUNC(cancel)
    },
    LLSTRING(actionDeconstruct)
] call ace_common_fnc_progressBar;
