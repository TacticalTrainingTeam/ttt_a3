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
 * [params] call PREFIX_advancedslingloading_fnc_deployRopesCountAction
 *
 * Public: No
 */

params ["_count"];

private ["_vehicle","_canDeployRopes"];

_vehicle = player getVariable ["ASL_Deploy_Count_Vehicle", objNull];
if(_count > 0 && !isNull _vehicle && [_vehicle] call ASL_Can_Deploy_Ropes) then {
    [_vehicle,player,_count] call ASL_Deploy_Ropes;
};
