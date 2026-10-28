#include "..\script_component.hpp"
/*
 * Author: Andx
 * Brings the Crows radio jammer of a vehicle in line with its DUKE: on/off state and antenna damage.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_rhs_fnc_syncJammer
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

private _state = _vehicle getVariable QGVAR(jammerState);

if (isNull _vehicle || {isNil "_state"} || {!alive _vehicle}) exitWith {};

_state params ["_enabled", "_scale"];

private _damage1 = _vehicle getHitPointDamage "HitDuke1";
private _damage2 = _vehicle getHitPointDamage "HitDuke2";

private _wantEnabled = (_vehicle getVariable [DUKE_STATE_VAR, false])
    && {!(_damage1 >= DUKE_BOTH_ANTENNAS_DESTROYED && {_damage2 >= DUKE_BOTH_ANTENNAS_DESTROYED})};
private _wantScale = [1, DUKE_SINGLE_ANTENNA_SCALE] select (_damage1 >= DUKE_ANTENNA_DESTROYED || {_damage2 >= DUKE_ANTENNA_DESTROYED});

if (_wantScale != _scale) exitWith {
    // Crows has no way to change the radii of a jammer, so replace it
    [CROWS_EVENT_REMOVE_JAMMER, [netId _vehicle, true]] call CBA_fnc_localEvent;
    [_vehicle, _wantEnabled, _wantScale] call FUNC(registerJammer);
};

if (_wantEnabled != _enabled) then {
    _vehicle setVariable [QGVAR(jammerState), [_wantEnabled, _scale]];
    [CROWS_EVENT_TOGGLE_JAMMER, [netId _vehicle, _wantEnabled]] call CBA_fnc_localEvent;
};
