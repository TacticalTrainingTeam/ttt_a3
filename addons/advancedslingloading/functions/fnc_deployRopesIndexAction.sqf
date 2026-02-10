#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Index action handler for deploying specific ropes
 *
 * Arguments:
 * 0: Rope index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call ttt_advancedslingloading_fnc_deployRopesIndexAction
 *
 * Public: No
 */

params ["_ropesIndex"];
private ["_vehicle"];
_vehicle = player getVariable ["ASL_Deploy_Ropes_Index_Vehicle", objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
    [_vehicle,player,_ropesIndex] call FUNC(deployRopesIndex);
};
