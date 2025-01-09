#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
* 
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

_return = false;
if (
	!(_target getVariable ["ttt_signalpanel_inUse", false]) && 
	!((unitBackpack _caller) getVariable ["ttt_signalpanel_hasTarp", true]) && 
	((parseSimpleArray GVAR(supportedBackpacks)) find (backpack _caller) != -1)
) then {
	_return = true;
};

_return;