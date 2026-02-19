#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for picking up ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_pickupRopesAction
 *
 * Public: No
 */

private ["_nearbyVehicles", "_canPickupRopes", "_closestRope"];
_nearbyVehicles = missionNamespace getVariable ["ASL_Nearby_Vehicles", []];
if ([] call FUNC(canPickupRopes)) then {
    _closestRope = [] call FUNC(getClosestRope);
    if (!isNull (_closestRope select 0)) then {
        _canPickupRopes = true;
        if !(missionNamespace getVariable ["ASL_LOCKED_VEHICLES_ENABLED",false]) then {
            if (locked (_closestRope select 0) > 1) then {
                ["Cannot pick up cargo ropes from locked vehicle", false] call FUNC(hint);
                _canPickupRopes = false;
            };
        };
        if (_canPickupRopes) then {
            [(_closestRope select 0), player, (_closestRope select 1)] call FUNC(pickupRopes);
        };
    };
};
