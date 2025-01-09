#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Player <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* BOOLEAN
*
* Public: No
*/

(_this select 0) params ["_target"];

private _return = false;
if (
    ((parseSimpleArray GVAR(supportedBackpacks)) find (backpack _target) != -1) &&
    ((unitBackpack _target) getVariable ["ttt_medic_backpack_hasTent", true])
) then {
    _return = true;
};

_return;
