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
 * [params] call ttt_advancedslingloading_fnc_deployRopesIndexAction
 *
 * Public: No
 */

params ["_ropesIndex"];

private ["_vehicle"];

_vehicle = player getVariable ["ASL_Deploy_Ropes_Index_Vehicle", objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
    [_vehicle,player,_ropesIndex] call FUNC(deployRopesIndex);
};
