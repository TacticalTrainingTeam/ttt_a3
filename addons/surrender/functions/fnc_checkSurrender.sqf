#include "..\script_component.hpp"
/*
    ttt_surrender_fnc_surrenderCheck
    Called by module on mission start AND when placed by Zeus.
*/

params ["_logic", "_activated"];

private _enemySideClass = _logic getVariable [QGVAR(EnemySides), "OPF_F"];
private _friendlySideClass = _logic getVariable [QGVAR(FriendlySides), "BLU_F"];
private _chance = _logic getVariable [QGVAR(SurrenderChance), 0.5];
private _ratio = _logic getVariable [QGVAR(OutnumberRatio), 2.0];

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

        private _area = _logic get3DENAttribute "Area";
        systemChat str _area;
        {
            if (_x inArea _area) then {
                _enemiesInArea = _enemiesInArea + [_x];
            };
        } forEach _enemies;

        {
            if (_x inArea _area) then {
                _friendliesInArea = _friendliesInArea + [_x];
            };
        } forEach _friendlies;

        private _friendlyCount = count _friendliesInArea;
        private _enemyCount = count _enemiesInArea;

        {
            private _unit = _x;

            if (_friendlyCount > 0 && (_friendlyCount * _ratio <= _enemyCount)) then {

                if (random 1 < _chance && !_unit getVariable [QGVAR(Surrendered), false]) then {

                    _unit setVariable [QGVAR(Surrendered), true, true];
                    [_unit, true] call ace_captives_fnc_setSurrendered;
                };
            };
        } forEach _enemies;

    },
    5,
    [_enemySide, _friendlySide, _chance, _ratio, _logic]
] call CBA_fnc_addPerFrameHandler;

_pfhID
