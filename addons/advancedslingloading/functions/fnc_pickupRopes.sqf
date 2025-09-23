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
 * [params] call PREFIX_advancedslingloading_fnc_pickupRopes
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropesIndex",0]];

if(local _vehicle) then {
    private ["_existingRopesAndCargo","_existingRopes","_existingCargo","_helper","_allCargo"];
    _existingRopesAndCargo = [_vehicle,_ropesIndex] call ASL_Get_Ropes_And_Cargo;
    _existingRopes = _existingRopesAndCargo select 0;
    _existingCargo = _existingRopesAndCargo select 1;
    if(!isNull _existingCargo) then {
        {
            _existingCargo ropeDetach _x;
        } forEach _existingRopes;
        _allCargo = _vehicle getVariable ["ASL_Cargo",[]];
        _allCargo set [_ropesIndex,objNull];
        _vehicle setVariable ["ASL_Cargo",_allCargo, true];
    };
    _helper = "Land_Can_V2_F" createVehicle position _player;
    {
        [_helper, [0, 0, 0], [0,0,-1]] ropeAttachTo _x;
        _helper attachTo [_player, [-0.1, 0.1, 0.15], "Pelvis"];
    } forEach _existingRopes;
    hideObject _helper;
    [[_helper],"ASL_Hide_Object_Global"] call ASL_RemoteExecServer;
    _player setVariable ["ASL_Ropes_Vehicle", [_vehicle,_ropesIndex],true];
    _player setVariable ["ASL_Ropes_Pick_Up_Helper", _helper,true];
} else {
    [_this,"ASL_Pickup_Ropes",_vehicle,true] call ASL_RemoteExec;
};
