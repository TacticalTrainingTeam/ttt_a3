#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Adds the "Place Explosive Charge" ACE interaction to every object (base class "All").
* The action itself is gated by FUNC(canPlace) so it only shows up on objects
* that have GVAR(canDestroy) set and while the player carries the needed item.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ttt_explosive_reduction_fnc_addActions;
*
* Public: No
*/

["All", 0, ["ACE_MainActions", QGVAR(place)]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

private _action = [
    QGVAR(place),
    LLSTRING(action),
    "z\ace\addons\explosives\ui\explosives_menu_ca.paa",
    {[_this] call FUNC(place)},
    {[_this] call FUNC(canPlace)}
] call ace_interact_menu_fnc_createAction;

["All", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_AddActionToClass;
