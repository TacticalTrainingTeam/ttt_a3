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
 * [params] call PREFIX_advancedslingloading_fnc_dropRopesAction
 *
 * Public: No
 */

private ["_vehicleAndIndex"];

if([] call ASL_Can_Drop_Ropes) then {
    _vehicleAndIndex = player getVariable ["ASL_Ropes_Vehicle", []];
    if(count _vehicleAndIndex == 2) then {
        [_vehicleAndIndex select 0, player, _vehicleAndIndex select 1] call ASL_Drop_Ropes;
    };
};
