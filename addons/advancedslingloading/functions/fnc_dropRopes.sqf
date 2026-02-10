#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Drops ropes player is carrying
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
 * [_vehicle, player, 0] call ttt_advancedslingloading_fnc_dropRopes
 *
 * Public: No
 */

params ["_vehicle", "_player", ["_ropesIndex", 0]];
if (local _vehicle) then {
    private _helper = (_player getVariable ["ASL_Ropes_Pick_Up_Helper", objNull]);
    if (!isNull _helper) then {
        private _existingRopes = [_vehicle, _ropesIndex] call FUNC(getRopes);
        {
            _helper ropeDetach _x;
        } forEach _existingRopes;
        detach _helper;
        deleteVehicle _helper;
    };
    _player setVariable ["ASL_Ropes_Vehicle", nil, true];
    _player setVariable ["ASL_Ropes_Pick_Up_Helper", nil, true];
} else {
    [_this, "ASL_Drop_Ropes", _vehicle, true] call FUNC(remoteExec);
};
