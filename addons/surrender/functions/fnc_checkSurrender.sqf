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
// Module stores whole percent (Eden Combo fails to preselect float values); values <= 1 are legacy fractions from older missions
private _chance = _logic getVariable [QGVAR(SurrenderChance), 50];
if (_chance > 1) then {
    _chance = _chance / 100;
};
private _ratio = _logic getVariable [QGVAR(OutnumberRatio), 2];
private _rawArea = triggerArea _logic;
private _area = if (_rawArea isEqualTo []) then {[100, 100, 0, false, -1]} else {_rawArea + [-1]};
private _logicPos = getPosASL _logic;
// Module checkbox may arrive as Number (0/1) instead of Bool, which breaks the lazy && below
private _dropWeapon = (_logic getVariable [QGVAR(DropWeapon), false]) in [true, 1];

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

        // module deleted (e.g. by Zeus) without a deactivation call: stop scanning for nothing
        if (isNull _logic) exitWith {
            [_pfhId] call CBA_fnc_removePerFrameHandler;
        };

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

        // loop-invariant: check once instead of once per enemy
        if (_enemyCount == 0 || {_enemyCount * _ratio > _friendlyCount}) exitWith {};

        {
            if (!(_x getVariable [QUOTE(Surrendered), false]) && {random 1 <= _chance}) then {
                _x setVariable [QUOTE(Surrendered), true, true];

                if (
                    _dropWeapon &&
                    {isNull objectParent _x} &&
                    {(currentWeapon _x) != ""}
                ) then {
                    _x call ace_common_fnc_throwWeapon;
                };

                [{
                    params ["_unit"];
                    if (isNull _unit) exitWith {};
                    // setSurrendered only works where the unit is local (AI may sit on a headless client)
                    ["ace_captives_setSurrendered", [_unit, true], _unit] call CBA_fnc_targetEvent;

                    // ACE refuses e.g. mounted or handcuffed units; clear our flag so a later tick can retry instead of skipping the unit forever.
                    // Delay leaves time for a remote owner to broadcast isSurrendering, and stays well below the PFH interval.
                    [{
                        params ["_unit"];
                        if (!isNull _unit && {!(_unit getVariable ["ace_captives_isSurrendering", false])}) then {
                            _unit setVariable [QUOTE(Surrendered), false, true];
                        };
                    }, [_unit], SURRENDER_VERIFY_DELAY] call CBA_fnc_waitAndExecute;
                },
                [_x]] call CBA_fnc_execNextFrame;
            };
        } forEach _enemiesInArea;
    },
    10,
    [_enemySide, _friendlySide, _chance, _ratio, _logic, _area, _logicPos, _dropWeapon]
] call CBA_fnc_addPerFrameHandler;

_logic setVariable [QGVAR(pfhID), _pfhID];

_pfhID
