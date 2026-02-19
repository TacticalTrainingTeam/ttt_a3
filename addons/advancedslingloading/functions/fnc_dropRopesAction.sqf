#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for dropping ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_dropRopesAction
 *
 * Public: No
 */

private ["_vehicleAndIndex"];
if ([] call FUNC(canDropRopes)) then {
    _vehicleAndIndex = player getVariable ["ASL_Ropes_Vehicle", []];
    if (count _vehicleAndIndex == 2) then {
        [_vehicleAndIndex select 0, player, _vehicleAndIndex select 1] call FUNC(dropRopes);
    };
};
