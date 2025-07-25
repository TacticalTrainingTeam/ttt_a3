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

(_this select 0) params ["_target"];

_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];

private _return = false;
{
    if (
        !(_x getVariable ["ttt_repair_vehicle_hasWorkshop", true]) &&
        !(_target getVariable ["ttt_repair_vehicle_inUse", false])
    ) then {
        _return = true;
    };
} forEach _arrayVehicles;

_return;
