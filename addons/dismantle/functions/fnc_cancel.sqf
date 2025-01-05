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

INFO_1("Dismantle cancelled by %1", _caller);
INFO_1("Dismantle target %1", _target);
hint LLSTRING(abort);
_caller switchMove "";