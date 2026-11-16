#include "..\script_component.hpp"
/*
 * Author: Colin, Andx
 * Adds the drone crafting ACE self-interaction, built from the compiled recipes:
 *
 *   FPV-Drohnenbau                      (only within GVAR(maxDistance) of a supply vehicle)
 *   ├─ <category>                       (one per GVAR(categories) entry)
 *   │   └─ <recipe> (X baubar)          (X from the nearest supply vehicle's cargo)
 *
 * Registered once at postInit - the condition looks the supply vehicle up every time, so
 * vehicles designated later (ZEN, JIP) need no re-registration.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_drone_crafting_fnc_addActions;
 *
 * Public: No
 */

private _mainAction = [
    QGVAR(main),
    LLSTRING(action_main),
    ICON_CRAFT,
    {},
    {
        params ["", "_player"];
        !isNull ([_player] call FUNC(getNearestVehicle))
    }
] call ace_interact_menu_fnc_createAction;

["CAManBase", 1, ["ACE_SelfActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;

private _recipeStatement = {
    params ["", "_player", "_recipeId"];
    [_player, _recipeId] call FUNC(startCraft);
};

// Kept visible at 0 so players can see the recipe exists - the statement then names what's missing
private _recipeModifier = {
    params ["", "_player", "_recipeId", "_actionData"];

    private _vehicle = [_player] call FUNC(getNearestVehicle);
    private _craftable = ([_vehicle, _recipeId] call FUNC(checkIngredients)) select 0;

    _actionData set [1, format [LLSTRING(action_recipe), (GVAR(recipes) get _recipeId) get "displayName", _craftable]];
};

{
    _x params ["_category", "_categoryName", "_recipeIds"];

    private _categoryActionName = format [QGVAR(%1), _category];

    private _categoryAction = [
        _categoryActionName,
        _categoryName,
        "",
        {},
        {true}
    ] call ace_interact_menu_fnc_createAction;

    ["CAManBase", 1, ["ACE_SelfActions", QGVAR(main)], _categoryAction, true] call ace_interact_menu_fnc_addActionToClass;

    {
        private _recipeAction = [
            format [QGVAR(recipe_%1), _x],
            (GVAR(recipes) get _x) get "displayName",
            "",
            _recipeStatement,
            {true},
            {},
            _x,
            [0, 0, 0],
            2,
            [false, false, false, false, false],
            _recipeModifier
        ] call ace_interact_menu_fnc_createAction;

        ["CAManBase", 1, ["ACE_SelfActions", QGVAR(main), _categoryActionName], _recipeAction, true] call ace_interact_menu_fnc_addActionToClass;
    } forEach _recipeIds;
} forEach GVAR(categories);
