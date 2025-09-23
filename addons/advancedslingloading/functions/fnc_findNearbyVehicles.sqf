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
 * [params] call ttt_advancedslingloading_fnc_findNearbyVehicles
 *
 * Public: No
 */

private ["_nearVehicles","_nearVehiclesWithRopes","_vehicle","_ends","_end1","_end2","_playerPosAGL"];

_nearVehicles = [];

{
    _nearVehicles append  (ACE_player nearObjects [_x, 30]);
} forEach (missionNamespace getVariable [QGVAR(Supported_Vehicles_OVERRIDE), GVAR(Supported_Vehicles)]);

_nearVehiclesWithRopes = [];

{
    _vehicle = _x;
    {
        _ropes = _vehicle getVariable [QGVAR(custom_ropes),[]];
        if(count _ropes > (_x select 0)) then {
            _ropes = _ropes select (_x select 0);
            {
                _ends = ropeEndPosition _x;
                if(count _ends == 2) then {
                    _end1 = _ends select 0;
                    _end2 = _ends select 1;
                    _playerPosAGL = ASLToAGL getPosASL ACE_player;
                    if((_playerPosAGL distance _end1) < 5 || (_playerPosAGL distance _end2) < 5 ) then {
                        _nearVehiclesWithRopes =  _nearVehiclesWithRopes + [_vehicle];
                    }
                };
            } forEach _ropes;
        };
    } forEach ([_vehicle] call FUNC(getActiveRopes));
} forEach _nearVehicles;

_nearVehiclesWithRopes;
