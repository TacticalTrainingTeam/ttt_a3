#include "..\script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_getOutHatch.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, added timeout and validity check
 *
 *  Description:
 *      Lets the unit leave the vehicle through the given hatch and places it next to that hatch.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Unit
 *      2: STRING - Hatch, "commander", "driver", "left", "right" or "middle"
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject, player, "left"] call ttt_compat_rnt_fnc_getOutHatch
 *
 * Public: NO
 */

params ["_vehicle", "_unit", "_hatch"];

_unit action ["getOut", _vehicle];

// Wait until the unit is out of the vehicle, but not forever
private _timeout = CBA_missionTime + 5;

[{isNull objectParent (_this select 1) || {CBA_missionTime > (_this select 3)}}, {
    params ["_vehicle", "_unit", "_hatch"];

    if (!alive _unit || {!isNull objectParent _unit} || {isNull _vehicle}) exitWith {};

    switch (_hatch) do {
        case "commander": {
            _unit attachTo [_vehicle, [1, 0, -0.3]];
        };

        case "driver": {
            _unit attachTo [_vehicle, [-0.9, 1.6, -0.6]];
        };

        case "left": {
            _unit attachTo [_vehicle, [-0.6, -1.8, -0.4]];
            _unit setDir 270;
        };

        case "right": {
            _unit attachTo [_vehicle, [0.6, -1.8, -0.4]];
            _unit setDir 90;
        };

        case "middle": {
            _unit attachTo [_vehicle, [0, -2.7, -0.4]];
            _unit setDir 180;
        };
    };

    [{
        params ["_unit"];
        detach _unit;
    }, [_unit], 0.1] call CBA_fnc_waitAndExecute;
}, [_vehicle, _unit, _hatch, _timeout]] call CBA_fnc_waitUntilAndExecute;
