#include "..\script_component.hpp"
/*
 * Author: Timi007
 * Checks if the height of the static weapon can be adjusted.
 *
 * Arguments:
 * 0: Static weapon <OBJECT>
 * 1: "up" or "down" <STRING>
 *
 * Return Value:
 * Can adjust height <BOOL>
 *
 * Example:
 * [this, "up"] call ttt_compat_rnt_fnc_canAdjustHeight
 *
 * Public: No
 */

params ["_target", "_upDown"];

!(_target getVariable ["isInAnimation", false]) &&
{!(_target getVariable [_upDown, false])}
