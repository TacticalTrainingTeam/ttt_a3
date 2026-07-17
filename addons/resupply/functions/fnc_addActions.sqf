#include "..\script_component.hpp"

/*
 * Author: Andx
 * Attaches an ACE submenu to objects tagged with the configured resupply
 * variable. The submenu contains one action per crate type.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_resupply_fnc_addActions;
 *
 * Public: No
 */

if (!hasInterface) exitWith {};

// Helper: create one child action for a given crate type
private _fnc_makeChildAction = {
    params ["_typeId", "_label", "_icon"];
    [
        "ttt_resupply_spawn_" + _typeId,
        _label,
        _icon,
        {
            params ["_target", "_player", "_params"];
            [_target, _params select 0] remoteExec [QFUNC(spawnCrate), 2];
        },
        { GVAR(enable) },
        {},
        [_typeId]
    ] call ace_interact_menu_fnc_createAction
};

private _medIcon  = "\a3\ui_f\data\igui\cfg\actions\heal_ca.paa";
private _ammoIcon = "\a3\ui_f\data\igui\cfg\actions\giveammo_ca.paa";
private _miscIcon = "\a3\ui_f\data\igui\cfg\actions\supplydrop_ca.paa";

GVAR(childActions) = [
    ["ammo",            LLSTRING(type_ammo),            _ammoIcon] call _fnc_makeChildAction,
    ["grenades",        LLSTRING(type_grenades),        _ammoIcon] call _fnc_makeChildAction,
    ["at",              LLSTRING(type_at),              _ammoIcon] call _fnc_makeChildAction,
    ["explosives",      LLSTRING(type_explosives),      _ammoIcon] call _fnc_makeChildAction,
    ["support",         LLSTRING(type_support),         _miscIcon] call _fnc_makeChildAction,
    ["medical_alpha",   LLSTRING(type_medical_alpha),   _medIcon]  call _fnc_makeChildAction,
    ["medical_bravo",   LLSTRING(type_medical_bravo),   _medIcon]  call _fnc_makeChildAction,
    ["medical_charlie", LLSTRING(type_medical_charlie), _medIcon]  call _fnc_makeChildAction
];

GVAR(parentAction) = [
    "ttt_resupply_menu",
    LLSTRING(action_resupply_menu),
    "\a3\ui_f\data\igui\cfg\actions\supplydrop_ca.paa",
    {},
    {
        params ["_target", "_player", "_params"];
        GVAR(enable) && { _target getVariable [GVAR(actionVariable), false] }
    }
] call ace_interact_menu_fnc_createAction;

["AllVehicles", "Init", {
    params ["_object"];
    if (_object getVariable [GVAR(actionVariable), false]) then {
        [_object, 0, ["ACE_MainActions"], GVAR(parentAction)] call ace_interact_menu_fnc_addActionToObject;
        {
            [_object, 0, ["ACE_MainActions", "ttt_resupply_menu"], _x] call ace_interact_menu_fnc_addActionToObject;
        } forEach GVAR(childActions);
    };
}] call CBA_fnc_addClassEventHandler;
