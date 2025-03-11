#include "..\script_component.hpp"
/*
* Author: ALIAS, modified EinStein
*
* Description:
* Spawns a duststorm VFX around the player.
* 
* Arguments:
* 0: Windrichtung <INTEGER>
* 1: Sturmdauer <INTEGER> 
* 2: Effekte auf Objekte <BOOL>
*
* Return Value:
* None
*
* Example (called on Server i.e.: initServer.sqf or serverside trigger):
* 	Tutorial: https://www.youtube.com/user/aliascartoons
*	[duration, effect, direction] call ttt_effects_fnc_duststorm;
*
* Public: No
*/

if (!isServer || !hasInterface) exitWith {};

params [["_durationDuststorm",(120),[42]],["_effectOnObjects",(false),[true]],["_directionDuststorm",(random 360),[42]]];

//save current missiontime
private _endTime = time + _durationDuststorm;
//save current environment
private _environment_foglevel = fogParams;
private _environment_rainlevel = rain;
private _environment_lightninglevel = lightnings;
private _environment_windlevel = wind;
//get all entities (once)
private _allEntities = 8 allObjects 1;

//reset environment afterwards
[
	{
		params ["_environment_foglevel","_environment_rainlevel","_environment_lightninglevel","_environment_windlevel"];
		(45 + (random 30)) setFog _environment_foglevel;
		(45 + (random 30)) setRain _environment_rainlevel;
		(45 + (random 30)) setLightnings _environment_lightninglevel;
		setWind [_environment_windlevel select 0, _environment_windlevel select 1, true];
	}, 
	[_environment_foglevel,_environment_rainlevel,_environment_lightninglevel,_environment_windlevel], 
	_durationDuststorm
] call CBA_fnc_waitAndExecute;

//raise fog for storm beginning
private _fogStart = 0;
0 setFog _fogStart;
[
	{
		(_this select 0) params ["_end", "_fog"];
		if ((fog > 30) || (time >= _end)) exitWith {}; 												//eigentlich 0.3
		_fog = _fog + 0.001;
		0 setFog _fog;
	},
	0.1,
	[_endTime, _fogStart]
] call CBA_fnc_addPerFrameHandler;

//heavy wind in direction and effect on objects
[
	{
		(_this select 0) params ["_end", "_direction", "_duration", "_effect", "_entities"];
		if (time >= _end) exitWith {};

		_clock = _duration - (_end - time) + 1;
		setWind [
			(sin _direction * ((216 * _clock * (_duration - _clock)) / (_duration ^ 2))),
			(cos _direction * ((216 * _clock * (_duration - _clock)) / (_duration ^ 2))),
			true
		];

		if (_effect) then {
			private _effectedObject = selectRandom _entities;
			if ((_effectedObject isKindOf "LandVehicle") || (_effectedObject isKindOf "Man") || (_effectedObject isKindOf "Air") || (_effectedObject isKindOf "Wreck")) then {
				[
					_effectedObject, 
					[
						((velocity _effectedObject) select 0) + (0.08 * (2500 / ((getMass _effectedObject) + 2000)) * (wind select 0)),
						((velocity _effectedObject) select 1) + (0.08 * (2500 / ((getMass _effectedObject) + 2000)) * (wind select 1)),
						((velocity _effectedObject) select 2)
					]
				] remoteExec ["setVelocity", (owner _effectedObject), false];
			};
		};
	},
	1,
	[_endTime, _directionDuststorm, _durationDuststorm, _effectOnObjects, _allEntities]
] call CBA_fnc_addPerFrameHandler;

//[] call ttt_effects_fnc_duststorm_effect;