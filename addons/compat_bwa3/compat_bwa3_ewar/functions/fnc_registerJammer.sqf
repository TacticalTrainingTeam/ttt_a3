#include "..\script_component.hpp"
/*
 * Author: Andx
 * Registers a Dingo with CG13 as a (disabled) radio jammer in Crows Electronic Warfare.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_bwa3_fnc_registerJammer
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (isNull _vehicle || {!isServer}) exitWith {};

_vehicle setVariable [QGVAR(ecmRegistered), true];

[CROWS_EVENT_ADD_JAMMER, [
    _vehicle,
    ECM_FALLOFF_RADIUS,
    ECM_EFFECTIVE_RADIUS,
    false,
    [CROWS_CAPABILITY_RADIO]
]] call CBA_fnc_localEvent;
