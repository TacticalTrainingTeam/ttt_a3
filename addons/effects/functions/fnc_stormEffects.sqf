#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates Post-Process-Effects, sounds and camshake local on player-machines.
* 
* Arguments:
* 0: <INTEGER>	endtime of storm 
* 1: <INTEGER>	type (sand or snow) 
* 2: <BOOL>		force walk 
*
* Return Value:
* None
*
* Example (called automatically only local on each player via the duststorm script):
*	[endTime, stormType] call ttt_effects_fnc_stormEffects;
*
* Public: No
*/

if (isDedicated || !hasInterface) exitWith {};

params [["_endTime",(time + 120),[42]],["_stormType",(0),[42]],["_walk",(true),[true]]];

private _durationDuststorm = _endTime - time;
enableCamShake true;
if (_walk) then {player forceWalk true;};

private _corlorCorrectionType = [
	[[0.78, 1, 0.01, [-0.14, 0.17, 0.33, -0.14], [0.86, -0.4, 0.86, 0.86], [-0.57, 0.86, -1.2, 0.86]], [0.40,0.35,0.25, 0.35], [0.40,0.35,0.25, 0]],	//sand
	[[1.25, 0.9, 0.0, [0.25, 0.35, 0.5, 0.0], [1.05, 1.05, 1.1, 1.0], [0.35, 0.5, 0.75, 0.4]], [0.80,0.80,0.80, 0.25], [0.70,0.70,0.70, 0]]		//snow
] select _stormType;

// add grain, blur and colorfilter for immersive FOV
"colorCorrections" ppEffectAdjust (_corlorCorrectionType select 0);
"colorCorrections" ppEffectCommit 5;
"colorCorrections" ppEffectEnable true;
screenEffectOne = ppEffectCreate ["DynamicBlur", 500];
screenEffectOne ppEffectAdjust [0.25];
screenEffectOne ppEffectCommit 8;
screenEffectOne ppEffectEnable true;
screenEffectTwo = ppEffectCreate ["FilmGrain", 2000];
screenEffectTwo ppEffectAdjust [0.7, 2, 4, 0.1, 0.1, true];
screenEffectTwo ppEffectCommit 10;
screenEffectTwo ppEffectEnable true;

// spawn particles around player
private _particleOne = "#particlesource" createVehicleLocal (player modelToWorld [0,0,0]);
private _particleTwo = "#particlesource" createVehicleLocal (player modelToWorld [0,0,0]);
private _particleThree = "#particlesource" createVehicleLocal (player modelToWorld [0,0,0]);
{
	(_x select 0) setParticleParams [
		["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 12, 8, 1],						// p3dPath, nth, index, count, loop
		"", "Billboard", 1, 25,																	// animationName, type, timerPeriod, lifeTime
		[0, 0, 0],																				// position relative to referenceObject
		[0, 0, 0],																				// velocity
		3, 10.15, 7.9, 0, [0.2, 10, 15, 15, 35, 0],												// rotation, weight, volume, rubbing, size
		[(_corlorCorrectionType select 1),(_corlorCorrectionType select 1),
		(_corlorCorrectionType select 1),(_corlorCorrectionType select 1),
		(_corlorCorrectionType select 1),(_corlorCorrectionType select 2)],						// colors
		[0.08],																					// animationPhase
		2, 0.5,																					// randomDirectionPeriod, randomDirectionIntensity
		"", "",																					// onTimer, beforeDestroy
		(vehicle player)																		// attached to referenceObject
	];
	(_x select 0) setDropInterval (0.1 + (random 0.1));											// time to spawn new particle
	(_x select 0) setParticleCircle [30, (_x select 1)];										// randomise position to spawn
} forEach [[_particleOne, [0.25, -0.1, 0.25]],[_particleTwo, [-0.25, -0.1, 0.25]],[_particleThree, [0.2, -0.2, 0.25]]];

// ambient sound and camshake
[
	{
		(_this select 0) params ["_end"];
		if (time >= (_end - 15)) exitWith {};
		_wind = playSound (selectRandom ["wind_1","wind_2","wind_3","wind_4","wind_5"]);
		if (selectRandomWeighted [true, 40, false, 60]) then {addCamShake [0.35, 20, 25];};		// random camshake
	}, 
	11.2,																						//duration of all files is 11.1198 seconds
	[_endTime]
] call CBA_fnc_addPerFrameHandler;

// delete particles
[
	{
		params ["_particleOne", "_particleTwo", "_particleThree"];
		{
			deleteVehicle _x;
		} forEach [_particleOne, _particleTwo, _particleThree];
	}, 
	[_particleOne, _particleTwo, _particleThree], 
	(_durationDuststorm - 30)
] call CBA_fnc_waitAndExecute;

// reset FOV smoothly
[
	{
		params ["_effectOne","_effectTwo"];
		"colorCorrections" ppEffectAdjust [1,1,0,[0, 0, 0, 0],[1, 1, 1, 1],[0.299, 0.587, 0.114, 0]];
		"colorCorrections" ppEffectCommit 10;
		"colorCorrections" ppEffectEnable true;
		screenEffectOne = ppEffectCreate ["DynamicBlur", 500];
		screenEffectOne ppEffectAdjust [0];
		screenEffectOne ppEffectCommit 8;
		screenEffectOne ppEffectEnable true;
		screenEffectTwo = ppEffectCreate ["FilmGrain", 2000];
		screenEffectTwo ppEffectAdjust [0.005, 1.25, 2.01, 0.75, 1, true];
		screenEffectTwo ppEffectCommit 5;
		screenEffectTwo ppEffectEnable true;
		player forceWalk false;
	}, 
	[screenEffectOne, screenEffectTwo], 
	(_durationDuststorm - 10)
] call CBA_fnc_waitAndExecute;

// delete effects
[
	{
		params ["_effectOne","_effectTwo"];
		{
			_x ppEffectEnable false;
			ppEffectDestroy _x;
			enableCamShake false;
		} forEach [_effectOne, _effectTwo];
	},
	[screenEffectOne, screenEffectTwo],
	_durationDuststorm
] call CBA_fnc_waitAndExecute;
