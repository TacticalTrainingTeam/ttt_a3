#include "..\script_component.hpp"
/*
 * Author: Andy
 *
 * Computes a 0..1 jamming strength for a Drift-type jammer, using the same two-radius
 * falloff idiom CrowsEW uses elsewhere (e.g. fnc_calcSignalStrength.sqf): full strength (1)
 * anywhere inside the effective radius, ramping linearly down to 0 at the outer edge of the
 * falloff radius, 0 beyond that.
 *
 * Arguments:
 * 0: NUMBER - distance (meters) between the tracked unit and the jammer
 * 1: NUMBER - effective radius (meters)
 * 2: NUMBER - falloff radius (meters)
 *
 * Return Value:
 * NUMBER - strength, 0..1
 *
 * Public: No
 */

params [["_distance", 0, [0]], ["_radEffective", 0, [0]], ["_radFalloff", 0, [0]]];

if (_distance <= _radEffective) exitWith {1};

private _outerEdge = _radEffective + _radFalloff;
if (_distance >= _outerEdge) exitWith {0};

linearConversion [_radEffective, _outerEdge, _distance, 1, 0, true]
