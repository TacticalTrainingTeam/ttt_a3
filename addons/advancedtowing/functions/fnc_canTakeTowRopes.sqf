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
 * [params] call PREFIX_advancedtowing_fnc_canTakeTowRopes
 *
 * Public: No
 */

params ["_vehicle"];

if([_vehicle] call FUNC(isSupportedVehicle)) then {
    private _existingTowRopes = _vehicle getVariable [QGVAR(Ropes),[]];
    private _existingVehicle = player getVariable [QGVAR(Ropes_Vehicle), objNull];
    isNull objectParent player && player distance _vehicle < 10 && (count _existingTowRopes) == 0 && isNull _existingVehicle;
} else {
    false;
};
