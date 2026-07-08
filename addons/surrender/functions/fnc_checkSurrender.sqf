#include "..\script_component.hpp"
/*
    ttt_surrender_fnc_surrenderCheck
    Called by module on mission start AND when placed by Zeus.
*/

params ["_logic", "_activated"];

private _enemySideClass = _logic getVariable [QGVAR(Module_EnemySide), "OPF_F"];
private _friendlySideClass = _logic getVariable [QGVAR(Module_FriendlySide), "BLU_F"];
private _chance = _logic getVariable [QGVAR(Module_SurrenderChance), 0.1];
private _ratio = _logic getVariable [QGVAR(Module_OutnumberRatio), 2];

//Convert side class to actual side
private _sideMap = [
    ["BLU_F", west],
    ["OPF_F", east],
    ["IND_F", independent]
];

private _enemySide = east;
{
    if (_x select 0 == _enemySideClass) exitWith {
        _enemySide = _x select 1;
    };
} forEach _sideMap;

private _friendlySide = west;
{
    if (_x select 0 == _friendlySideClass) exitWith {
        _friendlySide = _x select 1;
    };
} forEach _sideMap;

private _pfhID = [
    {
        params ["_args", "_pfhId"];
        _args params ["_enemySide", "_friendlySide", "_chance", "_ratio", "_logic"];

        private _enemies = units _enemySide;
        private _friendlies = units _friendlySide;

        private _enemiesInArea = [];
        private _friendliesInArea = [];

        private _area = _logic getVariable ["objectarea", [50, 50, 0, false]];

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

_pfhID
