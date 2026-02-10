#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Finds nearby vehicles with ropes within player range
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Array of nearby vehicles with ropes <ARRAY>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_findNearbyVehicles
 *
 * Public: No
 */

private _nearVehicles = [];
{
    _nearVehicles append (player nearObjects [_x, ASL_NEARBY_VEHICLE_DISTANCE]);
} forEach (missionNamespace getVariable ["ASL_Supported_Vehicles_OVERRIDE", missionNamespace getVariable ["ASL_Supported_Vehicles", []]]);
private _nearVehiclesWithRopes = [];
{
    private _vehicle = _x;
    {
        private _ropes = _vehicle getVariable ["ASL_Ropes", []];
        if (count _ropes > (_x select 0)) then {
            _ropes = _ropes select (_x select 0);
            {
                private _ends = ropeEndPosition _x;
                if (count _ends == 2) then {
                    private _end1 = _ends select 0;
                    private _end2 = _ends select 1;
                    private _playerPosAGL = ASLToAGL getPosASL player;
                    if ((_playerPosAGL distance _end1) < ASL_ROPE_PROXIMITY_DISTANCE || (_playerPosAGL distance _end2) < ASL_ROPE_PROXIMITY_DISTANCE) then {
                        _nearVehiclesWithRopes pushBack _vehicle;
                    }
                };
            } forEach _ropes;
        };
    } forEach ([_vehicle] call FUNC(getActiveRopes));
} forEach _nearVehicles;
_nearVehiclesWithRopes;
