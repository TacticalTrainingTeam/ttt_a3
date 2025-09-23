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
 * [params] call PREFIX_advancedslingloading_fnc_getActiveRopesWithoutCargo
 *
 * Public: No
 */

params ["_vehicle"];

private ["_activeRopesWithoutCargo","_existingCargo","_activeRopes","_cargo"];

_activeRopesWithoutCargo = [];
_existingCargo = _vehicle getVariable ["ASL_Cargo",[]];
_activeRopes = call ASL_Get_Active_Ropes;
{
    _cargo = _existingCargo select (_x select 0);
    if(isNull _cargo) then {
        _activeRopesWithoutCargo pushBack _x;
    };
} forEach _activeRopes;
_activeRopesWithoutCargo;
