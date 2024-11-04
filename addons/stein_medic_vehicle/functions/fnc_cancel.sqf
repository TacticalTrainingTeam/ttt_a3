#include "..\script_component.hpp"
/*
´* Author: EinStein
 * 
 * Arguments:
 * 
 *
 * Return Value:
 * None
 *
 * Example:
 * 
 *
 * Public: No
 */

(_this select 0) params ["_target", "_caller", "_arguments"];

hint "Vorgang abgebrochen";
_caller switchMove "";
if (typeOf _target == GVAR(supportedObject)) then {
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
