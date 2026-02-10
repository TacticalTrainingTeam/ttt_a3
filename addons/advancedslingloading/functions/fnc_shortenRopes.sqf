#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Shortens cargo ropes
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 * 2: Rope index (optional, default 0) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, player, 0] call ttt_advancedslingloading_fnc_shortenRopes
 *
 * Public: No
 */

params ["_vehicle", "_player", ["_ropeIndex", 0]];
if (local _vehicle) then {
    private _existingRopes = [_vehicle, _ropeIndex] call FUNC(getRopes);
    if (count _existingRopes > 0) then {
        _ropeLength = ropeLength (_existingRopes select 0);
        if (_ropeLength <= 2) then {
            [_vehicle, _player, _ropeIndex] call FUNC(releaseCargo);
        } else {
            {
                if (_ropeLength >= 10) then {
                    ropeUnwind [_x, 3, -ASL_ROPE_UNWIND_SPEED, true];
                } else {
                    ropeUnwind [_x, 3, -1, true];
                };
            } forEach _existingRopes;
        };
    };
} else {
    [_this, "ASL_Shorten_Ropes", _vehicle, true] call FUNC(remoteExec);
};
