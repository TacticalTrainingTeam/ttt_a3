#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets active ropes that have cargo attached
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Array of active rope indexes with cargo <ARRAY>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_getActiveRopesWithCargo
 *
 * Public: No
 */

params ["_vehicle"];
private ["_activeRopesWithCargo","_existingCargo","_activeRopes","_cargo"];
_activeRopesWithCargo = [];
_existingCargo = _vehicle getVariable ["ASL_Cargo",[]];
_activeRopes = [_vehicle] call FUNC(getActiveRopes);
{
    _cargo = _existingCargo select (_x select 0);
    if(!isNull _cargo) then {
        _activeRopesWithCargo pushBack _x;
    };
} forEach _activeRopes;
_activeRopesWithCargo;
