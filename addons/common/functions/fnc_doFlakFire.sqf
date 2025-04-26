#include "..\script_component.hpp"
/*
 * Authors: Reimchen, Andx
 * Lässt eine Flak auf ein Ziel feuern.
 *
 * Arguments:
 * 0: Flak <OBJECT>
 * 1: Target <OBJECT>
 *
 * Return Value:
 * Handle <NUMBER>
 *
 * Example:
 * [flak_01, flak_target_01] call PREFIX_common_fnc_doFlakFire
 *
 * Public: Yes
 */

params ["_unit","_target"];
TRACE_1("fnc_doFlakFire",_this);

if !(isServer) exitWith {};

//Fire
_handle = [
        {
            (_this select 0) params ["_unit", "_target"];

            if (alive _unit) then {
                _unit doSuppressiveFire _target;
                _target setPosATL [(_unit getPos [300 * sqrt random 1, random 360]) select 0, (_unit getPos [300 * sqrt random 1, random 360]) select 1, 200];
            };
        },
        (selectRandom [6,7,8,9,10]) + (selectRandom [0,1,2,3,4,5,6]),
        [_unit,_target]
    ] call CBA_fnc_addPerFrameHandler;

//Set Ammo to full on reload
private _reloaded = _unit addEventHandler ["Reloaded", {
    params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
    _unit setVehicleAmmo 1;
}];

//return
_handle;