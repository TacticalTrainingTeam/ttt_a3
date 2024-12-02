#include "..\script_component.hpp"
/*
´* Author: EinStein
 * 
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * BOOLEAN
 *
 * Example:
 * [unit] call ttt_stein_medic_vehicle_fnc_canDeconstruct;
 *
 * Public: No
 */

params ["_unit"];

private _arrayVehicles = nearestObjects [(getPos _unit), (parseSimpleArray GVAR(supportedVehicles)), 15];

_bool = false;

{
	if (!(_x getVariable ["hasTent", true])) then {
		_bool = true;
	};
} forEach _arrayVehicles;

if ((_unit getVariable ["inUse", false])) then {
	_bool = false;
};

_bool;