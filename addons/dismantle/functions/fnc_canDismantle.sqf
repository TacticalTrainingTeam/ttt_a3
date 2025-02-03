#include "..\script_component.hpp"

(_this select 0) params ["_target","_caller","_args"];

if (!([_caller, GVAR(neededSkill)] call ace_repair_fnc_isEngineer) AND 
([_caller, GVAR(neededItem)] call BIS_fnc_hasItem)) exitWith { false; };

true;