#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates condensed breath particels globally.
* 
* Arguments:
* None
*
* Return Value:
* <OBJECT> breathParticle
*
* Example (used locally e.g.: initPlayerLocal.sqf):
*	[] call ttt_effects_fnc_condensedBreath;
*
* Public: Yes
*/

if (isServer && isDedicated && !hasInterface) exitWith {};

private _breathParticle = "#particlesource" createVehicle  (player modelToWorld [0,0,0]);
_breathParticle setParticleParams [
	["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],										// p3dPath, nth, index, count, loop
	"","Billboard",0.5,2,																					// animationName, type, timerPeriod, lifeTime
	[0,0,0],																								// position relative to referenceObject
	[0, 0.15, -0.2],																						// velocity
	1, 1.275, 1, 0.2, [0, 0.5, 0.75],																		// rotation, weight, volume, rubbing, size
	[[1,1,1,0.2], [1,1,1, 0.12], [1,1,1, 0]],																// colors
	[1000],																									// animationPhase
	1,0.04,																									// randomDirectionPeriod, randomDirectionIntensity
	"","",																									// onTimer, beforeDestroy
	_this																									// attached to referenceObject
];
_breathParticle setParticleRandom [0.5, [0, 0, 0], [0, 0.1, 0.1], 0, 0.5, [0, 0, 0, 0.2], 0, 0, 10];
_breathParticle setDropInterval (3.5 + random 1);
_breathParticle attachto [player, [0,0.14,0.01], "neck", true];												// get fog to come out of player mouth  
_breathParticle;