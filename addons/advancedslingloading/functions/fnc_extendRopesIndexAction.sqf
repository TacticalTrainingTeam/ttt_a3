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
 * [params] call PREFIX_advancedslingloading_fnc_extendRopesIndexAction
 *
 * Public: No
 */

params ["_ropeIndex"];

private ["_vehicle","_canDeployRopes"];

_vehicle = player getVariable ["ASL_Extend_Index_Vehicle", objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call ASL_Can_Extend_Ropes) then {
    [_vehicle,player,_ropeIndex] call ASL_Extend_Ropes;
};
