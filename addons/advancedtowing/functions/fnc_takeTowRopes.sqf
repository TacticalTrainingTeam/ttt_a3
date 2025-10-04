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
 * [params] call PREFIX_advancedtowing_fnc_takeTowRopes
 *
 * Public: No
 */

params ["_vehicle","_player"];

if(local _vehicle) then {

    INFO_1("Take Tow Ropes Called %1",_this);

    private _existingTowRopes = _vehicle getVariable [QGVAR(Ropes), []];

    if(count _existingTowRopes == 0) then {
        private _hitchPoint = [_vehicle] call FUNC(getHitchPoints) select 1;
        private _rope = ropeCreate [_vehicle, _hitchPoint, 10];
        _vehicle setVariable [QGVAR(Ropes), [_rope], true];
        call FUNC(pickupTowRopes);
    };
} else {
    [_this, QFUNC(takeTowRopes), _vehicle, true] call FUNC(customRemoteExec);
};
