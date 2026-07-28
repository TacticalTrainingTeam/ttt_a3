#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Generic add-actions handler for the TTT "deployable tarp" framework.
 * Registers the ACE self-interaction "construct" action on the player and the
 * "deconstruct" action on every possible deployed tarp class, driven entirely
 * by the supplied config HashMap. Used by ttt_dronepanel, ttt_signalpanel and
 * ttt_medic_backpack. Always registered - availability is gated purely by
 * whether the caller carries one of the configured tarp items.
 *
 * Arguments:
 * 0: Config <HASHMAP> - see EFUNC(common,deployableConstruct) header for the
 *    full list of supported keys.
 *
 * Return Value:
 * None
 *
 * Example:
 * [_config] call ttt_common_fnc_deployableAddActions;
 *
 * Public: Yes
 */

params ["_config"];

private _constructId = _config get "constructId";
private _deconstructId = _config get "deconstructId";
private _deconstructClasses = (_config get "tarpItems") apply {_x select 1};

[player, 1, ["ACE_SelfActions", "ACE_Equipment", _constructId]] call ace_interact_menu_fnc_removeActionFromObject;
{
    [_x, 0, ["ACE_MainActions", _deconstructId]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach _deconstructClasses;

private _constructAction = [
    _constructId,
    _config get "constructText",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(deployableProgressConstruct)},
    {[_this] call FUNC(deployableCanConstruct)},
    {},
    _config
] call ace_interact_menu_fnc_createAction;

private _deconstructAction = [
    _deconstructId,
    _config get "deconstructText",
    "\a3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa",
    {[_this] call FUNC(deployableProgressDeconstruct)},
    {[_this] call FUNC(deployableCanDeconstruct)},
    {},
    _config
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _constructAction] call ace_interact_menu_fnc_AddActionToObject;
{
    [_x, 0, ["ACE_MainActions"], _deconstructAction] call ace_interact_menu_fnc_AddActionToClass;
} forEach _deconstructClasses;
