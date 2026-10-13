#include "..\script_component.hpp"
/*
* Author: Timi007
* Fires the smoke launcher of the vehicle and blocks it until the reload time passed.
*
* Arguments:
* 0: OBJECT - Vehicle
*
* Return Value:
* BOOLEAN - Smoke was fired
*
* Example:
* [_vehicle] call ttt_smoke_launcher_fnc_fireSmoke
*
* Public: No
*/


params [["_vehicle", objNull, [objNull]]];

if !([_vehicle] call FUNC(canFireSmoke)) exitWith {false};

private _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);
TRACE_2("Fire smoke",_vehicle,_smokeLauncher);

private _success = [_vehicle, _smokeLauncher] call BIS_fnc_fire;
if (!_success) exitWith {false};

_vehicle setVariable [QGVAR(reloading), true, true];

private _reloadTime = GVAR(reloadTimeCache) getOrDefaultCall [_smokeLauncher, {
    getNumber (configFile >> "CfgWeapons" >> _smokeLauncher >> "reloadTime")
}, true];

[{
    params ["_vehicle"];
    _vehicle setVariable [QGVAR(reloading), false, true];
}, [_vehicle], _reloadTime] call CBA_fnc_waitAndExecute;

true
