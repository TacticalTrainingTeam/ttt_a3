#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action check for shortening ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can shorten ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_shortenRopesActionCheck
 *
 * Public: No
 */

if(isNull objectParent player) exitWith {false};
[vehicle player] call FUNC(canShortenRopes);
