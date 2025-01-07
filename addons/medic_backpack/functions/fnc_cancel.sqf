#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Facility or Player <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller"];

hint LLSTRING(abort);
_caller switchMove "";
if (typeOf _target == GVAR(facitlityObject)) then {
	_target setVariable ["ttt_medic_backpack_inUse", false, true];
};
