#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* BOOLEAN
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

_return = false;
if (
    !(_target getVariable ["ttt_medic_backpack_inUse", false]) && 
    !((unitBackpack _caller) getVariable ["ttt_medic_backpack_hasTent", true]) && 
    ((parseSimpleArray GVAR(supportedBackpacks)) find (backpack _caller) != -1)
) then {
    _return = true;
};

_return;
