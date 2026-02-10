#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if a vehicle is supported for advanced sling loading
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Is supported <BOOL>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_isSupportedVehicle
 *
 * Public: No
 */

params ["_vehicle","_isSupported"];
_isSupported = false;
if(not isNull _vehicle) then {
    {
        if(_vehicle isKindOf _x) then {
            _isSupported = true;
        };
    } forEach (missionNamespace getVariable ["ASL_Supported_Vehicles_OVERRIDE",missionNamespace getVariable ["ASL_Supported_Vehicles",[]]]);
};
_isSupported;
