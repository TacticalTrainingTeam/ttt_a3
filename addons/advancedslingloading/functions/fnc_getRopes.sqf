#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets ropes at a specific index
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Rope index <NUMBER>
 *
 * Return Value:
 * Array of rope objects <ARRAY>
 *
 * Example:
 * [_vehicle, 0] call ttt_advancedslingloading_fnc_getRopes
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
