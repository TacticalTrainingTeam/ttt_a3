#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
* 
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ttt_signalpanel_fnc_addActions;
*
* Public: No
*/

[player, 1, ["ACE_SelfActions", "ACE_Equipment", "signalpanel_constuct"]] call ace_interact_menu_fnc_removeActionFromObject;
["Tarp_01_Large_Red_F", 0, ["ACE_MainActions", "signalpanel_deconstuct"]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

_constructPlane = 
[
    "signalpanel_constuct",
    LLSTRING(actionConstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)}
] call ace_interact_menu_fnc_createAction;

_deconstructPlane =
[
    "signalpanel_deconstuct",
    LLSTRING(actionDeconstruct),
    "\a3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _constructPlane] call ace_interact_menu_fnc_AddActionToObject;
["Tarp_01_Large_Red_F", 0, ["ACE_MainActions"], _deconstructPlane] call ace_interact_menu_fnc_AddActionToClass;