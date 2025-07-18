#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates condensed breath particles locally.
* 
* Arguments:
* 0: <OBJECT>   unit to attach effect to
*
* Return Value:
* <ARRAY> breathParticle
*
* Example:
*	[unit] call ttt_effects_fnc_condensedBreathEffects;
*
* Public: No
*/

if (isDedicated || !hasInterface || !((_this select 0) isNil "ttt_effects_breathParticle")) exitWith {};

params ["_unit"];

private _breathParticle = "#particlesource" createVehicleLocal  (_unit modelToWorld [0,0,0]);				// particle effects are ALWAYS LOCAL
_breathParticle setParticleParams [
    ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],										// p3dPath, nth, index, count, loop
    "","Billboard",0.5,2,																					// animationName, type, timerPeriod, lifeTime
    [0,0,0],																								// position relative to referenceObject
    [0, 0.15, -0.2],																						// velocity
    1, 1.275, 1, 0.2, [0, 0.3, 0.55],																		// rotation, weight, volume, rubbing, size
    [[1,1,1,0.2], [1,1,1, 0.12], [1,1,1, 0]],																// colors
    [1000],																									// animationPhase
    1,0.04,																									// randomDirectionPeriod, randomDirectionIntensity
    "","",																									// onTimer, beforeDestroy
    _this																									// attached to referenceObject
];
_breathParticle setParticleRandom [0.5, [0, 0, 0], [0, 0.1, 0.1], 0, 0.25, [0, 0, 0, 0.2], 0, 0, 10];
_breathParticle setDropInterval (3 + random 1.5);
_breathParticle attachTo [_unit, [0,0.14,0.01], "neck", true];												// get fog to come out of player mouth

_unit setVariable ["ttt_effects_breathParticle", _breathParticle, false];

_breathParticle;
