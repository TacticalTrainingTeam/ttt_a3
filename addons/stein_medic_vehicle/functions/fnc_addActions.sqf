#include "..\script_component.hpp"

{
    [_x, 0, ["ACE_MainActions", "stein_medic_vehicle_constuct"]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach (parseSimpleArray GVAR(supportedVehicles));

[GVAR(facitlityObject), 0, ["ACE_MainActions", "stein_medic_vehicle_deconstuct"]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

_constructTent = 
[
    "stein_medic_vehicle_constuct",
    LLSTRING(actionConstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)}
] call ace_interact_menu_fnc_createAction;

_deconstructTent =
[
    "stein_medic_vehicle_deconstuct",
    LLSTRING(actionDeconstruct),
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\truck_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)}
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _constructTent] call ace_interact_menu_fnc_AddActionToClass;
} forEach (parseSimpleArray GVAR(supportedVehicles));

[GVAR(facitlityObject), 0, ["ACE_MainActions"], _deconstructTent] call ace_interact_menu_fnc_AddActionToClass;
