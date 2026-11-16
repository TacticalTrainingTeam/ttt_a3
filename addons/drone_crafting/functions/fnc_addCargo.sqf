#include "..\script_component.hpp"
/*
 * Author: Andx
 * Adds a class to a container's cargo with the command matching its cargo type. All commands
 * used have global effect, so this is called on the server only.
 *
 * Arguments:
 * 0: Container <OBJECT>
 * 1: Config-cased class name <STRING>
 * 2: Cargo type, as returned by fnc_getCargoType <STRING>
 * 3: Count <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, "ACE_CableTie", "item", 50] call ttt_drone_crafting_fnc_addCargo;
 *
 * Public: No
 */

params [
    ["_container", objNull, [objNull]],
    ["_class", "", [""]],
    ["_type", "", [""]],
    ["_count", 1, [0]]
];

if (isNull _container || {_count < 1}) exitWith {};

switch (_type) do {
    case "magazine": {_container addMagazineCargoGlobal [_class, _count]};
    case "item": {_container addItemCargoGlobal [_class, _count]};
    case "weapon": {_container addWeaponCargoGlobal [_class, _count]};
    case "backpack": {_container addBackpackCargoGlobal [_class, _count]};
};
