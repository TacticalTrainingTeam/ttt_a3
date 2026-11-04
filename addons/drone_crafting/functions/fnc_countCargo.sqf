#include "..\script_component.hpp"
/*
 * Author: Andx
 * Counts how many of a class are stored directly in a container's cargo (not inside backpacks,
 * vests or uniforms stored in that cargo). Magazines are counted regardless of their ammo.
 *
 * Arguments:
 * 0: Container <OBJECT>
 * 1: Config-cased class name <STRING>
 * 2: Cargo type, as returned by fnc_getCargoType <STRING>
 *
 * Return Value:
 * Count <NUMBER>
 *
 * Example:
 * [_vehicle, "ACE_CableTie", "item"] call ttt_drone_crafting_fnc_countCargo;
 *
 * Public: No
 */

params [
    ["_container", objNull, [objNull]],
    ["_class", "", [""]],
    ["_type", "", [""]]
];

if (isNull _container) exitWith {0};

private _cargo = switch (_type) do {
    case "magazine": {getMagazineCargo _container};
    case "item": {getItemCargo _container};
    case "weapon": {getWeaponCargo _container};
    case "backpack": {getBackpackCargo _container};
    default {[[], []]};
};

_cargo params ["_classes", "_counts"];

private _index = _classes find _class;

if (_index == -1) exitWith {0};

_counts select _index
