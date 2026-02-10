#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Count action handler for deploying multiple rope sets
 *
 * Arguments:
 * 0: Rope count <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [2] call ttt_advancedslingloading_fnc_deployRopesCountAction
 *
 * Public: No
 */

params ["_count"];
private ["_vehicle","_canDeployRopes"];
_vehicle = player getVariable ["ASL_Deploy_Count_Vehicle", objNull];
if(_count > 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
    [_vehicle,player,_count] call FUNC(deployRopes);
};
