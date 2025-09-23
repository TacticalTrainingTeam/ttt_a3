#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedslingloading_fnc_getRopes
 *
 * Public: No
 */

params ["_vehicle","_ropeIndex"];

private ["_allRopes","_selectedRopes"];

_selectedRopes = [];
_allRopes = _vehicle getVariable ["ASL_Ropes",[]];
if(count _allRopes > _ropeIndex) then {
    _selectedRopes = _allRopes select _ropeIndex;
};

_selectedRopes;
