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
 * [params] call ttt_advancedslingloading_fnc_dropRopes
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropesIndex",0]];

if(local _vehicle) then {
    private ["_helper","_existingRopes"];
    _helper = (_player getVariable ["ASL_Ropes_Pick_Up_Helper", objNull]);
    if(!isNull _helper) then {
        _existingRopes = [_vehicle,_ropesIndex] call FUNC(getRopes);
        {
            _helper ropeDetach _x;
        } forEach _existingRopes;
        detach _helper;
        deleteVehicle _helper;
    };
    _player setVariable ["ASL_Ropes_Vehicle", nil,true];
    _player setVariable ["ASL_Ropes_Pick_Up_Helper", nil,true];
} else {
    [_this,"ASL_Drop_Ropes",_vehicle,true] call FUNC(customRemoteExec);
};
