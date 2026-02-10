#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Retracts empty cargo ropes
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
 * [_vehicle, player, 0] call ttt_advancedslingloading_fnc_retractRopes
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropeIndex",0]];
if(local _vehicle) then {
    private ["_existingRopesAndCargo","_existingRopes","_existingCargo","_allRopes","_activeRopes"];
    _existingRopesAndCargo = [_vehicle,_ropeIndex] call FUNC(getRopesAndCargo);
    _existingRopes = _existingRopesAndCargo select 0;
    _existingCargo = _existingRopesAndCargo select 1;
    if(isNull _existingCargo) then {
        [_vehicle,_player,_ropeIndex] call FUNC(dropRopes);
        {
            [_x,_vehicle] spawn {
                params ["_rope","_vehicle"];
                private ["_count"];
                _count = 0;
                ropeUnwind [_rope, 3, 0];
                while {(!ropeUnwound _rope) && _count < 20} do {
                    sleep 1;
                    _count = _count + 1;
                };
                ropeDestroy _rope;
            };
        } forEach _existingRopes;
        _allRopes = _vehicle getVariable ["ASL_Ropes",[]];
        _allRopes set [_ropeIndex,[]];
        _vehicle setVariable ["ASL_Ropes",_allRopes,true];
    };
    _activeRopes = [_vehicle] call FUNC(getActiveRopes);
    if(count _activeRopes == 0) then {
        _vehicle setVariable ["ASL_Ropes",nil,true];
    };
} else {
    [_this,"ASL_Retract_Ropes",_vehicle,true] call FUNC(remoteExec);
};
