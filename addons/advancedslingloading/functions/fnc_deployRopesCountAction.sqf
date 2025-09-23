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
 * [params] call ttt_advancedslingloading_fnc_deployRopesCountAction
 *
 * Public: No
 */

params ["_count"];

private ["_vehicle","_canDeployRopes"];

_vehicle = ACE_player getVariable ["ASL_Deploy_Count_Vehicle", objNull];
if(_count > 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
    [_vehicle,ACE_player,_count] call FUNC(deployRopes);
};
