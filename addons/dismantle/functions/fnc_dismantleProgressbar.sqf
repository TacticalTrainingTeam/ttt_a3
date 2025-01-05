#include "script_component.hpp"

(_this select 0) params ["_target", "_caller", "_args"];

_caller playMove "Acts_carFixingWheel";

[
    20,
    [_target,_caller], 
    {
        (_this select 0) params ["_target"]; 
        deleteVehicle _target;
    },
    {
        (_this select 0) params ["_target","_caller"];
        [_target, _caller] call FUNC(cancel);
    },
    LLSTRING(dismantle)
] call ace_common_fnc_progressBar;
