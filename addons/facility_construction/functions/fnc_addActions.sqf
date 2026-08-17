#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Registers/unregisters the construct and deconstruct ACE self-interactions for one
* facility_construction consumer (e.g. medic_vehicle, repair_vehicle). Called by the
* consuming addon's own FUNC(addActions) every time it (re)builds its context, so
* settings changes are picked up the same way as before.
*
* Arguments:
* 0: Context <HASHMAP> - see readme.md for the expected keys
*
* Return Value:
* None
*
* Example:
* [_context] call ttt_facility_construction_fnc_addActions;
*
* Public: Yes
*/

params ["_context"];

private _supportedVehicles = _context get "supportedVehicles";
private _facilityObject = _context get "facilityObject";
private _actionIdConstruct = _context get "actionIdConstruct";
private _actionIdDeconstruct = _context get "actionIdDeconstruct";

{
    [_x, 0, ["ACE_MainActions", _actionIdConstruct]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach _supportedVehicles;

[_facilityObject, 0, ["ACE_MainActions", _actionIdDeconstruct]] call ace_interact_menu_fnc_removeActionFromClass;

if !(_context get "enable") exitWith {};

private _strings = _context get "strings";

private _constructAction =
[
    _actionIdConstruct,
    _strings get "actionConstruct",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)},
    {},
    _context
] call ace_interact_menu_fnc_createAction;

private _deconstructAction =
[
    _actionIdDeconstruct,
    _strings get "actionDeconstruct",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\truck_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)},
    {},
    _context
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _constructAction] call ace_interact_menu_fnc_AddActionToClass;
} forEach _supportedVehicles;

[_facilityObject, 0, ["ACE_MainActions"], _deconstructAction] call ace_interact_menu_fnc_AddActionToClass;
