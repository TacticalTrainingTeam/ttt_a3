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
        [_caller] call FUNC(cancel);
    },
    LLSTRING(hintDismantle),
] call ace_common_fnc_progressBar;
