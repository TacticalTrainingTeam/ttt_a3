#include "..\script_component.hpp"
/*
* Author: EinStein
* Original idea: by Ares Mod-Team https://github.com/ArmaAchilles/Achilles/blob/f123656459cab7766aa40c32d5ee12d29ebadaae/%40AresModAchillesExpansion/addons/modules_f_ares/Reinforcements/functions/fn_ReinforcementsCreateUnits.sqf
* Description: spawns vehicle and infantry group, moves to RP, releases units and attacks or RTB
* Example: 
*	[l_sp_1, l_rp_1, l_at_1, EAST, "O_APC_Wheeled_02_rcws_v2_F"] call ttt_common_fnc_callReinforcements;
*
*	argument 0: 'array' or 'object' position to create units
*	argument 1: 'array' or 'object' position to release units
*	argument 2: 'array' or 'object' position to attack (uses SaD for infantry and vehicle, but if LAMBS is active and vehicle is no airborne, infantry will use lambs_rush instead)
*	argument 3: 'side' side of created units
*	argument 4: 'classname' of the transport vehicle
*	argument 5: (optional, default: 0) 'integer' RP behaviour [vehicle type: air / ground ] (0: Landing-Unload-RTB / Unload-RTB, 1: Fastrope-RTB / Unload-Attack, 2: Paradrop-RTB / Unload-Guard)
*	argument 6: (optional, default: configFile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad") 'array' or '_grpCfgName' of the infantry group
*	argument 7: (optional, default: 1) 'integer' group behaviour (0: relaxed, 1:cautious, 2: combat)
*	argument 8: (optional, default: 80) 'integer' fly height for air vehicles
*
* Public: Yes
*/

if (!isServer) exitWith {};

params [
    "_spPos", 
    "_rpPos", 
    "_atPos", 
    "_side", 
    "_vehicleType", 
    ["_rpBehaviour", 0, [42]],
    ["_grpCfg", configFile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad", [(configFile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad"), []]],
    ["_grpBehaviour", 2, [42]],
    ["_height", 80, [42]]
];

disableSerialization;

// static inputs
private _rpSize = 20;
private _atSize = 50;
if (typeName _spPos == "OBJECT") then {_spPos = [getPosASL _spPos select 0,getPosASL _spPos select 1,0];};
if (typeName _rpPos == "OBJECT") then {_rpPos = [getPosASL _rpPos select 0,getPosASL _rpPos select 1,0];};
if (typeName _atPos == "OBJECT") then {_atPos = [getPosASL _atPos select 0,getPosASL _atPos select 1,0];};


// create the transport vehicle
private _vehicleInfo = [_spPos, _spPos getDir _rpPos, _vehicleType, _side] call BIS_fnc_spawnVehicle;
_vehicleInfo params ["_vehicle", "", "_vehicleGroup"];

if (_vehicle isKindOf "Plane") then
{
	// Adjust spawn and flight altitude
	_vehicle flyInHeight _height;
	_vehicle setPos (_spPos vectorAdd [0, 0, _height]);
	
	// Fix for CUP planes (somehow they don't have a start velocity despite using BIS_fnc_spawnVehicle)
	private _speed = getNumber (configFile >> "CfgVehicles" >> _vehicleType >> "maxSpeed");
	private _coefName = ["normalSpeedForwardCoef", "limitedSpeedCoef"] select (speedMode _vehicleGroup == "LIMITED");
	_speed = _speed * getNumber (configFile >> "CfgVehicles" >> _vehicleType >> _coefName);
	_vehicle setVelocityModelSpace [0, _speed/3.6, 0];
};

private _CrewTara = [_vehicleType,false] call BIS_fnc_crewCount;
private _CrewBrutto =  [_vehicleType,true] call BIS_fnc_crewCount;
private _CrewNetto = _CrewBrutto - _CrewTara;

// create infantry group and resize it to the given cargo space if needed
private _infantryGroup = [[0,0,0], _side, _grpCfg] call BIS_fnc_spawnGroup;
// delete remaining units if vehicle is overcrouded
private _infantryList = units _infantryGroup;
if (count _infantryList > _CrewNetto) then
{
	_infantryList resize _CrewNetto;
	private _infantryToDelete = (units _infantryGroup) - _infantryList;
	{deleteVehicle _x} forEach _infantryToDelete;
};

// switch group behaviour
switch (_grpBehaviour) do
{
	case 0: // Relaxed
	{
		_infantryGroup setBehaviour "SAFE";
		_infantryGroup setSpeedMode "LIMITED";
	};
	case 1: // Cautious
	{
		_infantryGroup setBehaviour "AWARE";
		_infantryGroup setSpeedMode "LIMITED";
	};
	case 2: // Combat
	{
		_infantryGroup setBehaviour "COMBAT";
		_infantryGroup setSpeedMode "NORMAL";
	};
};

// Choose a attack position for the squad to head to once unloaded and set their waypoint.
private _infantryAtWp = _infantryGroup addWaypoint [_atPos, _atSize];
if (isClass(configFile >> "CfgPatches" >> "lambs_danger") && !(_vehicle isKindOf "Air")) then	// LAMBS only if loaded and only for ground vehicles
{	
	_infantryAtWp setWaypointType "SCRIPTED";
	_infantryAtWp setWaypointScript "\z\lambs\addons\wp\scripts\fnc_wpRush.sqf";
} else
{
	_infantryAtWp setWaypointType "SAD";
};

