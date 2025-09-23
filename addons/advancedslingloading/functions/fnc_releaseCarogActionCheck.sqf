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
 * [params] call PREFIX_advancedslingloading_fnc_releaseCarogActionCheck
 *
 * Public: No
 */

if(isNull objectParent player) exitWith {false};
[vehicle player] call ASL_Can_Release_Cargo;
