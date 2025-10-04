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
 * [params] call PREFIX_advancedtowing_fnc_isSupportedVehicle
 *
 * Public: No
 */

params ["_vehicle", "_isSupported"];

_isSupported = false;
if(!isNull _vehicle) then {
    {
        if(_vehicle isKindOf _x) then {
            _isSupported = true;
        };
    } forEach (missionNamespace getVariable [QGVAR(Supported_Vehicles_Override), GVAR(Supported_Vehicles)]);
};
_isSupported;
