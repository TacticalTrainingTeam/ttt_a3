#include "..\script_component.hpp"
/*
 * Authors: You
 * Returns all config classes belonging to a given addon name, including CfgAmmo entries.
 *
 * Arguments:
 * 0: Addon Name <STRING>
 *
 * Return Value:
 * Array of Items
 *
 * Example:
 * ["ttt_common"] call ttt_compat_usp_fnc_getAllItems
 *
 * Public: No
 */

params ["_addonName"];
TRACE_1("fnc_getAllItems",_this);

private _result = [];

// --- Find the CfgPatches class for this addon ---
private _patchClass = configNull;

{
    if (isClass _x) then {
        private _name = getText (_x >> "name");

        if (
            toLower _name isEqualTo toLower _addonName
            || toLower (configName _x) isEqualTo toLower _addonName
        ) then {
            _patchClass = _x;
        };
    };
} forEach ("true" configClasses (configFile >> "CfgPatches"));

if (isNull _patchClass) exitWith {
    WARNING_1("Addon '%1' not found!",_addonName);
    []
};

private _patchName = configName _patchClass;

// --- Collect units[] and weapons[] normally ---
private _units   = getArray (_patchClass >> "units");
private _weapons = getArray (_patchClass >> "weapons");

private _all = _units + _weapons;

// --- Resolve classnames in major config categories ---
{
    private _class = _x;

    private _cfg = configFile >> "CfgVehicles" >> _class;
    if (isClass _cfg) exitWith { _result pushBack _class };

    _cfg = configFile >> "CfgWeapons" >> _class;
    if (isClass _cfg) exitWith { _result pushBack _class };

    _cfg = configFile >> "CfgMagazines" >> _class;
    if (isClass _cfg) exitWith { _result pushBack _class };

    _cfg = configFile >> "CfgAmmo" >> _class;
    if (isClass _cfg) exitWith { _result pushBack _class };
} forEach _all;

// --- FULL CfgAmmo scan for addon origin ---
{
    private _cfg = _x;
    private _origin = getText (_cfg >> "addon");

    // Match by patch class name
    if (toLower _origin isEqualTo toLower _patchName) then {
        _result pushBackUnique (configName _cfg);
    };
} forEach ("true" configClasses (configFile >> "CfgAmmo"));

_result
