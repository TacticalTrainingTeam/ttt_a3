#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets ropes and cargo at a specific index
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Rope index <NUMBER>
 *
 * Return Value:
 * Array [ropes, cargo] <ARRAY>
 *
 * Example:
 * [_vehicle, 0] call ttt_advancedslingloading_fnc_getRopesAndCargo
 *
 * Public: No
 */

params ["_vehicle","_ropeIndex"];
private ["_selectedCargo","_selectedRopes"];
_selectedCargo = [_vehicle,_ropeIndex] call FUNC(getCargo);
_selectedRopes = [_vehicle,_ropeIndex] call FUNC(getRopes);
[_selectedRopes, _selectedCargo];
