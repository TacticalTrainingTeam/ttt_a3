#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Starts the surrender check loop for a placed module and applies ACE surrender to enemy units that become sufficiently outnumbered inside the configured area.
 *
 * Arguments:
 * 0: Surrender module logic <OBJECT>
 * 1: Units (not used) <ARRAY>
 * 2: Module activation state <BOOL>
 *
 * Return Value:
 * Per-frame handler ID on activation, nil on deactivation <NUMBER | NIL>
 *
 * Example:
 * [logic, [], true] call ttt_surrender_fnc_checkSurrender
 *
 * Public: No
 */

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
    ];

TRACE_1("fnc_checkSurrender",_this);

if (!_activated) exitWith {
    private _existingPfhID = _logic getVariable [QGVAR(pfhID), -1];
    if (_existingPfhID != -1) then {
        _existingPfhID call CBA_fnc_removePerFrameHandler;
        _logic setVariable[QGVAR(pfhID), -1];
    };
};

private _enemySideClass = _logic getVariable [QGVAR(EnemySide), 2];
private _friendlySideClass = _logic getVariable [QGVAR(FriendlySide), 1];
private _chance = _logic getVariable [QGVAR(SurrenderChance), 0.5];
private _ratio = _logic getVariable [QGVAR(OutnumberRatio), 2];
private _rawArea = triggerArea _logic;
private _area = if (_rawArea isEqualTo []) then {[100, 100, 0, false, -1]} else {_rawArea + [-1]};
private _logicPos = getPosASL _logic;
private _dropWeapon = _logic getVariable [QGVAR(DropWeapon), false];

private _enemySide = switch (_enemySideClass) do {
    case (1): {west};
    case (2): {east};
    case (3): {resistance};
    default {sideUnknown};
};

private _friendlySide = switch (_friendlySideClass) do {
    case (1): {west};
    case (2): {east};
    case (3): {resistance};
    default {sideUnknown};
};

private _pfhID = [
    {
        params ["_args", "_pfhId"];
        _args params ["_enemySide", "_friendlySide", "_chance", "_ratio", "_logic", "_area", "_logicPos", "_dropWeapon"];

        private _enemies = units _enemySide;
        private _friendlies = units _friendlySide;

        private _enemiesInArea = [];
        private _friendliesInArea = [];

        {
            if (getPosASL _x inArea [_logicPos, _area select 0, _area select 1, _area select 2, _area select 3, _area select 4]) then {
                if (side _x == _enemySide) then {
                    _enemiesInArea append [_x];
                };
                if (side _x == _friendlySide) then {
                    _friendliesInArea append [_x];
                };
            };
        } forEach _enemies + _friendlies;

        private _friendlyCount = count _friendliesInArea;
        private _enemyCount = count _enemiesInArea;

        {
            if (_enemyCount > 0 && (_enemyCount * _ratio <= _friendlyCount)) then {

                if (random 1 <= _chance && !(_x getVariable [QUOTE(Surrendered), false])) then {
                        _x setVariable [QUOTE(Surrendered), true, true];

                        if(
                            _dropWeapon &&
                            {isNull objectParent _x} &&
                            {(currentWeapon _x) != ""}
                        ) then {
                            _x call ace_common_fnc_throwWeapon;
                        };

                        [{
                            params ["_unit"];
                            [_unit, true] call ace_captives_fnc_setSurrendered;
                        },
                        [_x]] call CBA_fnc_execNextFrame;
                };
            };
        } forEach _enemiesInArea;
    },
    10,
    [_enemySide, _friendlySide, _chance, _ratio, _logic, _area, _logicPos, _dropWeapon]
] call CBA_fnc_addPerFrameHandler;

_logic setVariable [QGVAR(pfhID), _pfhID];

_pfhID
