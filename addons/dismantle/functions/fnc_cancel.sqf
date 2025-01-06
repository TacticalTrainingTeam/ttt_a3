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

params ["_target", "_caller", "_args"];

hint LLSTRING(abort);
_caller switchMove "";