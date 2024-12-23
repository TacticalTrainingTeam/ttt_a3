#include "..\script_component.hpp"
/*
 * Author: EinStein
 * Starts the progress bar for building the tent.
 * 
 * Arguments:
 * 0: Target Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle, unit] call ttt_stein_medic_vehicle_fnc_buildProgressBar
 *
 * Public: No
 */

params ["_target", "_unit"];

private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];
_target setVariable ["hasTent", false, true];

if (_position isEqualTo []) exitWith {
	hint "Nicht genug Platz zum Aufbau des Zeltes vorhanden.";
	_target setVariable ["hasTent", true, true];
};

_target setVariable ["fuel", (fuel _target), true];
[_target, 0] remoteExec ["setFuel", (owner _target), false];
[_target, [0, 0, 0]] remoteExec ["setVelocity", (owner _target), false];

if (GVAR(useAnimation)) then {
	_unit playMove GVAR(BuildAnimation);
};

[
	GVAR(BuildTime),
	_this,
	[_this select 0] call FUNC(buildTent),
	[_this select 0] call FUNC(cancel),
	"Baue medizinisches Zelt auf"
] call ace_common_fnc_progressBar;