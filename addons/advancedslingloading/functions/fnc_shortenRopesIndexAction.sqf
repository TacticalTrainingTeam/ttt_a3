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
 * [params] call ttt_advancedslingloading_fnc_shortenRopesIndexAction
 *
 * Public: No
 */

params ["_ropeIndex"];

private ["_vehicle"];

_vehicle = ACE_player getVariable ["ASL_Shorten_Index_Vehicle", objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canShortenRopes)) then {
    [_vehicle,ACE_player,_ropeIndex] call FUNC(shortenRopes);
};
