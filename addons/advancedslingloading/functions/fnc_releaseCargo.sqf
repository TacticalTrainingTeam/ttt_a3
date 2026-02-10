#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Releases cargo from ropes
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
 * [_vehicle, player, 0] call ttt_advancedslingloading_fnc_releaseCargo
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropeIndex",0]];
if(local _vehicle) then {
    private ["_existingRopesAndCargo","_existingRopes","_existingCargo","_allCargo"];
    _existingRopesAndCargo = [_vehicle,_ropeIndex] call FUNC(getRopesAndCargo);
    _existingRopes = _existingRopesAndCargo select 0;
    _existingCargo = _existingRopesAndCargo select 1;
    {
        _existingCargo ropeDetach _x;
    } forEach _existingRopes;
    _allCargo = _vehicle getVariable ["ASL_Cargo",[]];
    _allCargo set [_ropeIndex,objNull];
    _vehicle setVariable ["ASL_Cargo",_allCargo, true];
    [_vehicle,_player,_ropeIndex] call FUNC(retractRopes);
} else {
    [_this,"ASL_Release_Cargo",_vehicle,true] call FUNC(remoteExec);
};
