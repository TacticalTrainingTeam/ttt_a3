#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
* 
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

private _return = false;
if (
    !(_target getVariable ["ttt_dronepanel_inUse", false]) && 
    !((unitBackpack _caller) getVariable ["ttt_dronepanel_hasTarp", true]) && 
    ((parseSimpleArray GVAR(supportedBackpacks)) find (backpack _caller) != -1)
) then {
    _return = true;
};

  _return
