#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Index action handler for shortening specific ropes
 *
 * Arguments:
 * 0: Rope index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call ttt_advancedslingloading_fnc_shortenRopesIndexAction
 *
 * Public: No
 */

params ["_ropeIndex"];
private ["_vehicle"];
_vehicle = player getVariable ["ASL_Shorten_Index_Vehicle", objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canShortenRopes)) then {
    [_vehicle,player,_ropeIndex] call FUNC(shortenRopes);
};
