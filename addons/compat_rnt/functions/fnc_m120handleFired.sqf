#include "..\script_component.hpp"
/*
 * Author: Timi007
 * Empties the M120 mortar magazine after one shot was fired (Fired event handler).
 *
 * Arguments:
 * 0: M120 Mortar <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _this call ttt_compat_rnt_fnc_m120handleFired
 *
 * Public: No
 */

params ["_mortar"];

private _turret = [0];

// the config fired EH runs on every machine that sees the shot; only the turret owner may (and needs to) remove the magazine,
// and that can be a different machine than the vehicle owner (e.g. Zeus-controlled gunner)
if !(_mortar turretLocal _turret) exitWith {};

private _mags = _mortar magazinesTurret _turret;

if (_mags isEqualTo []) exitWith {};

private _mag = _mags select 0;
_mortar removeMagazinesTurret [_mag, _turret];
