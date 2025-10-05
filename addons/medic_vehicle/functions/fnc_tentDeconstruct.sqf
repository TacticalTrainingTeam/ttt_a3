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

params ["_target", "_caller"];

_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
private "_vehicle";
private _ArrayVehicle = [];
{
    if (!(_x getVariable ["ttt_medic_vehicle_hasTent", true])) then {
        _ArrayVehicle pushBack _x
    };
} forEach _arrayVehicles;

_vehicle = _ArrayVehicle select 0;

[
    [
    LLSTRING(hintLoaded),
    (round ((getPos _target) getDir (getPos _vehicle))),
    (round ((getPos _target) distance (getPos _vehicle)))
    ]
] call ace_common_fnc_displayText;

_vehicle setVariable ["ttt_medic_vehicle_hasTent", true, true];
[_vehicle, (_vehicle getVariable ["ttt_medic_vehicle_fuel", 100])] remoteExec ["setFuel", (owner _vehicle), false];
deleteVehicle _target;
_caller switchMove "";
