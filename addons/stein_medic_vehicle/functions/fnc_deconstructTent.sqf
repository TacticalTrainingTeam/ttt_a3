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

_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
private "_vehicle";
private _ArrayVehicle = [];
{
	if (!(_x getVariable ["hasTent", true])) then {
		_ArrayVehicle pushBack _x
	};
} forEach _arrayVehicles;

_vehicle = _ArrayVehicle select 0;

hint Format ["Das Zelt wurde in das Fahrzeug;
	\nRichtung: %1 Grad\nEntfernung: %2 Meter\ngeladen.",
(round ((getPos _target) getDir (getPos _vehicle))), (round ((getPos _target) distance (getPos _vehicle)))];

_vehicle setVariable ["hasTent", true, true];
deleteVehicle _target;
_caller switchMove "";
[_vehicle, (_vehicle getVariable ["fuel", 100])] remoteExec ["setFuel", (owner _vehicle), false];
