#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action check for extending ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can extend ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_extendRopesActionCheck
 *
 * Public: No
 */

if (isNull objectParent player) exitWith {false};
[vehicle player] call FUNC(canExtendRopes);
