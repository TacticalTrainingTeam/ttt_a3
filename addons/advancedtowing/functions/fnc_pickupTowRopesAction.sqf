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
 * [params] call PREFIX_advancedtowing_fnc_pickupTowRopesAction
 *
 * Public: No
 */

private _nearbyTowVehicles = missionNamespace getVariable [QGVAR(Nearby_Tow_Vehicles), []];

if([] call SA_Can_Pickup_Tow_Ropes) then {

    private _vehicle = _nearbyTowVehicles select 0;
    private _canPickupTowRopes = true;

    if!(missionNamespace getVariable [QGVAR(LOCKED_VEHICLES_ENABLED),false]) then {
        if( locked _vehicle > 1 ) then {
            ["Cannot pick up tow ropes from locked vehicle", false] call FUNC(customHint); //ToDo Localize
            _canPickupTowRopes = false;
        };
    };

    if(_canPickupTowRopes) then {
        [_nearbyTowVehicles select 0, player] call FUNC(pickupTowRopes);
    };

};
