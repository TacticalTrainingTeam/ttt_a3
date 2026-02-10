#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets active ropes without cargo attached
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Array of active rope indexes without cargo <ARRAY>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_getActiveRopesWithoutCargo
 *
 * Public: No
 */

params ["_vehicle"];
private ["_activeRopesWithoutCargo","_existingCargo","_activeRopes","_cargo"];
_activeRopesWithoutCargo = [];
_existingCargo = _vehicle getVariable ["ASL_Cargo",[]];
_activeRopes = [_vehicle] call FUNC(getActiveRopes);
{
    _cargo = _existingCargo select (_x select 0);
    if(isNull _cargo) then {
        _activeRopesWithoutCargo pushBack _x;
    };
} forEach _activeRopes;
_activeRopesWithoutCargo;
