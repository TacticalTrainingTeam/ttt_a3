#include "..\script_component.hpp"

/*
 * Author: Reimchen, Andx
 * Fills one or more crates/containers with a list of classname/count pairs,
 * routing each entry to the matching cargo type (item, magazine, backpack or
 * weapon) based on its config class. Single-use launcher weapons rely on
 * CBA's disposable-launcher framework (see ttt_resupply_fnc_resolveDisposableLauncher)
 * to auto-load themselves with their real magazine once taken from cargo, so
 * a plain addWeaponCargoGlobal is enough here - no manual pre-loading needed.
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
                _crateObject addWeaponCargoGlobal _x;
            };
        };
        nil
    } count _content;
    nil
} count _crates;
