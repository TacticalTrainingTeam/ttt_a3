#include "..\script_component.hpp"
/*
´* Author: EinStein
 * 
 * Arguments:
 * 0: Target Tent <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [tent, unit] call ttt_stein_medic_vehicle_deconstructProgressBar
 *
 * Public: No
 */

	params ["_target", "_unit"];

	_target setVariable ["inUse", true, true];
	_arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
	private "_vehicle";
	private _ArrayVehicle = [];
	{
		if (!(_x getVariable ["hasTent", true])) then {
			_ArrayVehicle pushBack _x
		};
	} forEach _arrayVehicles;
	_vehicle = _ArrayVehicle select 0;
	_vehicle setVariable ["fuel", (fuel _vehicle), true];
	[_vehicle, 0] remoteExec ["setFuel", (owner _vehicle), false];
	[_vehicle, [0, 0, 0]] remoteExec ["setVelocity", (owner _vehicle), false];
	if (stein_useAnimation) then {
		_unit playMove stein_BuildAnimation;
	};

	[stein_BuildTime, _this, stein_fnc_deconstructTent, stein_fnc_cancel, "Baue medizinisches Zelt ab"] call ace_common_fnc_progressBar;