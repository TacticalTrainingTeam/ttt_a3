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
private _handle = [
        {
            params ["_args", "_pfhId"];
            _args params ["_unit","_target"];

            // flak is gone for good: stop ticking and free the logic + its group instead of leaking both
            if (!alive _unit) exitWith {
                [_pfhId] call CBA_fnc_removePerFrameHandler;
                private _group = group _target;
                deleteVehicle _target;
                deleteGroup _group;
            };

            private _targetPos = _unit getPos [300 * sqrt random 1, random 360];
            _target setPosATL [_targetPos select 0, _targetPos select 1, 200];
            _unit doSuppressiveFire _target;
        },
        (6 + floor random 10),
        [_unit,_target]
    ] call CBA_fnc_addPerFrameHandler;

//Set Ammo to full on reload
_unit addEventHandler ["Reloaded", {
    params ["_unit"];
    _unit setVehicleAmmo 1;
}];

//return
  _handle
