#include "..\script_component.hpp"
/*
 * Author: EinStein
 * Starts the progress bar for building the tent.
 * 
 * Arguments:
 * 0: Target Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 * 2: Arguments <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle, unit] call ttt_stein_medic_vehicle_fnc_buildProgressBar
 *
 * Public: No
 */

(_this select 0) params ["_target", "_caller"];

private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];

if (_position isEqualTo []) exitWith {
	hint LLSTRING(hintErrorNoSpace);
};

_target setVariable ["hasTent", false, true];
_target setVariable ["fuel", (fuel _target), true];
[_target, 0] remoteExec ["setFuel", (owner _target), false];
[_target, [0, 0, 0]] remoteExec ["setVelocity", (owner _target), false];

if (GVAR(useAnimation)) then {
	_caller playMove GVAR(buildAnimation);
};

[
	GVAR(buildTime),
	[_target,_caller],
	{
		(_this select 0) params ["_target", "_caller"];
		[_target,_caller] call FUNC(tentConstruct);
	},
	{
		(_this select 0) params ["_target", "_caller"];
		[_target,_caller] call FUNC(cancel)
	},
	LLSTRING(actionConstruct)
] call ace_common_fnc_progressBar;