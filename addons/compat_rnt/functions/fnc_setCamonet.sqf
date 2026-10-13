#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets or removes the camonet of a Redd'n'Tank vehicle. Vehicles without a known camonet are ignored.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: BOOLEAN - Set (true) or remove (false) camonet. (default: true)
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject, true] call ttt_compat_rnt_fnc_setCamonet
 *
 * Public: NO
 */

params [["_vehicle", objNull, [objNull]], ["_setCamonet", true, [true]]];

if (isNull _vehicle) exitWith {};

private _animationSources = GVAR(camonetSources) getOrDefault [typeOf _vehicle, []];
if (_animationSources isEqualTo []) exitWith {};

_vehicle setVariable ["has_camonet", _setCamonet, true];

private _animationPhase = [1, 0] select _setCamonet;
{
    _vehicle animateSource [_x, _animationPhase];
} forEach _animationSources;
