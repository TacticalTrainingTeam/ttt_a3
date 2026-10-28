#include "..\script_component.hpp"
/*
 * Author: Andx
 * Registers a vehicle with a DUKE as radio jammer in Crows Electronic Warfare.
 * The full jamming radius is the DUKE's mine jamming radius, the falloff radius is 1.5 times that.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Jammer enabled <BOOL> (default: false)
 * 2: Radius scale <NUMBER> (default: 1)
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_rhs_fnc_registerJammer
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]], ["_enabled", false, [false]], ["_scale", 1, [0]]];

if (isNull _vehicle || {!isServer}) exitWith {};

private _radEffective = DUKE_EFFECTIVE_RADIUS * _scale;

_vehicle setVariable [QGVAR(jammerState), [_enabled, _scale]];

[CROWS_EVENT_ADD_JAMMER, [
    _vehicle,
    DUKE_FALLOFF_FACTOR * _radEffective,
    _radEffective,
    _enabled,
    [CROWS_CAPABILITY_RADIO]
]] call CBA_fnc_localEvent;
