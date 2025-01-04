#include "..\script_component.hpp"
/*
´* Author: EinStein
 * 
 * Arguments:
 * 0: Interacted object <OBJECT>
 * 1: Caller <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_stein_medic_vehicle_fnc_cancel;
 *
 * Public: No
 */

params ["_target", "_caller"];

hint LLSTRING(abort);
_caller switchMove "";

if (typeOf _target == GVAR(facitlityObject)) then {
	_target setVariable ["inUse", false, true];
	_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
	private "_vehicle";
	private _ArrayVehicle = [];
	{
		if (!(_x getVariable ["hasTent", true])) then {
			_ArrayVehicle pushBack _x
		};
	} forEach _arrayVehicles;
	_vehicle = _ArrayVehicle select 0;
	[_vehicle, (_vehicle getVariable ["fuel", 100])] remoteExec ["setFuel", (owner _vehicle), false];
} else {
	_target setVariable ["hasTent", true, true];
	[_target, (_target getVariable ["fuel", 100])] remoteExec ["setFuel", (owner _target), false];
};
