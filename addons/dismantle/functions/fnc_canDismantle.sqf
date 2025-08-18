#include "..\script_component.hpp"

(_this select 0) params ["","_caller"];

if (([_caller, GVAR(neededSkill)] call ace_repair_fnc_isEngineer) AND 
([_caller, GVAR(neededItem)] call BIS_fnc_hasItem)) exitWith { true; };

false;
