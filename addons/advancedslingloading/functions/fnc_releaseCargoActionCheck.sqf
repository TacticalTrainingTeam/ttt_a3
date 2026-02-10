#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action check for releasing cargo
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can release cargo <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_releaseCargoActionCheck
 *
 * Public: No
 */

if(isNull objectParent player) exitWith {false};
[vehicle player] call FUNC(canReleaseCargo);
