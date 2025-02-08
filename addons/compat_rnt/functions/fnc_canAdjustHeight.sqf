#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the height of the static weapon can be adjusted.
 *
 *  Parameter(s):
 *      0: OBJECT - Static weapon
 *      1: STRING - "up" or "down"
 *
 *  Returns:
 *       BOOLEAN - Can adjust height.
 *
 *  Example:
 *      [this, "up"] call ttt2_compat_rnt_fnc_canAdjustHeight
 *
 * Public: NO
 */

params ["_target", "_upDown"];

!(_target getVariable ["isInAnimation", false]) &&
{!(_target getVariable [_upDown, false])}