#include "..\script_component.hpp"
/*
* Author: ALIAS, modified EinStein
*
* Description:
* Creates Post-Process-Effects, sounds and camshake local on player-machines.
* 
* Arguments:
* 0: Endzeit des Sturm nach Missiontime <INTEGER>
* 1: Sturmart (Sand oder Schnee) <INTEGER>
*
* Return Value:
* None
*
* Example (called only local on each player via the duststorm script):
*	[endTime, stormType] call ttt_effects_fnc_duststorm_effect;
*
* Public: No
*/

if (!hasInterface) exitWith {};

params [["_endTime",(time + 120),[42]],["_stormType",(0),[42]]];
enableCamShake true;

private _corlorCorrectionType = [
	[0.85, 1, 0.01, [-0.14, 0.17, 0.33, -0.14], [0.86, -0.4, 0.86, 0.86], [-0.57, 0.86, -1.2, 0.86]],
	[0.85, 1, 0.01, [-0.14, 0.17, 0.33, -0.14], [1.31, 0.81, 0.62, 1.22], [-0.57, 0.86, -1.2, 0.86]]
] select _stormType;

screenEffect = ppEffectCreate ["FilmGrain", 2000]; 
screenEffect ppEffectAdjust [1, 2, 4, 0.1, 0.1, true];
screenEffect ppEffectCommit 5;
screenEffect ppEffectEnable true;
"colorCorrections" ppEffectAdjust _corlorCorrectionType;
"colorCorrections" ppEffectCommit 5;
"colorCorrections" ppEffectEnable true;

//ambient sound and camerashake
[
	{
		(_this select 0) params ["_end"];
		if (time >= (_end - 15)) exitWith {};
		_wind = playSound (selectRandom ["wind_1","wind_2","wind_3","wind_4","wind_5"]);
		if (selectRandomWeighted [true, 40, false, 60]) then {addCamShake [0.2, 20, 20];};
	}, 
	11.2,																						//duration of all files is 11.1198 seconds
	[_endTime]
] call CBA_fnc_addPerFrameHandler;

// particule in aer
_leaves_p  = "#particlesource" createVehicleLocal (getPos player);
if (!isNull objectParent player) then {_leaves_p attachTo [vehicle player];} else {_leaves_p attachTo [player];};
_leaves_p setParticleRandom [0, [10, 10, 7], [4, 4, 5], 2, 0.1, [0, 0, 0, 0.5], 1, 1];
_leaves_p setParticleCircle [10, [0, 0, 0]]; 
_leaves_p setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 12, [0, 0, 0], [-1, -1, 0], 3, 10.15, 7.9, 0.01, [10, 10, 20], [[0.65, 0.5, 0.5, 0], [0.65, 0.6, 0.5, 0.3], [1, 0.95, 0.8, 0]], [0.08], 1, 0, "", "", vehicle player];

_alias_local_fog = "#particlesource" createVehicleLocal (getPos player); 
if (!isNull objectParent player) then {_alias_local_fog attachTo [vehicle player];} else {_alias_local_fog attachTo [player];};
_alias_local_fog setParticleCircle [10, [3, 3, 0]];
_alias_local_fog setParticleRandom [10, [0.25, 0.25, 0], [1, 1, 0], 1, 1, [0, 0, 0, 0.1], 0, 0];
_alias_local_fog setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 12, [0, 0, 0], [-1, -1, 0], 3, 10.15, 7.9, 0.01, [10, 10, 20], [[0.65, 0.5, 0.5, 0], [0.65, 0.6, 0.5, 0.3], [1, 0.95, 0.8, 0]], [0.08], 1, 0, "", "", vehicle player];

_leaves_p_drop			= 0.1+random 0.1;
_alias_drop_fog_factor	= 0.01+random 0.1;

_leaves_p setDropInterval _leaves_p_drop;
_alias_local_fog setDropInterval _alias_drop_fog_factor;

sleep 5 + random 15;
deleteVehicle _leaves_p;
deleteVehicle _alias_local_fog;

hndl_blur = ppEffectCreate ["DynamicBlur", 500];
hndl_blur ppEffectEnable true;
hndl_blur ppEffectAdjust [3];
hndl_blur ppEffectCommit 3;
sleep 3;

//hint "desc";sleep 5;
col_fct =0.86;
	while {col_fct < 1} do {
		"colorCorrections" ppEffectAdjust[col_fct, 1, 0.01, [1-col_fct, 0.17, 0.33, col_fct-1],[col_fct, -0.4, col_fct, col_fct],[0.299, 0.587, 0.114, 1-col_fct]];
		//"colorCorrections" ppEffectAdjust[1, 1, 0, [0, 0, 0, 0],[1, 1, 1, 1],[0.299, 0.587, 0.114, 0]];
		"colorCorrections" ppEffectCommit 0;
		"colorCorrections" ppEffectEnable true;
		col_fct = col_fct+0.001;
		sleep 0.0001;
};

/*
"colorCorrections" ppEffectAdjust[1, 1, 0, [0, 0, 0, 0],[1, 1, 1, 1],[0.299, 0.587, 0.114, 0]];
"colorCorrections" ppEffectCommit 0;
"colorCorrections" ppEffectEnable true;
*/

hndl_blur ppEffectAdjust [0];
hndl_blur ppEffectCommit 3;
sleep 3;
hndl_blur ppEffectEnable false;
ppEffectDestroy hndl_blur;

grain_sand = 0;
	while {grain_sand > 0} do {
		effect_screen = ppEffectCreate ["FilmGrain", 2000]; 
		effect_screen ppEffectEnable true;
		effect_screen ppEffectAdjust [0.1,0.1,grain_sand,0.1,0.1,true];
		effect_screen ppEffectCommit 0;
		grain_sand = grain_sand - 0.1;
		sleep 0.5;
	};
	
effect_screen ppEffectEnable false;
"colorCorrections" ppEffectEnable false;
ppEffectDestroy effect_screen;
enableCamShake false;