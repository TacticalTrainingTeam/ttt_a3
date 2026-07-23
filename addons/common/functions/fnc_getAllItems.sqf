#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Returns all config classes belonging to a given addon name.
 *
 * Arguments:
 * 0: Addon Name <STRING>
 *
 * Return Value:
 * Array of Items
 *
 * Example:
 * ["ttt_common"] call ttt_common_fnc_getAllItems
 *
 * Public: No
 */

params ["_addonName"];
TRACE_1("fnc_getAllItems",_this);

private _result = [];
private _weaponsArray = getArray(configFile >> "CfgPatches" >> _addonName >> "weapons");

{
    _result pushBack _x;
} forEach (_weaponsArray);

_result
