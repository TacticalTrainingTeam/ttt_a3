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
* [] call ttt_dronepanel_fnc_addActions;
*
* Public: No
*/

private _planeColor = switch (GVAR(tarpColor)) do {
    case 0: {"Tarp_01_Small_Black_F"};
    case 1: {"Tarp_01_Small_Green_F"};
    case 2: {"Tarp_01_Small_Red_F"};
    case 3: {"Tarp_01_Small_Yellow_F"};
    default {"Tarp_01_Small_Red_F"};
};

[player, 1, ["ACE_SelfActions", "ACE_Equipment", "ttt_dronepanel_constuct"]] call ace_interact_menu_fnc_removeActionFromObject;
[_planeColor, 0, ["ACE_MainActions", "ttt_dronepanel_deconstuct"]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

_constructPlane =
[
    "ttt_dronepanel_constuct",
    LLSTRING(actionConstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)}
] call ace_interact_menu_fnc_createAction;

_deconstructPlane =
[
    "ttt_dronepanel_deconstuct",
    LLSTRING(actionDeconstruct),
    "\a3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _constructPlane] call ace_interact_menu_fnc_AddActionToObject;
[_planeColor, 0, ["ACE_MainActions"], _deconstructPlane] call ace_interact_menu_fnc_AddActionToClass;
