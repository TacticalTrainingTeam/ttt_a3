#include "script_component.hpp"

(_this select 0) params ["_caller", "_target"];

_return = false;

if (
    ([_caller, "Toolkit"] call BIS_fnc_hasItem) && 
    ([_caller, 1] call ace_repair_fnc_isEngineer)
) 
then {
    _return = true;
};

_return;