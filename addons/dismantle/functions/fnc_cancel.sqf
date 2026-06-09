#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
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

params ["_caller"];

[LLSTRING(abort), true] call ace_common_fnc_displayText;
_caller switchMove "";
