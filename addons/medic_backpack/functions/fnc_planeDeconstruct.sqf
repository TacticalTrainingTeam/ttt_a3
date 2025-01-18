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
* None
*
* Public: No
*/

params ["_target", "_caller"];

private _arrayItems = nearestObjects [(getPos _target), (parseSimpleArray GVAR(additionalItems)), 10];
deleteVehicle _arrayItems;
deleteVehicle _target;

hint LLSTRING(hintLoaded);

_caller switchMove "";
(unitBackpack _caller) setVariable ["ttt_medic_backpack_hasTent", true, true];
