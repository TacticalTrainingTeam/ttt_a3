#include "..\script_component.hpp"
/*
 * Author: Colin, Andx
 * Returns the nearest intact supply vehicle within GVAR(maxDistance) of a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Supply vehicle, objNull if none is in range <OBJECT>
 *
 * Example:
 * [player] call ttt_drone_crafting_fnc_getNearestVehicle;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

private _nearest = objNull;
private _nearestDistance = GVAR(maxDistance);

{
    // alive also filters out vehicles deleted since they were designated (objNull)
    if (alive _x) then {
        private _distance = _unit distance _x;

        if (_distance <= _nearestDistance) then {
            _nearest = _x;
            _nearestDistance = _distance;
        };
    };
} forEach GVAR(vehicles);

_nearest
