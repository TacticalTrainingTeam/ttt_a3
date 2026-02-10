#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets all inactive rope indexes and position labels
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Array of inactive rope indexes with labels <ARRAY>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_getInactiveRopes
 *
 * Public: No
 */

params ["_vehicle"];
private _inactiveRopes = [];
private _existingRopes = _vehicle getVariable ["ASL_Ropes", []];
private _ropeLabelSets = [["Center"], ["Front", "Rear"], ["Front", "Center", "Rear"]];
private _ropeIndex = 0;
private _totalExistingRopes = count _existingRopes;
{
    if (count _x == 0) then {
        private _ropeLabels = _ropeLabelSets select (_totalExistingRopes - 1);
        _inactiveRopes pushBack [_ropeIndex, _ropeLabels select _ropeIndex];
    };
    _ropeIndex = _ropeIndex + 1;
} forEach _existingRopes;
_inactiveRopes;
