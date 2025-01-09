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
* [] call ttt_repair_vehicle_fnc_addActions;
*
* Public: No
*/

{
    [_x, 0, ["ACE_MainActions", "ttt_repair_vehicle_constuct"]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach (parseSimpleArray GVAR(supportedVehicles));

[GVAR(facitlityObject), 0, ["ACE_MainActions", "ttt_repair_vehicle_deconstuct"]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

_constructWorkshop = 
[
    "ttt_repair_vehicle_constuct",
    LLSTRING(actionConstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)}
] call ace_interact_menu_fnc_createAction;

_deconstructWorkshop =
[
    "ttt_repair_vehicle_deconstuct",
    LLSTRING(actionDeconstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\truck_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)}
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _constructWorkshop] call ace_interact_menu_fnc_AddActionToClass;
} forEach (parseSimpleArray GVAR(supportedVehicles));

[GVAR(facitlityObject), 0, ["ACE_MainActions"], _deconstructWorkshop] call ace_interact_menu_fnc_AddActionToClass;
