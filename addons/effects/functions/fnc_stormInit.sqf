#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates storm VFX and environmental changes for sand or snow.
* 
* Arguments:
* 0: <INTEGER>	(optional, default: 300) 			storm duration in seconds
* 1: <BOOL>		(optional, default: false) 			effect on objects
* 2: <INTEGER>	(optional, default: 0) 				type (sand (0) or snow (1))
* 3: <BOOL>		(optional, default: true) 			force walking on infantry
* 4: <INTEGER>	(optional, default: random 360) 	wind direction
*
* Return Value:
* 1: <INTEGER> missionEndTimeForStorm
* 2: <INTEGER> directionStorm
*
* Example (called on Server i.e.: initServer.sqf or serverside trigger):
*	[duration, effect, stormType, walk, direction] call ttt_effects_fnc_stormInit;
*
* Public: Yes
*/

if (!isServer || !hasInterface || missionNamespace getVariable ["ttt_effects_stormActive", false]) exitWith {};

params [["_durationDuststorm",(300),[42]],["_effectOnObjects",(false),[true]],["_stormType",(0),[42]],["_walk",(true),[true]],["_directionDuststorm",(random 360),[42]]];

_durationDuststorm = _durationDuststorm max 60;
missionNamespace setVariable ["ttt_effects_stormActive", true, false];

// save desired end time to missiontime
private _endTime = time + _durationDuststorm;
// save current environment
private _environment_foglevel = fogParams;
private _environment_rainlevel = rain;
private _environment_lightninglevel = lightnings;
private _environment_windlevel = wind;
// get all entities (once)
private _allEntities = 8 allObjects 1;

// edit environment
10 setFog (0.4 max fog);
{
	private _aiUnit = _x;
	{
		[_aiUnit, [_x, ((_aiUnit skill _x) * 0.25)]] remoteExec ["setSkill", (owner _aiUnit), false];
	} forEach ["aimingAccuracy", "aimingShake", "aimingSpeed", "spotDistance"];
} forEach (allUnits - allPlayers);

// reset environment afterwards
[
	{
		params ["_environment_foglevel","_environment_rainlevel","_environment_lightninglevel","_environment_windlevel", "_skills"];
		(10 + (random 10)) setFog _environment_foglevel;
		(10 + (random 10)) setRain _environment_rainlevel;
		(10 + (random 10)) setLightnings _environment_lightninglevel;
		setWind [_environment_windlevel select 0, _environment_windlevel select 1, true];
		{
			private _aiUnit = _x;
			{
				[_aiUnit, [_x, ((_aiUnit skill _x) / 0.25)]] remoteExec ["setSkill", (owner _aiUnit), false];
			} forEach ["aimingAccuracy", "aimingShake", "aimingSpeed", "spotDistance"];
		} forEach (allUnits - allPlayers);
		missionNamespace setVariable ["ttt_effects_stormActive", false, false];
	}, 
	[_environment_foglevel,_environment_rainlevel,_environment_lightninglevel,_environment_windlevel, _aiSkills], 
	_durationDuststorm
] call CBA_fnc_waitAndExecute;

// heavy wind in direction and effect on objects
[
	{
		(_this select 0) params ["_end", "_direction", "_duration", "_effect", "_entities"];
		if (time >= _end) exitWith {};

		_clock = _duration - (_end - time) + 1;
		setWind [
			(sin _direction * ((80 * _clock * (_duration - _clock)) / (_duration ^ 2))),
			(cos _direction * ((80 * _clock * (_duration - _clock)) / (_duration ^ 2))),
			true
		];

		if (_effect) then {
			private _effectedObject = selectRandom _entities;
			if ((_effectedObject isKindOf "LandVehicle") || (_effectedObject isKindOf "Man") || (_effectedObject isKindOf "Air") || (_effectedObject isKindOf "Wreck")) then {
				[
					_effectedObject, 
					[
						((velocity _effectedObject) select 0) + (0.15 * (2500 / ((getMass _effectedObject) + 2000)) * (wind select 0)),
						((velocity _effectedObject) select 1) + (0.15 * (2500 / ((getMass _effectedObject) + 2000)) * (wind select 1)),
						((velocity _effectedObject) select 2)
					]
				] remoteExec ["setVelocity", (owner _effectedObject), false];
			};
		};
	},
	1,
	[_endTime, _directionDuststorm, _durationDuststorm, _effectOnObjects, _allEntities]
] call CBA_fnc_addPerFrameHandler;

[[_endTime, _stormType, _walk], ttt_effects_fnc_stormEffects] remoteExec ["call", ([0, -2] select isDedicated), true];
[_endTime, _directionDuststorm];