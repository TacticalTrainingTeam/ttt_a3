#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Deploys cargo ropes from vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 * 2: Cargo count (optional, default 1) <NUMBER>
 * 3: Rope length (optional, default 15) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, player, 1, 15] call ttt_advancedslingloading_fnc_deployRopes
 *
 * Public: No
 */

params ["_vehicle","_player",["_cargoCount",1],["_ropeLength",15]];
if(local _vehicle) then {
    private ["_existingRopes","_cargoRopes","_slingLoadPoints"];
    _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
    _existingRopes = _vehicle getVariable ["ASL_Ropes",[]];
    if(count _existingRopes == 0) then {
        if(count _slingLoadPoints == 0) exitWith {
            [["Vehicle doesn't support cargo ropes", false],"ASL_Hint",_player] call FUNC(remoteExec);
        };
        if(count _slingLoadPoints < _cargoCount) exitWith {
            [["Vehicle doesn't support " + _cargoCount + " cargo ropes", false],"ASL_Hint",_player] call FUNC(remoteExec);
        };
        _cargoRopes = [];
        _cargo = [];
        for "_i" from 0 to (_cargoCount-1) do
        {
            _cargoRopes pushBack [];
            _cargo pushBack objNull;
        };
        _vehicle setVariable ["ASL_Ropes",_cargoRopes,true];
        _vehicle setVariable ["ASL_Cargo",_cargo,true];
        for "_i" from 0 to (_cargoCount-1) do
        {
            [_vehicle,_player,_i] call FUNC(deployRopesIndex);
        };
    } else {
        [["Vehicle already has cargo ropes deployed", false],"ASL_Hint",_player] call FUNC(remoteExec);
    };
} else {
    [_this,"ASL_Deploy_Ropes",_vehicle,true] call FUNC(remoteExec);
};
