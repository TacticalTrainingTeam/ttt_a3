#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if ropes can be attached to cargo
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Cargo <OBJECT>
 *
 * Return Value:
 * Can attach ropes <BOOL>
 *
 * Example:
 * [_vehicle, _cargo] call ttt_advancedslingloading_fnc_canAttachRopes
 *
 * Public: No
 */

params ["_vehicle", "_cargo"];
if (!isNull _vehicle && !isNull _cargo) then {
    [_vehicle, _cargo] call FUNC(isSupportedCargo) && isNull objectParent player && player distance _cargo < ASL_PICKUP_DISTANCE && _vehicle != _cargo;
} else {
    false;
};
