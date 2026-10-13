#include "..\script_component.hpp"
/**
 *  Author: Timi007
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

// Wait until the unit is out of the vehicle
[{isNull objectParent (_this select 1)}, {
    params ["_vehicle", "_unit", "_hatch"];

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
}, _this] call CBA_fnc_waitUntilAndExecute;
