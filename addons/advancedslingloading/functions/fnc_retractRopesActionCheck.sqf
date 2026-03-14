#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action check for retracting ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can retract ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_retractRopesActionCheck
 *
 * Public: No
 */

if (isNull objectParent player) then {
    [cursorTarget] call FUNC(canRetractRopes);
} else {
    [vehicle player] call FUNC(canRetractRopes);
};
