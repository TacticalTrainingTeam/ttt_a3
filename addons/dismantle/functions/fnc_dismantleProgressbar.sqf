#include "script_component.hpp"

(_this select 0) params ["_target", "_caller"];

_caller playMove "Acts_carFixingWheel";

[
    19,
    _this, 
    {
        (_this select 0) params ["_target"]; 
        deleteVehicle _target;
    },
    {
        (_this select 0) params ["_target","_caller"];
        LLSTRING(abort);
        _caller switchMove "";
    },
    LLSTRING(dismantle)
] call ace_common_fnc_progressBar;
