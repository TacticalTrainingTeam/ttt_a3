#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Init event handler. Adds the actions to set up and adjust a ladder on the left and right side of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing
 *
 *  Example:
 *      [this] call ttt_compat_rnt_fnc_initLadderActions
 *
 * Public: NO
 */

params ["_vehicle"];

if (!hasInterface) exitWith {};

#define HOLD_TIME 5

private _ladderIcon = QPATHTOEF(vehicle_ladder,data\ui\holdaction_ladder.paa);

{
    _x params ["_side", "_ladderVariable", "_offset", "_direction"];

    // Set up the ladder
    [
        _vehicle,
        LELSTRING(vehicle_ladder,attachLadder),
        _ladderIcon,
        _ladderIcon,
        format ["[_target, _this, '%1'] call %2", _side, QFUNC(canAttachLadder)],
        format ["[_target, _this, '%1'] call %2", _side, QFUNC(canAttachLadder)],
        {},
        {},
        {
            params ["_vehicle", "_caller", "_actionId", "_args"];
            _args params ["_ladderVariable", "_offset", "_direction"];

            private _ladder = [_vehicle, _offset, _direction] call EFUNC(vehicle_ladder,attachLadder);
            _vehicle setVariable [_ladderVariable, _ladder, true];

            [_ladder, _caller] call EFUNC(vehicle_ladder,adjustLadder);
        },
        {},
        [_ladderVariable, _offset, _direction],
        HOLD_TIME,
        nil,
        false,
        false,
        false
    ] call BIS_fnc_holdActionAdd;

    // Adjust the ladder
    _vehicle addAction [
        LELSTRING(vehicle_ladder,adjustLadder),
        {
            params ["_vehicle", "_caller", "", "_ladderVariable"];

            private _ladder = [_vehicle, _ladderVariable] call FUNC(getAttachedLadder);
            if (isNull _ladder) exitWith {};

            [_ladder, _caller] call EFUNC(vehicle_ladder,adjustLadder);
        },
        _ladderVariable,
        4,
        true,
        true,
        "",
        format ["[_target, _this, '%1'] call %2", _side, QFUNC(canAdjustLadder)]
    ];
} forEach [
    ["left", QGVAR(ladderLeft), [-1, -1.7, -0.3], 270],
    ["right", QGVAR(ladderRight), [1, -1.7, -0.3], 90]
];
