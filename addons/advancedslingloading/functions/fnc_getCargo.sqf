#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets cargo at a specific rope index
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Rope index <NUMBER>
 *
 * Return Value:
 * Cargo object <OBJECT>
 *
 * Example:
 * [_vehicle, 0] call ttt_advancedslingloading_fnc_getCargo
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
