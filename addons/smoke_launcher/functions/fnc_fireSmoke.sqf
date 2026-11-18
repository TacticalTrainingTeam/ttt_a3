#include "..\script_component.hpp"
/*
* Author: Timi007
* Source: PzGrenBtl402 addons/SmokeLauncher/functions/fnc_fireSmoke.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, fires on the machine the turret is local to
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

// The launcher is a weapon of the gunner turret, which can be local to another player than the commander
[QGVAR(fire), [_vehicle, _smokeLauncher], _vehicle, [0]] call CBA_fnc_turretEvent;

_vehicle setVariable [QGVAR(reloading), true, true];

private _reloadTime = GVAR(reloadTimeCache) getOrDefaultCall [_smokeLauncher, {
    getNumber (configFile >> "CfgWeapons" >> _smokeLauncher >> "reloadTime")
}, true];

[{
    params ["_vehicle"];
    _vehicle setVariable [QGVAR(reloading), false, true];
}, [_vehicle], _reloadTime] call CBA_fnc_waitAndExecute;

true
