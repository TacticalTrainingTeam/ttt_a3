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
 * [params] call PREFIX_advancedtowing_fnc_dropTowRopes
 *
 * Public: No
 */

params ["_vehicle", "_player"];

if(local _vehicle) then {
    private _helper = (_player getVariable [QGVAR(Ropes_Pick_Up_Helper), objNull]);

    if(!isNull _helper) then {
        {
            _helper ropeDetach _x;
        } forEach (_vehicle getVariable [QGVAR(Ropes),[]]);
        detach _helper;
        deleteVehicle _helper;
    };

    _player setVariable [QGVAR(Ropes_Vehicle), nil, true];
    _player setVariable [QGVAR(Ropes_Pick_Up_Helper), nil, true];

} else {
    [_this, QFUNC(dropTowRopes), _vehicle, true] call FUNC(customRemoteExec);
};
