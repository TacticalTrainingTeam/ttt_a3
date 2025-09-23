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
 * [params] call PREFIX_advancedslingloading_fnc_retractRopesIndexAction
 *
 * Public: No
 */

params ["_ropesIndex"];

private ["_vehicle"];

_vehicle = player getVariable ["ASL_Retract_Ropes_Index_Vehicle", objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call ASL_Can_Retract_Ropes) then {
    [_vehicle,player,_ropesIndex] call ASL_Retract_Ropes;
};
