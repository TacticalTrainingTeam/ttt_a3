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
 * [params] call ttt_advancedslingloading_fnc_retractRopesActionCheck
 *
 * Public: No
 */

if(isNull objectParent player) then {
    [cursorTarget] call FUNC(canRetractRopes);
} else {
    [vehicle player] call FUNC(canRetractRopes);
};
