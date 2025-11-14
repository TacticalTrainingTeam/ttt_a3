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
 * [params] call PREFIX_advancedtowing_fnc_putAwayTowRopes
 *
 * Public: No
 */

params ["_vehicle", "_player"];

if(local _vehicle) then {
    private ["_hitchPoint", "_rope"];

    private _existingTowRopes = _vehicle getVariable [QGVAR(Ropes), []];
    if(count _existingTowRopes > 0) then {
        call FUNC(pickupTowRopes);
        call FUNC(dropTowRopes);
        {
            ropeDestroy _x;
        } forEach _existingTowRopes;
        _vehicle setVariable [QGVAR(Ropes), nil, true];
    };
} else {
    [_this, QFUNC(putAwayTowRopes), _vehicle, true] call FUNC(customRemoteExec);
};
