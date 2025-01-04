#include "..\script_component.hpp"
/*
´* Author: EinStein
 * 
 * Arguments:
 * 0: Facility <OBJECT>
 * 1: Caller <OBJECT>
 * 2: Arguments <ARRAY>
 *
 * Return Value:
 * BOOLEAN
 *
 * Example:
 * [tent] call ttt_stein_medic_vehicle_fnc_canDeconstruct;
 *
 * Public: No
 */

(_this select 0) params ["_target", "_caller"];

_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
private _return = false;
{
	if (!(_x getVariable ["hasTent", true]) && !(_target getVariable ["inUse", false])) then {_return = true;};
} forEach _arrayVehicles;

_return;