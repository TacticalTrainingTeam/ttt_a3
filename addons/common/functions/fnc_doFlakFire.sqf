#include "..\script_component.hpp"
/*
 * Authors: Reimchen, Andx
 * Erstellt eine GameLogic als Ziel und die lässt die Flak auf dieses feuern.
 *
 * Arguments:
 * 0: Flak <OBJECT>
 *
 * Return Value:
 * Handle <NUMBER>
 *
 * Example:
 * [flak_01] call ttt_common_fnc_doFlakFire;
 *
 * Public: Yes
 */

params ["_unit"];

if !(isServer) exitWith {};

//create a group to add the target to
private _group = createGroup sideLogic;

//To create objects of type "Logic", use createUnit.
private _target = _group createUnit ["Logic", [0,0,0], [], 0, "NONE"];
//hint format ["Ziel: %1, Gruppe: %2", _target, _group];

//Fire
_handle = [
        {
            (_this select 0) params ["_unit","_target"];

            if (alive _unit) then {
                _target setPosATL [(_unit getPos [300 * sqrt random 1, random 360]) select 0, (_unit getPos [300 * sqrt random 1, random 360]) select 1, 200];
                _unit doSuppressiveFire _target;
            };
        },
        (6 + floor random 10),
        [_unit,_target]
    ] call CBA_fnc_addPerFrameHandler;

//Set Ammo to full on reload
private _reloaded = _unit addEventHandler ["Reloaded", {
    params ["_unit"];
    _unit setVehicleAmmo 1;
}];

//return
_handle;
