#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target"];

private _return = false;
if (
    _target getVariable ["hasWorkshop", true]
) then {
    _return = true;
};

_return;
