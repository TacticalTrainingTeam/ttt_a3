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
 * [params] call ttt_advancedslingloading_fnc_getClosestRope
 *
 * Public: No
 */

private ["_nearbyVehicles","_closestVehicle","_closestRopeIndex","_closestDistance"];
private ["_vehicle","_activeRope","_ropes","_ends"];
private ["_end1","_end2","_minEndDistance"];

_nearbyVehicles = missionNamespace getVariable ["ASL_Nearby_Vehicles",[]];
_closestVehicle = objNull;
_closestRopeIndex = 0;
_closestDistance = -1;
{
    _vehicle = _x;
    {
        _activeRope = _x;
        _ropes = [_vehicle,(_activeRope select 0)] call FUNC(getRopes);
        {
            _ends = ropeEndPosition _x;
            if(count _ends == 2) then {
                _end1 = _ends select 0;
                _end2 = _ends select 1;
                _minEndDistance = ((position player) distance _end1) min ((position player) distance _end2);
                if(_closestDistance == -1 || _closestDistance > _minEndDistance) then {
                    _closestDistance = _minEndDistance;
                    _closestRopeIndex = (_activeRope select 0);
                    _closestVehicle = _vehicle;
                };
            };
        } forEach _ropes;
    } forEach ([_vehicle] call FUNC(getActiveRopes));
} forEach _nearbyVehicles;

[_closestVehicle,_closestRopeIndex];
