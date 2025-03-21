#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates falling snow particles locally.
* 
* Arguments:
* 1: <INTEGER>	(optional, default: 50)	snowfall intensity percentage
*
* Return Value:
* <OBJECT> snowParticle
*
* Example (used locally e.g.: initPlayerLocal.sqf):
*	[intensity] call ttt_effects_fnc_snow;
*
* Public: Yes
*/

if (isServer && isDedicated && !hasInterface) exitWith {};

params [["_intensity",(50),[42]]];

_intensity = -0.001 * (1 max _intensity min 100) + 0.101;

private _snowParticle = "#particlesource" createVehicleLocal  (player modelToWorld [0,0,0]);  
_snowParticle setParticleParams [
	["\A3\Data_F\ParticleEffects\Universal\Universal",16,12,8,1],								// p3dPath, nth, index, count, loop
	"","Billboard",1,15,																		// animationName, type, timerPeriod, lifeTime
	[0,0,20],																					// position relative to referenceObject
	[0,0,0],																					// velocity
	1, 0.000001, 0, 1.4, [0.1,0.1],																// rotation, weight, volume, rubbing, size
	[[1,1,1,1]],																				// colors
	[0,1],																						// animationPhase
	0.2,1.2,																					// randomDirectionPeriod, randomDirectionIntensity
	"","",																						// onTimer, beforeDestroy
	(vehicle player)																			// attached to referenceObject
];
_snowParticle setParticleRandom [0,[30,30,5],[0,0,0],0,0.01,[0,0,0,0.1],0,0];
_snowParticle setDropInterval _intensity;														// stark: 0.0002 : schwach: 0.1
_snowParticle;