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

(_this select 0) params ["_target", "_caller"];

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

if (GVAR(useAnimation)) then {
	_caller playMove stein_BuildAnimation;
};

[
	GVAR(buildTime),
	[_target,_caller],
	{
		(_this select 0) params ["_target", "_caller"];
		[_target,_caller] call FUNC(tentDeconstruct);
	},
	{
		(_this select 0) params ["_target", "_caller"];
		[_target,_caller] call FUNC(cancel)
	},
	LLSTRING(actionDeconstruct)
] call ace_common_fnc_progressBar;
