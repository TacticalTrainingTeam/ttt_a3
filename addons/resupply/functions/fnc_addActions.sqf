#include "..\script_component.hpp"

/*
 * Author: Andx
 * Adds the "Resupply" ACE interaction submenu (one child action per crate
 * type) to any object tagged with the configured resupply variable.
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

["All", 0, ["ACE_MainActions", "ttt_resupply_menu"]] call ace_interact_menu_fnc_removeActionFromClass;

if (!GVAR(enable)) exitWith {};

private _icon = "\a3\ui_f\data\igui\cfg\actions\ammobox_ca.paa";

// Parent submenu, only shown on objects tagged via GVAR(actionVariable)
private _resupplyMenu = [
    "ttt_resupply_menu",
    LLSTRING(action_resupply_menu),
    _icon,
    {},
    {
        (_this select 0) params ["_target"];
        _target getVariable [GVAR(actionVariable), false]
    }
] call ace_interact_menu_fnc_createAction;

["All", 0, ["ACE_MainActions"], _resupplyMenu] call ace_interact_menu_fnc_AddActionToClass;

private _types = [
    ["ammo",            LLSTRING(type_ammo)],
    ["grenades",        LLSTRING(type_grenades)],
    ["at",              LLSTRING(type_at)],
    ["explosives",      LLSTRING(type_explosives)],
    ["support",         LLSTRING(type_support)],
    ["medical_alpha",   LLSTRING(type_medical_alpha)],
    ["medical_bravo",   LLSTRING(type_medical_bravo)],
    ["medical_charlie", LLSTRING(type_medical_charlie)]
];

{
    _x params ["_type", "_displayName"];
    private _thisType = _type;

    private _action = [
        format [QGVAR(type_%1), _type],
        _displayName,
        _icon,
        {
            (_this select 0) params ["_target"];
            [_target, _thisType] remoteExec ["ttt_resupply_fnc_spawnCrate", 2];
        },
        {true}
    ] call ace_interact_menu_fnc_createAction;

    ["All", 0, ["ACE_MainActions", "ttt_resupply_menu"], _action] call ace_interact_menu_fnc_AddActionToClass;
} forEach _types;
