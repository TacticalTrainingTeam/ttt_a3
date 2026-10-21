#include "..\script_component.hpp"
/*
* Author: Andx
* ACE interact menu condition for the dismantle action: caller must be an
* engineer of at least the configured skill and carry the needed item.
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Caller <OBJECT>
*
* Return Value:
* Can dismantle <BOOLEAN>
*
* Public: No
*/

(_this select 0) params ["","_caller"];

if (([_caller, GVAR(neededSkill)] call ace_repair_fnc_isEngineer) AND 
([_caller, GVAR(neededItem)] call BIS_fnc_hasItem)) exitWith { true; };

false;
