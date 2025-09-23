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
 * [params] call ttt_advancedslingloading_fnc_shortenRopes
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropeIndex",0]];

if(local _vehicle) then {
    private ["_existingRopes"];
    _existingRopes = [_vehicle,_ropeIndex] call FUNC(getRopes);
    if(count _existingRopes > 0) then {
        _ropeLength = ropeLength (_existingRopes select 0);
        if(_ropeLength <= 2 ) then {
            call FUNC(releaseCargo);
        } else {
            {
                if(_ropeLength >= 10) then {
                    ropeUnwind [_x, 3, -5, true];
                } else {
                    ropeUnwind [_x, 3, -1, true];
                };
            } forEach _existingRopes;
        };
    };
} else {
    [_this,QFUNC(shortenRopes),_vehicle,true] call FUNC(customRemoteExec);
};
