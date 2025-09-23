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
 * [params] call ttt_advancedslingloading_fnc_getActiveRopes
 *
 * Public: No
 */

params ["_vehicle"];

private ["_activeRopes","_existingRopes","_ropeLabelSets","_ropeIndex","_totalExistingRopes","_ropeLabels"];

_activeRopes = [];
_existingRopes = _vehicle getVariable ["ASL_Ropes",[]];
_ropeLabelSets = [["Center"],["Front","Rear"],["Front","Center","Rear"]];
_ropeIndex = 0;
_totalExistingRopes = count _existingRopes;
{
    if(count _x > 0) then {
        _ropeLabels = _ropeLabelSets select (_totalExistingRopes - 1);
        _activeRopes pushBack [_ropeIndex,_ropeLabels select _ropeIndex];
    };
    _ropeIndex = _ropeIndex + 1;
} forEach _existingRopes;
_activeRopes;
