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
 * [params] call PREFIX_advancedtowing_fnc_findNearbyTowVehicles
 *
 * Public: No
 */

private _nearVehicles = [];

{
    _nearVehicles append (position player nearObjects [_x, 30]);
} forEach (missionNamespace getVariable [QGVAR(SUPPORTED_VEHICLES_OVERRIDE), SA_tow_supported_vehicles]);

private _nearVehiclesWithTowRopes = [];
{
    private _vehicle = _x;
    {
        private _ends = ropeEndPosition _x;
        if(count _ends == 2) then {
            private _end1 = _ends select 0;
            private _end2 = _ends select 1;
            if(((position player) distance _end1) < 5 || ((position player) distance _end2) < 5 ) then {
                _nearVehiclesWithTowRopes pushBack _vehicle;
            }
        };
    } forEach (_vehicle getVariable [QGVAR(Ropes), []]);
} forEach _nearVehicles;

_nearVehiclesWithTowRopes;
