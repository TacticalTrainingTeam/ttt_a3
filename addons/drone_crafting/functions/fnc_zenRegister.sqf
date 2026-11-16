#include "..\script_component.hpp"
/*
 * Author: Andx
 * Adds a "TTT - FPV-Drohnenbau" submenu to the ZEN context menu for designating the hovered
 * object as a supply vehicle mid-mission, topping it up or removing the designation. Only
 * called from drone_crafting_zen's XEH_postInit, which only loads with Zeus Enhanced, so
 * zen_context_menu_fnc_* is guaranteed to exist here.
 * https://zen-mod.github.io/ZEN/#/frameworks/context_menu
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_drone_crafting_fnc_zenRegister;
 *
 * Public: No
 */

// Statement/condition params are ZEN's ACTION_PARAMS:
// [_position, _objects, _groups, _waypoints, _markers, _hoveredEntity, _args]
// The children below only need the designation check - ZEN only evaluates them while this
// parent's condition (an object with cargo space, not a unit) holds.
private _categoryPath = [
    [
        QGVAR(zenCategory),
        LLSTRING(zen_category),
        ICON_CRAFT,
        {},
        {
            params ["", "", "", "", "", "_hoveredEntity"];
            _hoveredEntity isEqualType objNull
            && {!isNull _hoveredEntity}
            && {!(_hoveredEntity isKindOf "CAManBase")}
            && {maxLoad _hoveredEntity > 0}
        }
    ] call zen_context_menu_fnc_createAction
] call zen_context_menu_fnc_addAction;

private _fnc_isSupplyVehicle = {
    params ["", "", "", "", "", "_hoveredEntity"];
    _hoveredEntity in GVAR(vehicles)
};

private _fnc_isNoSupplyVehicle = {
    params ["", "", "", "", "", "_hoveredEntity"];
    !(_hoveredEntity in GVAR(vehicles))
};

private _actions = [
    [
        QGVAR(zenSetWithStock),
        LLSTRING(zen_setWithStock),
        ICON_VEHICLE,
        {
            params ["", "", "", "", "", "_hoveredEntity"];
            [_hoveredEntity, true] call FUNC(setVehicle);
            [LLSTRING(zen_hintSet)] call ace_zeus_fnc_showMessage;
        },
        _fnc_isNoSupplyVehicle
    ],
    [
        QGVAR(zenSetKeepInventory),
        LLSTRING(zen_setKeepInventory),
        ICON_VEHICLE,
        {
            params ["", "", "", "", "", "_hoveredEntity"];
            [_hoveredEntity, false] call FUNC(setVehicle);
            [LLSTRING(zen_hintSet)] call ace_zeus_fnc_showMessage;
        },
        _fnc_isNoSupplyVehicle
    ],
    [
        QGVAR(zenRestock),
        LLSTRING(zen_restock),
        ICON_VEHICLE,
        {
            params ["", "", "", "", "", "_hoveredEntity"];
            [_hoveredEntity] call FUNC(restock);
            [LLSTRING(zen_hintRestocked)] call ace_zeus_fnc_showMessage;
        },
        _fnc_isSupplyVehicle
    ],
    [
        QGVAR(zenRemove),
        LLSTRING(zen_remove),
        ICON_VEHICLE,
        {
            params ["", "", "", "", "", "_hoveredEntity"];
            [_hoveredEntity] call FUNC(removeVehicle);
            [LLSTRING(zen_hintRemoved)] call ace_zeus_fnc_showMessage;
        },
        _fnc_isSupplyVehicle
    ]
];

{
    [_x call zen_context_menu_fnc_createAction, _categoryPath] call zen_context_menu_fnc_addAction;
} forEach _actions;
