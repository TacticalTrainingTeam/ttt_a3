#include "..\script_component.hpp"
/*
 * Author: Andx
 * Reads GVAR(categories) and GVAR(recipes) from config once per machine (server and clients)
 * and caches them, so the ACE menu, the label counters and the server-side craft never touch
 * config again. Recipes with an unknown result or ingredient class (e.g. after an update of
 * the FPV mod renamed a class) are skipped with an RPT warning instead of breaking the menu.
 *
 * Sets:
 * GVAR(recipes):    HashMap recipe class -> HashMap with "category", "displayName", "result",
 *                   "resultType" and "ingredients" ([[class, cargo type, count], ...])
 * GVAR(categories): [[category class, display name, [recipe classes in config order]], ...],
 *                   only categories with at least one valid recipe
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_drone_crafting_fnc_compileRecipes;
 *
 * Public: No
 */

GVAR(recipes) = createHashMap;
GVAR(categories) = [];

private _categoryRecipes = createHashMap;

{
    private _recipeConfig = _x;
    private _recipeId = configName _recipeConfig;
    private _category = getText (_recipeConfig >> "category");
    private _rawResult = getText (_recipeConfig >> "result");

    ([_rawResult] call FUNC(getCargoType)) params ["_result", "_resultType"];

    private _ingredients = [];
    private _isValid = true;

    if !(isClass (configFile >> QGVAR(categories) >> _category)) then {
        WARNING_2("Recipe %1 skipped: unknown category %2",_recipeId,_category);
        _isValid = false;
    };

    if (_isValid && {!(_resultType in ["magazine", "item"])}) then {
        WARNING_2("Recipe %1 skipped: result %2 is no magazine or item",_recipeId,_rawResult);
        _isValid = false;
    };

    if (_isValid) then {
        {
            _x params [["_rawClass", "", [""]], ["_count", 0, [0]]];
            ([_rawClass] call FUNC(getCargoType)) params ["_class", "_type"];

            // Only magazines and items can be counted and removed exactly (fnc_craft.sqf)
            if (!(_type in ["magazine", "item"]) || {_count < 1}) then {
                WARNING_3("Recipe %1 skipped: invalid ingredient %2 x%3",_recipeId,_rawClass,_count);
                _isValid = false;
            } else {
                _ingredients pushBack [_class, _type, floor _count];
            };
        } forEach getArray (_recipeConfig >> "ingredients");
    };

    if (_isValid && {_ingredients isEqualTo []}) then {
        WARNING_1("Recipe %1 skipped: no ingredients",_recipeId);
        _isValid = false;
    };

    if (_isValid) then {
        GVAR(recipes) set [_recipeId, createHashMapFromArray [
            ["category", _category],
            ["displayName", getText (_recipeConfig >> "displayName")],
            ["result", _result],
            ["resultType", _resultType],
            ["ingredients", _ingredients]
        ]];

        (_categoryRecipes getOrDefaultCall [_category, {[]}, true]) pushBack _recipeId;
    };
} forEach ("true" configClasses (configFile >> QGVAR(recipes)));

{
    private _category = configName _x;
    private _recipeIds = _categoryRecipes getOrDefault [_category, []];

    if (_recipeIds isNotEqualTo []) then {
        GVAR(categories) pushBack [_category, getText (_x >> "displayName"), _recipeIds];
    };
} forEach ("true" configClasses (configFile >> QGVAR(categories)));

TRACE_2("Recipes compiled",count GVAR(recipes),count GVAR(categories));
