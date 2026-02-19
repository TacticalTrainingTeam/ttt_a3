#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action check for deploying ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can deploy ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_deployRopesActionCheck
 *
 * Public: No
 */

if (isNull objectParent player) then {
    [cursorTarget] call FUNC(canDeployRopes);
} else {
    [vehicle player] call FUNC(canDeployRopes);
};
