#include "..\script_component.hpp"

/*
 * Author: Reimchen, Andx
 * Fills one or more crates/containers with a list of classname/count pairs,
 * routing each entry to the matching cargo type (item, magazine, backpack or
 * weapon) based on its config class. Launcher-kind weapons are added
 * pre-loaded with their default magazine via addWeaponWithAttachmentsCargoGlobal
 * instead of the plain (unloaded) addWeaponCargoGlobal, since a separate
 * magazine cargo entry does not get auto-paired with a weapon on pickup.
 *
 * Arguments:
 * 0: Crates/containers to fill <ARRAY of OBJECT>
 * 1: Content to add - [classname, count] pairs <ARRAY>
 * 2: Clear existing cargo (weapons/magazines/items/backpacks) before filling <BOOLEAN> (default: true)
 *
 * Return Value:
 * None
 *
 * Example:
 * [[fahrzeug_01], [["Toolkit", 1],["ACE_Entrenchingtool", 1]], false] call ttt_common_fnc_crateFiller;
 *
 * Public: Yes
 */

 params ["_crates", "_content", ["_clearCrate", true]];
{
    _crateObject = _x;
    
    if (_clearCrate) then {
        clearWeaponCargoGlobal _crateObject;
        clearMagazineCargoGlobal _crateObject;
        clearItemCargoGlobal _crateObject;
        clearBackpackCargoGlobal _crateObject; 
    };

    {
        call {
            if ((_x select 0) isKindOf ["ItemCore", configFile >> "CfgWeapons"]) exitWith {
                _crateObject addItemCargoGlobal _x;
            };

            if (isClass(configFile >> "CfgMagazines" >> (_x select 0))) exitWith {
                _crateObject addMagazineCargoGlobal _x;
            };

            if ((_x select 0) isKindOf "Bag_Base") exitWith {
                _crateObject addBackpackCargoGlobal _x;
            };

            if (isClass(configFile >> "CfgWeapons" >> (_x select 0))) exitWith {
                private _weaponClass = _x select 0;

                // Plain addWeaponCargoGlobal drops the weapon into cargo with
                // no ammo loaded - a separate magazine cargo entry does not
                // get auto-paired with it on pickup, so launchers (esp.
                // single-use ones like NLAW) would come out empty. Load the
                // weapon's default magazine via addWeaponWithAttachmentsCargoGlobal
                // instead so it's usable as soon as it's taken.
                private _magClass = getArray (configFile >> "CfgWeapons" >> _weaponClass >> "magazines") param [0, ""];
                if (_weaponClass isKindOf ["Launcher", configFile >> "CfgWeapons"] && {isClass (configFile >> "CfgMagazines" >> _magClass)}) then {
                    private _magCount = getNumber (configFile >> "CfgMagazines" >> _magClass >> "count");
                    _crateObject addWeaponWithAttachmentsCargoGlobal [[_weaponClass, "", "", "", [_magClass, _magCount], [], ""], _x select 1];
                } else {
                    _crateObject addWeaponCargoGlobal _x;
                };
            };
        };
        nil
    } count _content;
    nil
} count _crates;
