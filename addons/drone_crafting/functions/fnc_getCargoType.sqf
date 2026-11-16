#include "..\script_component.hpp"
/*
 * Author: Andx
 * Resolves a class name to the cargo type it is stored as, plus its config-cased class name.
 * The config-cased name matters because the get*Cargo commands return config casing and are
 * compared with case-sensitive find/in in fnc_countCargo.sqf.
 *
 * Arguments:
 * 0: Class name <STRING>
 *
 * Return Value:
 * [Config-cased class name, type ("magazine", "item", "weapon", "backpack" or "" if unknown)] <ARRAY>
 *
 * Example:
 * ["ACE_CableTie"] call ttt_drone_crafting_fnc_getCargoType; // ["ACE_CableTie", "item"]
 *
 * Public: No
 */

params [["_class", "", [""]]];

if (_class isEqualTo "") exitWith {["", ""]};

private _config = configFile >> "CfgMagazines" >> _class;
if (isClass _config) exitWith {[configName _config, "magazine"]};

_config = configFile >> "CfgWeapons" >> _class;
if (isClass _config) exitWith {
    // CfgWeapons "type": 1 = primary, 2 = handgun, 4 = launcher, 4096 = binocular - these sit in
    // weapon cargo; everything else (ItemCore and the like) is item cargo.
    private _isWeapon = getNumber (_config >> "type") in [1, 2, 4, 4096];
    [configName _config, ["item", "weapon"] select _isWeapon]
};

_config = configFile >> "CfgVehicles" >> _class;
if (isClass _config && {getNumber (_config >> "isBackpack") == 1}) exitWith {[configName _config, "backpack"]};

["", ""]
