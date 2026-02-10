#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Index action handler for extending specific ropes
 *
 * Arguments:
 * 0: Rope index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call ttt_advancedslingloading_fnc_extendRopesIndexAction
 *
 * Public: No
 */

params ["_ropeIndex"];
private ["_vehicle","_canDeployRopes"];
_vehicle = player getVariable ["ASL_Extend_Index_Vehicle", objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canExtendRopes)) then {
    [_vehicle,player,_ropeIndex] call FUNC(extendRopes);
};
