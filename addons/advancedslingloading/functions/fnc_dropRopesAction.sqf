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
 * [params] call ttt_advancedslingloading_fnc_dropRopesAction
 *
 * Public: No
 */

private ["_vehicleAndIndex"];

if([] call FUNC(canDropRopes)) then {
    _vehicleAndIndex = ACE_player getVariable ["ASL_Ropes_Vehicle", []];
    if(count _vehicleAndIndex == 2) then {
        [_vehicleAndIndex select 0, ACE_player, _vehicleAndIndex select 1] call FUNC(dropRopes);
    };
};
