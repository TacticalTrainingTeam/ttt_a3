#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Starts the surrender check loop for a placed module and applies ACE surrender to enemy units that become sufficiently outnumbered inside the configured area.
 *
 * Arguments:
 * 0: Surrender module logic <OBJECT>
 * 1: Module activation state <BOOL>
 *
 * Return Value:
 * Per-frame handler ID <NUMBER>
 *
 * Example:
 * [_logic, true] call ttt_surrender_fnc_checkSurrender
 *
 * Public: No
 */

params [];
TRACE_1("fnc_checkSurrender",_this);


params ["_logic", "", "_activated"];

if (!_activated) exitWith {};

private _enemySide = _logic getVariable [QGVAR(Module_EnemySide), "east"];
private _friendlySide = _logic getVariable [QGVAR(Module_FriendlySide), "west"];
private _chance = _logic getVariable [QGVAR(Module_SurrenderChance), 0.1];
private _ratio = _logic getVariable [QGVAR(Module_OutnumberRatio), 2];

private _pfhID = [
    {
        params ["_args", "_pfhId"];
        _args params ["_enemySide", "_friendlySide", "_chance", "_ratio", "_logic"];

        private _enemies = units _enemySide;
        private _friendlies = units _friendlySide;

        private _enemiesInArea = [];
        private _friendliesInArea = [];

        private _area = _logic getVariable ["objectarea", [50, 50, 0, false, -1]];

        {
            if (getPosASL _x inArea [getPosASL _logic, _area select 0, _area select 1, _area select 2, _area select 3, _area select 4]) then {
                _enemiesInArea append [_x];
            };
        } forEach _enemies;

        {
            if (getPosASL _x inArea [getPosASL _logic, _area select 0, _area select 1, _area select 2, _area select 3, _area select 4]) then {
                _friendliesInArea append [_x];
            };
        } forEach _friendlies;

        private _friendlyCount = count _friendliesInArea;
        private _enemyCount = count _enemiesInArea;

        {
            if (_enemyCount > 0 && (_enemyCount * _ratio <= _friendlyCount)) then {

                if (random 1 < _chance && !(_x getVariable [QGVAR(Surrendered), false])) then {
                        _x setVariable [QGVAR(Surrendered), true, true];
                        [_x, true] call ace_captives_fnc_setSurrendered;
                };
            };
        } forEach _enemiesInArea;

    },
    10,
    [_enemySide, _friendlySide, _chance, _ratio, _logic]
] call CBA_fnc_addPerFrameHandler;

_logic setVariable [QGVAR(pfhID), _pfhID, true];

_pfhID
