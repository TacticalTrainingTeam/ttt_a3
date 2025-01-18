#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ttt_medic_backpack_fnc_addActions;
*
* Public: No
*/

[player, 1, ["ACE_SelfActions", "ACE_Equipment", "ttt_medical_backpack_construct"]] call ace_interact_menu_fnc_removeActionFromObject;
[GVAR(facitlityObject), 0, ["ACE_MainActions", "ttt_medical_backpack_deconstruct"]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

_constructPlane = 
[
    QGVAR(constuct),
    LLSTRING(actionConstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)}
] call ace_interact_menu_fnc_createAction;

_deconstructPlane =
[
    QGVAR(deconstruct),
    LLSTRING(actionDeconstruct),
    "\a3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _constructPlane] call ace_interact_menu_fnc_AddActionToObject;
[GVAR(facitlityObject), 0, ["ACE_MainActions"], _deconstructPlane] call ace_interact_menu_fnc_AddActionToClass;