//Check ACEX Headless Client
if (isClass (configFile >> "CfgPatches" >> "acex_headless") && acex_headless_enabled) then
{
    //to ensure unload, blacklist
    _infantryGroup setVariable ["acex_headless_blacklist", true, true];
    
    //after rally, unblacklist _infantryGroup
    _infantryAtWp setWaypointStatements ["true", "(group this) setVariable ['acex_headless_blacklist', false, true];"];
};

// Load the units into the vehicle.
if !(_vehicle isKindOf "Air") then {_infantryGroup addVehicle _vehicle};						// stop units from disembarking after been telepoted in
{
	_x moveInCargo _vehicle;
} forEach _infantryList;

if ((_rpBehaviour == 1) && !([_vehicle] call zen_compat_ace_fnc_canFastrope)) then
{
	["vehicle has no fastrope capabilities - switching..."] call ace_zeus_fnc_showMessage;
	_rpBehaviour = 0;
};

//create invisible helipad if needed
if ((_rpBehaviour == 0) && (_vehicle isKindOf "Air") && (count nearestObjects [_rpPos, ["Land_HelipadEmpty_F"], 5] > 0)) then
{
	private _h_pad = "Land_HelipadEmpty_F" createVehicle _rpPos;
};

// create a RP waypoint for deploying the units
private _vehicleUnloadWp = _vehicleGroup addWaypoint [_rpPos, _rpSize];
if (_vehicle isKindOf "Air" && (_rpBehaviour > 0)) then
{
	_vehicleUnloadWp setWaypointType "SCRIPTED";
	private _script =
	[
		"\x\zen\addons\ai\functions\fnc_waypointParadrop.sqf",
		"\x\zen\addons\compat_ace\functions\fnc_waypointFastrope.sqf"
	] select (_rpBehaviour isEqualTo 1);
	_vehicleUnloadWp setWaypointScript _script;
} else
{
	_vehicleUnloadWp setWaypointBehaviour  "SAFE";
	_vehicleUnloadWp setWaypointType "TR UNLOAD";
};

// Make the driver full skill. This makes him less likely to do dumb things when they take contact.
(driver _vehicle) setSkill 1;

// Special settings for helicopters. Otherwise they tend to run away instead of land if the LZ is hot.
if (_vehicleType isKindOf "Air") then
{
	{
		_x allowFleeing 0; // Especially for helos... They're very cowardly.
	} forEach (crew _vehicle);
	// armed aircrafts are unreliable when they are not CARELESS
	_vehicleGroup setBehaviour "CARELESS";
	_vehicleUnloadWp setWaypointTimeout [0,1,2]; // Give the units some time to get away from aircraft
}
else
{
	_vehicleUnloadWp setWaypointTimeout [5,10,20]; // Give the units some time to get away from truck
};

// create RTB or attack waypoints for the vehicle after dropoff
if (_vehicle isKindOf "Air") then
{
	private _vehicleReturnWp = _vehicleGroup addWaypoint [_spPos, 0,3];
	_vehicleReturnWp setWaypointTimeout [2,2,2]; // Let the unit stop before being despawned.
	_vehicleReturnWp setWaypointStatements ["true", "deleteVehicle (vehicle this); {deleteVehicle _x} foreach thisList;"];
} else {
	switch (_rpBehaviour) do
	{
		case 0: // RTB after Unload
		{
			private _vehicleExitWp = _vehicleGroup addWaypoint [_spPos, 0,3];
			_vehicleExitWp setWaypointTimeout [2,2,2]; // Let the unit stop before being despawned.
			_vehicleExitWp setWaypointStatements ["true", "deleteVehicle (vehicle this); {deleteVehicle _x} foreach thisList;"];
		};
		case 1: // Attack after Unload
		{
			private _vehicleExitWp = _vehicleGroup addWaypoint [_atPos, _atSize,3];
			_vehicleExitWp setWaypointBehaviour  "AWARE";
			_vehicleExitWp setWaypointType "SAD";
		};
		case 2: // Guard after Unload
		{
			private _vehicleExitWp = _vehicleGroup addWaypoint [_rpPos, _rpSize,3];
			_vehicleExitWp setWaypointBehaviour  "AWARE";
			_vehicleExitWp setWaypointType "GUARD";
		};
	};
};

//Check ACEX Headless Client
if (isClass (configFile >> "CfgPatches" >> "acex_headless") && acex_headless_enabled) then
{
    //to ensure unload, blacklist
    _vehicleGroup setVariable ["acex_headless_blacklist", true, true];
    
    //after unload, unblacklist _vehicleGroup
    _vehicleUnloadWp setWaypointStatements ["true", "(group this) setVariable ['acex_headless_blacklist', false, true];"];
};

// print a confirmation
["Reinforcements spawned with %1", (getText (configFile >> "CfgVehicles" >> _vehicleType >> "displayName"))] call ace_zeus_fnc_showMessage;
