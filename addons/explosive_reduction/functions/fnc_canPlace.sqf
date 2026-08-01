#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Checks whether the explosive charge action can be used on the target.
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Caller/Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* Can the charge be placed <BOOL>
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

(_target getVariable [QGVAR(canDestroy), false]) &&
{!(_target getVariable [QGVAR(armed), false])} &&
{GVAR(neededItem) in (magazines _caller)}
