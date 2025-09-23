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
 * [params] call PREFIX_advancedslingloading_fnc_canAttachRopes
 *
 * Public: No
 */

params ["_vehicle","_cargo"];

if(!isNull _vehicle && !isNull _cargo) then {
    [_vehicle,_cargo] call ASL_Is_Supported_Cargo && isNull objectParent player && player distance _cargo < 10 && _vehicle != _cargo;
} else {
    false;
};
