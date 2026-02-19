#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if ropes can be dropped
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can drop ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_canDropRopes
 *
 * Public: No
 */

count (player getVariable ["ASL_Ropes_Vehicle", []]) > 0 && isNull objectParent player;
