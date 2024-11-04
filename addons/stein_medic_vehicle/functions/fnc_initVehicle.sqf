#include "..\script_component.hpp"
/*
	    author: [TTT] EinStein
	    description: adds an ACE-addAction to specific vehicles to build a tent as a medical facitlity behind the vehicle.
	    note: every vehicle is loaded by default. If this is not wanted, type 'if (isServer) then {
		this setVariable ["hasTent", false];
	};' in the object init.
	
	    usage (initPlayerLocal.sqf):
	    [] call compile preprocessFileLineNumbers "scripts\GVAR(supportedObject)_vehicle.sqf";
	
   // 'bool' should an animation be used while constructiong
   // 'string' animation-name from animation-config
   // 'integer' time in seconds to construct the tent
   // 'string' className for the tent to be build
   // 'array (string)' classnames for every vehicle that should be capable to carry a tent
	
	    last updated: 06.09.2024 by [TTT] Andx
*/

stein_useAnimation = true;
stein_BuildAnimation = "Acts_carFixingWheel";
stein_BuildTime = 15;

if (!GVAR(enable)) exitWith {};

stein_fnc_vehicleHasTent = {
	params ["_target", "_caller", "_arguments"];
	_bool = true;
	if (!(_target getVariable ["hasTent", true])) then {
		_bool = false;
	};
	_bool;
};

stein_fnc_canDeconstruct = {
	params ["_target", "_caller", "_arguments"];
	private _arrayVehicles = nearestObjects [(getPos _target), (parseSimpleArray GVAR(supportedVehicles)), 15];
	_bool = false;
	{
		if (!(_x getVariable ["hasTent", true])) then {
			_bool = true;
		};
	} forEach _arrayVehicles;
	if ((_target getVariable ["inUse", false])) then {
		_bool = false;
	};
	//hint str _bool;
	_bool;
};

stein_fnc_cancel = {
	(_this select 0) params ["_target", "_caller", "_arguments"];
	_arguments params ["_variable", "_value"];
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
};

stein_fnc_deconstructTent = {
	(_this select 0) params ["_target", "_caller", "_arguments"];
	_arguments params [];
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
};

stein_fnc_deconstruct_progressBar = {
	params ["_target", "_caller", "_arguments"];
	_arguments params [];
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
		_caller playMove stein_BuildAnimation;
	};
	[stein_BuildTime, _this, stein_fnc_deconstructTent, stein_fnc_cancel, "Baue medizinisches Zelt ab"] call ace_common_fnc_progressBar;
};

stein_fnc_buildTent = {
	(_this select 0) params ["_target", "_caller", "_arguments"];
	_arguments params [];
	private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];
	_medicTent = GVAR(supportedObject) createVehicle _position;
	_medicTent setVariable ["ace_medical_isMedicalFacility", true, true];
	_medicTent setVariable ["inUse", false, true];
	 // Disable damage on tent
	_medicTent allowDamage false;
	_caller switchMove "";
	[_target, (_target getVariable ["fuel", 100])] remoteExec ["setFuel", (owner _target), false];
};

stein_fnc_build_progressBar = {
	params ["_target", "_caller", "_arguments"];
	_arguments params [];
	private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];
	_target setVariable ["hasTent", false, true];
	if (_position isEqualTo []) exitWith {
		hint "Nicht genug Platz zum Aufbau des Zeltes vorhanden.";
		_target setVariable ["hasTent", true, true];
	};
	_target setVariable ["fuel", (fuel _target), true];
	[_target, 0] remoteExec ["setFuel", (owner _target), false];
	[_target, [0, 0, 0]] remoteExec ["setVelocity", (owner _target), false];
	if (stein_useAnimation) then {
		_caller playMove stein_BuildAnimation;
	};
	[stein_BuildTime, _this, stein_fnc_buildTent, stein_fnc_cancel, "Baue medizinisches Zelt auf"] call ace_common_fnc_progressBar;
};

_buildTent = ["stein_medicTent_build", "Baue medizinisches Zelt auf", "",
    stein_fnc_build_progressBar, stein_fnc_vehicleHasTent
] call ace_interact_menu_fnc_createAction;

_deconstructTent = ["stein_medicTent_deconstruct", "Baue medizinisches Zelt ab", "",
    stein_fnc_deconstruct_progressBar, stein_fnc_canDeconstruct
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _buildTent] call ace_interact_menu_fnc_AddActionToClass;
} forEach (parseSimpleArray GVAR(supportedVehicles));

[GVAR(supportedObject), 0, ["ACE_MainActions"], _deconstructTent] call ace_interact_menu_fnc_AddActionToClass;