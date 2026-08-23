#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* Can dismantle <BOOL>
*
* Public: No
*/

(_this select 0) params ["","_caller"];

if (([_caller, GVAR(neededSkill)] call ace_repair_fnc_isEngineer) AND 
([_caller, GVAR(neededItem)] call BIS_fnc_hasItem)) exitWith { true; };

false;
