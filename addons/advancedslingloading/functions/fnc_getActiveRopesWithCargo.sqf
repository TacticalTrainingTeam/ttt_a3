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
 * [params] call ttt_advancedslingloading_fnc_getActiveRopesWithCargo
 *
 * Public: No
 */

params ["_vehicle"];

private ["_activeRopesWithCargo", "_existingCargo", "_activeRopes", "_cargo"];

_activeRopesWithCargo = [];
_existingCargo = _vehicle getVariable [QGVAR(Cargo),[]];
_activeRopes = call FUNC(getActiveRopes);
{
    _cargo = _existingCargo select (_x select 0);
    if(!isNull _cargo) then {
        _activeRopesWithCargo pushBack _x;
    };
} forEach _activeRopes;
_activeRopesWithCargo;
