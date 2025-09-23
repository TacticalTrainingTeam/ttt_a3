#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedslingloading_fnc_pickupRopesAction
 *
 * Public: No
 */

private ["_nearbyVehicles","_canPickupRopes","_closestRope"];

_nearbyVehicles = missionNamespace getVariable ["ASL_Nearby_Vehicles",[]];
if([] call ASL_Can_Pickup_Ropes) then {
    _closestRope = [] call ASL_Get_Closest_Rope;
    if(!isNull (_closestRope select 0)) then {
        _canPickupRopes = true;
        if!(missionNamespace getVariable ["ASL_LOCKED_VEHICLES_ENABLED",false]) then {
            if( locked (_closestRope select 0) > 1 ) then {
                ["Cannot pick up cargo ropes from locked vehicle",false] call ASL_Hint;
                _canPickupRopes = false;
            };
        };
        if(_canPickupRopes) then {
            [(_closestRope select 0), player, (_closestRope select 1)] call ASL_Pickup_Ropes;
        };
    };
};
