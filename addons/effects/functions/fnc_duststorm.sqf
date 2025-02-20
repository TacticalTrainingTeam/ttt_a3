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
* 3: Intelinhalt <ARRAY> format [Titel <STRING>, Inhalt <STRING>] (Der String unterstüzt HTML-Syntax für z.B. Bilder)
*
* Return Value:
* None
*
* Example (used LOCAL i.e.: initPlayerLocal.sqf):
* 	Tutorial: https://www.youtube.com/user/aliascartoons
*	[direction, duration, effect, wall] call ttt_effects_fnc_duststorm;
*
* Public: No
*/

if (!isServer || !hasInterface) exitWith {};

params [["_directionDuststorm",(random 360),[42]],["_durationDuststorm",(120),[42]],["_effectOnObjects",(false),[true]],["_dustWall",(false),[true]]];

private _duststormActive = true;
private _endTime = time + _durationDuststorm;
//save current environment
private _environment_foglevel = fogParams;
private _environment_rainlevel = rain;
private _environment_lightninglevel = lightnings;
private _environment_windlevel = wind;

//reset environment afterwards
[
	{
		params ["_environment_foglevel","_environment_rainlevel","_environment_lightninglevel","_environment_windlevel"];
		(45 + (random 30)) setFog _environment_foglevel;
		(45 + (random 30)) setRain _environment_rainlevel;
		(45 + (random 30)) setLightnings _environment_lightninglevel;
		setWind [_environment_windlevel select 0, _environment_windlevel select 1, true];
		_duststormActive = false;
	}, 
	[_environment_foglevel,_environment_rainlevel,_environment_lightninglevel,_environment_windlevel], 
	_durationDuststorm
] call CBA_fnc_waitAndExecute;

//ambient sound !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FUNKTIOENIERT NICHT RICHTIG
[
	{
		(_this select 0) params ["_active"];
		if !(_active) exitWith {};
		playSound (selectRandom ["wind_1","wind_2","wind_3","wind_4","wind_5"]);
	}, 
	4, 
	[_duststormActive]
] call CBA_fnc_addPerFrameHandler;

//raise fog for storm beginning
private _fogStart = 0;
0 setFog _fogStart;
[
	{
		(_this select 0) params ["_active", "_fog"];
		if ((fog > 0.3) || !(_active)) exitWith {};
		_fog = _fog + 0.001;
		0 setFog _fog;
	},
	0.1,
	[_duststormActive, _fogStart]
] call CBA_fnc_addPerFrameHandler;

//[] call ttt_effects_fnc_duststorm_effect;

//heavy wind in direction
[
	{
		(_this select 0) params ["_active", "_direction", "_duration", "_end"];
		if (!(_active) || (time >= _end)) exitWith {};
		_clock = _duration - (_end - time) + 1;
		hint str _clock;
		setWind [
			(sin _direction * ((216 * _clock * (_duration - _clock)) / (_duration ^ 2))),
			(cos _direction * ((216 * _clock * (_duration - _clock)) / (_duration ^ 2))),
			true
		];
	},
	1,
	[_duststormActive, _directionDuststorm, _durationDuststorm, _endTime]
] call CBA_fnc_addPerFrameHandler;













if (_effectOnObjects) then {

	while {duststormOn} do {
		sleep 1;
		_rand_pl = [] execVM "scripts\dust_storm\alias_hunt.sqf";
		waitUntil {scriptDone _rand_pl};

	// interval object blow
		//sleep 1;
		sleep 60+random 120;
		
		al_nearobjects = nearestObjects [hunt_alias,[],50];
		ar_obj_eligibl = [];
		
		{if((_x isKindOf "LandVehicle") or (_x isKindOf "Man") or (_x isKindOf "Air") or (_x isKindOf "Wreck")) then 
			{ar_obj_eligibl pushBack _x;};
		} foreach al_nearobjects;
		
		sleep 1;
		
		// alege obiect
		_blowobj= ar_obj_eligibl call BIS_fnc_selectRandom;

		//durata_rafala = 1+random 5;	sleep 30+random 120;
		sleep 1;
		[] spawn {
			_rafale = ["rafala_1","sandstorm","rafala_4_dr","rafala_5_st"] call BIS_fnc_selectRandom;
			[_rafale] remoteExec ["playSound"];
		};
		
		if (!isNull _blowobj) then {
			_xblow	= 0.1+random 5;
			_yblow	= 0.1+random 5;
	
			// creste viteza incremental
			_xx=0;
			_yy=0;
			
			while {(_xx< _xblow) or (_yy< _yblow)} do {
				_blowobj setVelocity [_xx*fctx,_yy*fcty,random -1];
				_xx = _xx + 0.01;
				_yy = _yy + 0.01;
				sleep 0.001;
			};
		};
	};
};