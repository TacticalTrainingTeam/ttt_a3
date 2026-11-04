#include "..\script_component.hpp"
/*
 * Author: Colin, Andx
 * Checks a recipe against a container's cargo. Every ingredient counts - including the warhead,
 * which the original mission script's "(X baubar)" label ignored.
 *
 * Arguments:
 * 0: Container <OBJECT>
 * 1: Recipe class <STRING>
 *
 * Return Value:
 * 0: How many times the recipe can be crafted from the cargo <NUMBER>
 * 1: Missing ingredients for one craft, [[class, missing count], ...] <ARRAY>
 *
 * Example:
 * [_vehicle, "standard_at"] call ttt_drone_crafting_fnc_checkIngredients;
 *
 * Public: No
 */

params [
    ["_container", objNull, [objNull]],
    ["_recipeId", "", [""]]
];

private _recipe = GVAR(recipes) getOrDefault [_recipeId, createHashMap];
private _ingredients = _recipe getOrDefault ["ingredients", []];

if (_ingredients isEqualTo []) exitWith {[0, []]};

private _craftable = -1;
private _missing = [];

{
    _x params ["_class", "_type", "_count"];

    private _available = [_container, _class, _type] call FUNC(countCargo);
    private _possible = floor (_available / _count);

    if (_craftable == -1 || {_possible < _craftable}) then {
        _craftable = _possible;
    };

    if (_available < _count) then {
        _missing pushBack [_class, _count - _available];
    };
} forEach _ingredients;

[_craftable, _missing]
