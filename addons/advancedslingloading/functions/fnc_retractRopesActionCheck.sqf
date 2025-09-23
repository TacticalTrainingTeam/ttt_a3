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
 * [params] call PREFIX_advancedslingloading_fnc_retractRopesActionCheck
 *
 * Public: No
 */

if(isNull objectParent player) then {
    [cursorTarget] call ASL_Can_Retract_Ropes;
} else {
    [vehicle player] call ASL_Can_Retract_Ropes;
};
