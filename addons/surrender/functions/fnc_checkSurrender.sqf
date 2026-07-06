/*
    AND_fnc_surrenderCheck
    Called by module on mission start.
*/

params ["_logic"];

private _enemySideClass = _logic getVariable [QGVAR(EnemySides), "OPF_F"];
private _chance = _logic getVariable [QGVAR(SurrenderChance), 0.5];
private _ratio = _logic getVariable [QGVAR(OutnumberRatio), 2.0];

// Convert side class to actual side
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

// Register CBA PFH
[
    {
        params ["_args", "_pfhId"];
        _args params ["_enemySide", "_chance", "_ratio"];

        private _units = allUnits select {
            side _x == _enemySide &&
            alive _x &&
            !(_x getVariable ["AND_Surrendered", false])
        };

        {
            private _unit = _x;
            private _pos = getPosATL _unit;

            private _friendlies = allUnits select {
                side _x != _enemySide &&
                alive _x &&
                _x distance _pos < 50
            };

            private _enemies = allUnits select {
                side _x == _enemySide &&
                alive _x &&
                _x distance _pos < 50
            };

            private _friendlyCount = count _friendlies;
            private _enemyCount = count _enemies;

            if (_friendlyCount > 0 && (_friendlyCount * _ratio <= _enemyCount)) then {

                if (random 1 < _chance) then {

                    // Mark as surrendered
                    _unit setVariable ["AND_Surrendered", true, true];

                    // ACE surrender
                    [_unit, true] call ace_captives_fnc_setSurrendered;

                };
            };

        } forEach _units;

    },
    5,                                 // PFH interval (seconds)
    [_enemySide, _chance, _ratio]      // arguments passed into PFH
] call CBA_fnc_addPerFrameHandler;
