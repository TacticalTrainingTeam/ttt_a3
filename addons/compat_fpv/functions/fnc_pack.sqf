#include "..\script_component.hpp"

params ["_unit", "_drone"];

private _case = getText ((configOf _drone) >> QGVAR(case));
if (_case isEqualTo "") exitWith {};

[_unit, "MedicOther"] call ace_common_fnc_doGesture;
[
    5,
    [_unit, _drone, _case],
    {
        (_this select 0) params ["_unit", "_drone", "_case"];
        if (local _drone) then {
            // private _fuel = fuel _drone;
            // private _damage = getAllHitPointsDamage _drone;
            deleteVehicle _drone;

            private _gwh = [getPos _drone, 0, 'GroundWeaponHolder', side _unit] call BIS_fnc_spawnVehicle;
            (_gwh select 0) addMagazineCargoGlobal [_case, 1];
        };
    },
    {},
    format ["Packing %1...", getText ((configOf _drone) >> "displayName")]
] call ace_common_fnc_progressBar;
