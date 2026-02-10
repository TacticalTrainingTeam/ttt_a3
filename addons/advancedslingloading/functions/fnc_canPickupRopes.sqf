#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if ropes can be picked up
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can pickup ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_canPickupRopes
 *
 * Public: No
 */

count (player getVariable ["ASL_Ropes_Vehicle", []]) == 0 && count (missionNamespace getVariable ["ASL_Nearby_Vehicles",[]]) > 0 && isNull objectParent player;
