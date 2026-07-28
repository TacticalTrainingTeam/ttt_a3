#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Generic add-actions handler for the TTT "deployable tarp" framework.
 * Registers a parent ACE self-interaction "construct" action on the player (shown
 * when any matching tarp is carried) with one child action per tarp colour
 * (shown only when that specific item is carried, labelled with its displayName).
 * Also registers the "deconstruct" action on every possible deployed tarp class.
 * Driven entirely by the supplied config HashMap. Used by ttt_drone_tarp,
 * ttt_signal_tarp and ttt_medic_tarp. Always registered - availability is gated
 * purely by whether the caller carries one of the configured tarp items.
 *
 * Arguments:
 * 0: Config <HASHMAP> - see EFUNC(tarps,deployableConstruct) header for the
 *    full list of supported keys.
 *
 * Return Value:
 * None
 *
 * Example:
 * [_config] call ttt_tarps_fnc_deployableAddActions;
 *
 * Public: Yes
 */

params ["_config"];

private _constructId = _config get "constructId";
private _deconstructId = _config get "deconstructId";
private _tarpItems = _config get "tarpItems";
private _deconstructClasses = _tarpItems apply {_x select 1};

[player, 1, ["ACE_SelfActions", "ACE_Equipment", _constructId]] call ace_interact_menu_fnc_removeActionFromObject;
{
    [_x, 0, ["ACE_MainActions", _deconstructId]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach _deconstructClasses;

// Parent container — visible when the player carries any matching tarp, opens a colour sub-menu
private _parentConstructAction = [
    _constructId,
    _config get "constructText",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {},
    {[_this] call FUNC(deployableCanConstruct)},
    {},
    _config
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _parentConstructAction] call ace_interact_menu_fnc_AddActionToObject;

// One child action per tarp colour — shown only when that specific item is in inventory
{
    _x params ["_itemClassname", "_objectClassname"];
    private _displayName = getText (configFile >> "CfgWeapons" >> _itemClassname >> "displayName");

     private _itemConfig = createHashMap;
     _itemConfig merge _config;

    _itemConfig set ["tarpItems", [[_itemClassname, _objectClassname]]];

    private _childAction = [
        _constructId + "_" + _itemClassname,
        _displayName,
        "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
        {[_this] call FUNC(deployableProgressConstruct)},
        {[_this] call FUNC(deployableCanConstruct)},
        {},
        _itemConfig
    ] call ace_interact_menu_fnc_createAction;

    [player, 1, ["ACE_SelfActions", "ACE_Equipment", _constructId], _childAction] call ace_interact_menu_fnc_AddActionToObject;
} forEach _tarpItems;

private _deconstructAction = [
    _deconstructId,
    _config get "deconstructText",
    "\a3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa",
    {[_this] call FUNC(deployableProgressDeconstruct)},
    {[_this] call FUNC(deployableCanDeconstruct)},
    {},
    _config
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _deconstructAction] call ace_interact_menu_fnc_AddActionToClass;
} forEach _deconstructClasses;
