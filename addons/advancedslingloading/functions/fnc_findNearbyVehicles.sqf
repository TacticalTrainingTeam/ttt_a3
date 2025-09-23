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
 * [params] call PREFIX_advancedslingloading_fnc_findNearbyVehicles
 *
 * Public: No
 */

private ["_nearVehicles","_nearVehiclesWithRopes","_vehicle","_ends","_end1","_end2","_playerPosAGL"];

_nearVehicles = [];

{
    _nearVehicles append  (player nearObjects [_x, 30]);
} forEach (missionNamespace getVariable ["ASL_Supported_Vehicles_OVERRIDE",ASL_Supported_Vehicles]);

_nearVehiclesWithRopes = [];

{
    _vehicle = _x;
    {
        _ropes = _vehicle getVariable ["ASL_Ropes",[]];
        if(count _ropes > (_x select 0)) then {
            _ropes = _ropes select (_x select 0);
            {
                _ends = ropeEndPosition _x;
                if(count _ends == 2) then {
                    _end1 = _ends select 0;
                    _end2 = _ends select 1;
                    _playerPosAGL = ASLToAGL getPosASL player;
                    if((_playerPosAGL distance _end1) < 5 || (_playerPosAGL distance _end2) < 5 ) then {
                        _nearVehiclesWithRopes =  _nearVehiclesWithRopes + [_vehicle];
                    }
                };
            } forEach _ropes;
        };
    } forEach ([_vehicle] call ASL_Get_Active_Ropes);
} forEach _nearVehicles;

_nearVehiclesWithRopes;
