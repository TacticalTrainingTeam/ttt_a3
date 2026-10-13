#include "..\script_component.hpp"
/*
* Author: Timi007
* Checks if the smoke launcher of the vehicle can be fired: it has ammo, is not reloading and the gunner is alive and conscious.
*
* Arguments:
* 0: OBJECT - Vehicle
* 1: BOOLEAN - Ignore reload times (default: false)
*
* Return Value:
* BOOLEAN - Can fire smoke
*
* Example:
* [_vehicle] call ttt_smoke_launcher_fnc_canFireSmoke
*
* Public: No
*/


params [["_vehicle", objNull, [objNull]], ["_ignoreReloadTimes", false, [false]]];

if (isNull _vehicle) exitWith {false};

private _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);
if (_smokeLauncher isEqualTo "") exitWith {false};

(weaponState [_vehicle, [0], _smokeLauncher]) params ["", "", "", "", "_ammoCount", "", "_magazineReloadPhase"];

if (_ammoCount <= 0 || {!_ignoreReloadTimes && {_vehicle getVariable [QGVAR(reloading), false] || _magazineReloadPhase > 0}}) exitWith {false};

// Cannot smoke without gunner or when the gunner is unconscious
private _gunner = gunner _vehicle;
!isNull _gunner && {alive _gunner} && {!(_gunner getVariable ["ace_isunconscious", false])}
