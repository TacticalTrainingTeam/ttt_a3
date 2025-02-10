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

//define fallback
// if (isNil "_directionDuststorm") then {_directionDuststorm = random 360;};
// if (isNil "_durationDuststorm") then {_durationDuststorm = 120;};
// if (isNil "_effectOnObjects") then {_effectOnObjects = false;};
// if (isNil "_dustWall") then {_dustWall = false;};

private _duststormActive = true;
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
	}, 
	[_environment_foglevel,_environment_rainlevel,_environment_lightninglevel,_environment_windlevel], 
	_durationDuststorm
] call CBA_fnc_waitAndExecute;

//ambient sound
[
	{
		(_this select 0) params ["_active"];
		if !(_active) exitWith {};
		playSound "bcg_wind";
	}, 
	67, 
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













if (_dustWall) then {
	// perete de praf
	_rand_pl = [] execVM "scripts\dust_storm\alias_hunt.sqf";
	waitUntil {scriptDone _rand_pl};

	//_origine_storm = -1*_directionDuststorm;

	//_pozstorm = getpos hunt_alias;
	_rapoz = 360-_directionDuststorm;

	_xpoz= 0;
	_ypoz= 0;
	 
	if (_rapoz>=315) then {_xpoz = 0; _ypoz = -800};
	if (_rapoz <45) then {_xpoz = 0; _ypoz = -800};
	if ((_rapoz <90) and (_rapoz >=45)) then {_xpoz = 800; _ypoz = 0};
	if ((315>_rapoz) and (_rapoz>=270)) then {_xpoz = -800; _ypoz = 0};
	if ((270>_rapoz) and (_rapoz>=225)) then {_xpoz = -800; _ypoz = 0};
	if ((225>_rapoz) and (_rapoz>=180)) then {_xpoz = 0; _ypoz = 800};
	if ((180>_rapoz) and (_rapoz>=135)) then {_xpoz = 0; _ypoz = 800};
	if ((135>_rapoz) and (_rapoz>=90)) then {_xpoz = 800; _ypoz = 0};

	//hint str _xpoz;sleep 1;hint str _ypoz;

	_pozobcj = [(getPos hunt_alias select 0) + _xpoz, (getPos hunt_alias select 1) + _ypoz, 0];

	_xadd = 0;
	_yadd = 0;

	if ((_ypoz == -800) or ((_ypoz == 800))) then {_yadd =0; _xadd = 160};
	if ((_xpoz == -800) or ((_xpoz == 800))) then {_yadd =160; _xadd = 0};


	_stormsource = "Land_HelipadEmpty_F" createVehicle _pozobcj;

	_stormsource_1 = "Land_HelipadEmpty_F" createVehicle [(_pozobcj select 0)-2*_xadd,(_pozobcj select 1)-2*_yadd,0];
	_stormsource_2 = "Land_HelipadEmpty_F" createVehicle [(_pozobcj select 0)-_xadd,(_pozobcj select 1)-_yadd,0];

	_stormsource_3 = "Land_HelipadEmpty_F" createVehicle [(_pozobcj select 0)+_xadd,(_pozobcj select 1)+_yadd,0];
	_stormsource_4 = "Land_HelipadEmpty_F" createVehicle [(_pozobcj select 0)+2*_xadd,(_pozobcj select 1)+2*_yadd,0];

	_stormsource_5 = "Land_HelipadEmpty_F" createVehicle [(_pozobcj select 0)-3*_xadd,(_pozobcj select 1)-3*_yadd,0];
	_stormsource_6 = "Land_HelipadEmpty_F" createVehicle [(_pozobcj select 0)+3*_xadd,(_pozobcj select 1)+3*_yadd,0];
	
	[_stormsource,_stormsource_1,_stormsource_2,_stormsource_3,_stormsource_4,_stormsource_5,_stormsource_6] spawn {
		private ["_xadv","_yadv","_storm","_storm_1","_storm_2","_storm_3","_storm_4","_storm_5","_storm_6"];
		_storm = _this select 0;
		_storm_1 = _this select 1;
		_storm_2 = _this select 2;
		_storm_3 = _this select 3;
		_storm_4 = _this select 4;
		_storm_5 = _this select 5;
		_storm_6 = _this select 6;

		_xadv = 0;
		_yadv = 0;
		
		// depl vert
		if (((getPos _storm select 1)-(getPos hunt_alias select 1)) > 0) then {
		/*_xadv = 0;*/_yadv =-5;
		} else {/*_xadv = 0;*/_yadv =5;};

		// depl oriz
		if (((getPos _storm select 0)-(getPos hunt_alias select 0)) > 0) then {
		_xadv = -5;/*_yadv =0;*/
		} else {_xadv = 5;/*_yadv =0;*/};
			
		//hint str _xadv;		
		
		while {duststormOn} do {		
			_storm 	 setPos [(getPos _storm select 0)+_xadv,(getPos _storm select 1)+_yadv,0];
			_storm_1 setPos [(getPos _storm_1 select 0)+_xadv,(getPos _storm_1 select 1)+_yadv,0];
			_storm_2 setPos [(getPos _storm_2 select 0)+_xadv,(getPos _storm_2 select 1)+_yadv,0];
			_storm_3 setPos [(getPos _storm_3 select 0)+_xadv,(getPos _storm_3 select 1)+_yadv,0];
			_storm_4 setPos [(getPos _storm_4 select 0)+_xadv,(getPos _storm_4 select 1)+_yadv,0];
			_storm_5 setPos [(getPos _storm_5 select 0)+_xadv,(getPos _storm_5 select 1)+_yadv,0];
			_storm_6 setPos [(getPos _storm_6 select 0)+_xadv,(getPos _storm_6 select 1)+_yadv,0];		
			sleep 5;
			//hint str getPos _storm;
		};
	};	
	
	sleep 0.1;
	
	[_stormsource] spawn {
		_stormsource_s = _this select 0;
		while {duststormOn} do {
			[_stormsource_s,["uragan_1",2000]] remoteExec ["say3d"];
			sleep 40;
		};
	};

// >>>>>>>>>>>>>>>>>>>>	

	[[_stormsource,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
	sleep 0.1;
	[[_stormsource_1,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
	sleep 0.1;
	[[_stormsource_2,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
	sleep 0.1;
	[[_stormsource_3,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
	sleep 0.1;
	[[_stormsource_4,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
	sleep 0.1;
	[[_stormsource_5,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
	sleep 0.1;
	[[_stormsource_6,_durationDuststorm],"scripts\dust_storm\alias_dust_wall.sqf"] remoteExec ["BIS_fnc_execVM"];
};

//heavy wind in direction
private _endTime = time + _durationDuststorm;
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

while {duststormOn} do {
	_rafale = ["rafala_1","sandstorm","rafala_4_dr","rafala_5_st"] call BIS_fnc_selectRandom;
	[_rafale] remoteExec ["playSound"];
	sleep 60+random 120;
};

//deleteVehicle _stormsource;deleteVehicle _stormsource_1;deleteVehicle _stormsource_2;deleteVehicle _stormsource_3;deleteVehicle _stormsource_4;deleteVehicle _stormsource_5;deleteVehicle _stormsource_6;