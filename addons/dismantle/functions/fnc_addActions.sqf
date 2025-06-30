#include "..\script_component.hpp"
/*
* Author: Andx
* 
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ttt_dismantle_fnc_addActions;
*
* Public: No
*/

{
    [_x, 0, ["ACE_MainActions", "dismantleAction"]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach (parseSimpleArray GVAR(supportedObjects));

if (!GVAR(enable)) exitWith {};

_dismantle =
[
    "dismantleAction",
    LLSTRING(action),
    "a3\ui_f\data\igui\cfg\actions\repair_ca.paa",
    {[_this] call FUNC(dismantleProgressbar)},
    {[_this] call FUNC(canDismantle)}
] call ace_interact_menu_fnc_createAction;

//Action an alle Objekte anfügen
{
    [_x, 0, ["ACE_MainActions"], _dismantle] call ace_interact_menu_fnc_AddActionToClass;
} forEach (parseSimpleArray GVAR(supportedObjects));
