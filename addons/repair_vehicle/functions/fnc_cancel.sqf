#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Facility or Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller"];

hint LLSTRING(abort);
_caller switchMove "";

if (typeOf _target == GVAR(facitlityObject)) then {
	_target setVariable ["ttt_repair_vehicle_inUse", false, true];
	_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
	private "_vehicle";
	private _ArrayVehicle = [];
	{
		if (!(_x getVariable ["ttt_repair_vehicle_hasWorkshop", true])) then {
			_ArrayVehicle pushBack _x
		};
	} forEach _arrayVehicles;
	_vehicle = _ArrayVehicle select 0;
	[_vehicle, (_vehicle getVariable ["ttt_repair_vehicle_fuel", 100])] remoteExec ["setFuel", (owner _vehicle), false];
} else {
	_target setVariable ["hasWorkshop", true, true];
	[_target, (_target getVariable ["ttt_repair_vehicle_fuel", 100])] remoteExec ["setFuel", (owner _target), false];
};
