#include "script_component.hpp"
/*
 * Author: Reimchen, Andx
 * 
 *
 * Arguments:
 * 
 *
 * Return Value:
 * None
 *
 * Example:
 * [[fahrzeug_01], [["Toolkit", 1],["ACE_Entrenchingtool", 1], false] call ttt_main_fnc_crateFiller;
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