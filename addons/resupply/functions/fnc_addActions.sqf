#include "..\script_component.hpp"

/*
 * Author: Andx
 * Adds the "Resupply" ACE interaction submenu (one child action per crate
 * type) to any object tagged with the QGVAR(container) variable.
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

// _useInheritance = true is required so this actually applies to every
// object (isKindOf "All" via GVAR(inheritedClassesAll)) instead of only
// objects whose exact typeOf is the literal (never-instantiated) "All" root.
["All", 0, ["ACE_MainActions", "ttt_resupply_menu"], true] call ace_interact_menu_fnc_removeActionFromClass;

private _icon = "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa";

// Parent submenu, only shown on objects tagged via QGVAR(container). ACE
// calls statement/condition code with _this = [_target, _player, _params]
// directly - no extra "select 0" unwrap needed here, since this code isn't
// delegating through a "{[_this] call someFunc}" wrapper.
private _resupplyMenu = [
    "ttt_resupply_menu",
    LLSTRING(action_resupply_menu),
    _icon,
    {},
    {
        params ["_target"];
        _target getVariable [QGVAR(container), false]
    }
] call ace_interact_menu_fnc_createAction;

["All", 0, ["ACE_MainActions"], _resupplyMenu, true] call ace_interact_menu_fnc_AddActionToClass;

private _types = [
    ["ammo",            LLSTRING(type_ammo),            "a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa"],
    ["grenades",        LLSTRING(type_grenades),        "a3\ui_f\data\map\vehicleicons\iconcrategrenades_ca.paa"],
    ["at",              LLSTRING(type_at),              "a3\ui_f\data\map\vehicleicons\iconcratelarge_ca.paa"],
    ["explosives",      LLSTRING(type_explosives),      "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa"],
    ["support",         LLSTRING(type_support),         "a3\ui_f\data\map\vehicleicons\iconcratesupp_ca.paa"],
    ["medical_alpha",   LLSTRING(type_medical_alpha),   "a3\characters_f\data\ui\icon_medic_ca.paa"],
    ["medical_bravo",   LLSTRING(type_medical_bravo),   "a3\characters_f\data\ui\icon_medic_ca.paa"],
    ["medical_charlie", LLSTRING(type_medical_charlie), "a3\characters_f\data\ui\icon_medic_ca.paa"]
];

{
    _x params ["_type", "_displayName", "_typeIcon"];

    private _action = [
        format [QGVAR(type_%1), _type],
        _displayName,
        _typeIcon,
        compile format [
            'params ["_target", "_caller"]; [QGVAR(spawnCrateRequest), [_caller, "%1", clientOwner, _target]] call CBA_fnc_serverEvent;',
            _type
        ],
        compile format ['params ["_target"]; ["%1", _target] call FUNC(isCrateAvailable)', _type]
    ] call ace_interact_menu_fnc_createAction;

    ["All", 0, ["ACE_MainActions", "ttt_resupply_menu"], _action, true] call ace_interact_menu_fnc_AddActionToClass;
} forEach _types;
