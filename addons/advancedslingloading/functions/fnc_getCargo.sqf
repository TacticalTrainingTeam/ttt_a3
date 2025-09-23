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
 * [params] call ttt_advancedslingloading_fnc_getCargo
 *
 * Public: No
 */

params ["_vehicle","_ropeIndex"];

private ["_allCargo","_selectedCargo"];

_selectedCargo = objNull;
_allCargo = _vehicle getVariable ["ASL_Cargo",[]];
if(count _allCargo > _ropeIndex) then {
    _selectedCargo = _allCargo select _ropeIndex;
};

_selectedCargo;
