#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Emtpy M120 Mortar magazine after one shot was fired.
 *
 *  Parameter(s):
 *      0: OBJECT - M120 Mortar.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      call ttt_compat_rnt_m120_fnc_m120HandleFired
 *
 * Public: NO
 *
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
