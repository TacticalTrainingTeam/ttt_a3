#include "..\script_component.hpp"

/*
 * Author: Andx
 * Registers a "Resupply" submenu (one entry per crate type) in the ZEN
 * context menu, letting a Zeus curator request a crate directly at the
 * position they right-clicked - no need to place one of the Support
 * Zeus modules first. Only called from resupply_zen's XEH_postInit, which
 * itself only runs when Zeus Enhanced's context menu addon is loaded, so
 * zen_context_menu_fnc_* is guaranteed to exist here.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_resupply_fnc_zenRegisterContextMenu;
 *
 * Public: No
 */

private _icon = "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa";

// Prefixed with "TTT - " (unlike the ACE interaction menu's plain "Resupply" label above) since
// this is a top-level entry in ZEN's shared context menu, where every mod's root categories are
// listed together - the prefix is what makes this addon's entries recognizable among the rest.
private _parentPath = [
    ["ttt_resupply", LLSTRING(zenCategory_displayName), _icon] call zen_context_menu_fnc_createAction
] call zen_context_menu_fnc_addAction;

// Marks the hovered object as a resupply depot (QGVAR(container)) - the same effect as putting
// this setVariable [QGVAR(container), true]; in the object's Init field (see fnc_addActions.sqf),
// just usable live during a running mission instead of only at mission-build time. Broadcasting
// the setVariable directly (rather than via CBA_fnc_serverEvent) is safe here since it's a plain
// flag, not object creation, and is JIP-safe the same way every other QGVAR(...) flag in this
// addon already relies on.
private _markDepot = [
    QGVAR(zenMarkDepot),
    LLSTRING(action_markDepot),
    _icon,
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        _hoveredEntity setVariable [QGVAR(container), true, true];
        [LLSTRING(hintDepotMarked)] call ace_zeus_fnc_showMessage;
    },
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        _hoveredEntity isEqualType objNull
        && {!isNull _hoveredEntity}
        && {!(_hoveredEntity isKindOf "Man")}
        && {!(_hoveredEntity getVariable [QGVAR(container), false])}
    }
] call zen_context_menu_fnc_createAction;

[_markDepot, _parentPath] call zen_context_menu_fnc_addAction;

// Reverse of _markDepot above - only shown once the object actually is a depot, so the two
// actions never appear together for the same object.
private _unmarkDepot = [
    QGVAR(zenUnmarkDepot),
    LLSTRING(action_unmarkDepot),
    _icon,
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        _hoveredEntity setVariable [QGVAR(container), false, true];
        [LLSTRING(hintDepotUnmarked)] call ace_zeus_fnc_showMessage;
    },
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        _hoveredEntity isEqualType objNull
        && {!isNull _hoveredEntity}
        && {_hoveredEntity getVariable [QGVAR(container), false]}
    }
] call zen_context_menu_fnc_createAction;

[_unmarkDepot, _parentPath] call zen_context_menu_fnc_addAction;

// Shared by every type below. Statement/condition code receives ZEN's
// ACTION_PARAMS as _this: [_position, _objects, _groups, _waypoints,
// _markers, _hoveredEntity, _args] - _args is this action's crate type,
// set per-type via the "args" argument to createAction below. _position is
// wherever the curator right-clicked; the server-side spawn treats it like
// a Zeus module's own position (see fnc_zeusSpawnCrate).
private _statement = {
    params ["_position", "", "", "", "", "", "_type"];
    [QGVAR(zenSpawnCrateRequest), [_position, _type, clientOwner]] call CBA_fnc_serverEvent;
};
// Only offered on empty ground, not when hovering an object - right-clicking an object is for
// _markDepot/_unmarkDepot above instead, so the two don't clutter the same menu.
private _condition = {
    params ["", "", "", "", "", "_hoveredEntity", "_type"];
    isNull _hoveredEntity && {[_type] call FUNC(isCrateAvailable)}
};

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
        format [QGVAR(zenType_%1), _type],
        _displayName,
        _typeIcon,
        _statement,
        _condition,
        _type
    ] call zen_context_menu_fnc_createAction;

    [_action, _parentPath] call zen_context_menu_fnc_addAction;
} forEach _types;
