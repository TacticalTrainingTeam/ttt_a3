#include "..\script_component.hpp"

params ["_unit", "_case"];

private _droneCfg = GVAR(cases) get _case;
if (isNil "_droneCfg") exitWith {};

private _drone = configName _droneCfg;

[_unit, "MedicOther"] call ace_common_fnc_doGesture;
[
    5,
    [_unit, _drone, _case],
    {
        (_this select 0) params ["_unit","_drone","_case"];
        if (local _unit) then {
            _unit removeItem _case;
            private _pos = _unit modelToWorld [0,1,0];
            private _drone = _drone createVehicle _pos;
            (side group _unit) createVehicleCrew _drone;
            _drone setPos _pos;
            _drone setFuel 0;
        };
        [_unit, 'PutDown'] call ace_common_fnc_doGesture;
    },
    {},
    format ["Assembling %1...", getText (_droneCfg >> "displayName")]
] call ace_common_fnc_progressBar;
