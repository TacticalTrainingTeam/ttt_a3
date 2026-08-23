#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Player <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_caller"];

[LLSTRING(abort), true] call ace_common_fnc_displayText;
_caller switchMove "";
