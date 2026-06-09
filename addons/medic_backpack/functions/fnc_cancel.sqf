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

[LLSTRING(abort), true] call ace_common_fnc_displayText;

_caller switchMove "";
if (typeOf _target == GVAR(facilityObject)) then {
    _target setVariable ["ttt_medic_backpack_inUse", false, true];
};
