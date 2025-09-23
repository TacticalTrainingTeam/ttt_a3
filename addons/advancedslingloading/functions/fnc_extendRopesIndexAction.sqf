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
 * [params] call ttt_advancedslingloading_fnc_extendRopesIndexAction
 *
 * Public: No
 */

params ["_ropeIndex"];

private ["_vehicle","_canDeployRopes"];

_vehicle = ACE_player getVariable [QGVAR(Extend_Index_Vehicle), objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canExtendRopes)) then {
    [_vehicle,ACE_player,_ropeIndex] call FUNC(extendRopes);
};
