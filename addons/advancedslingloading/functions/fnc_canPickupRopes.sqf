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
 * [params] call ttt_advancedslingloading_fnc_canPickupRopes
 *
 * Public: No
 */

 count (player getVariable ["ASL_Ropes_Vehicle", []]) == 0 && count (missionNamespace getVariable ["ASL_Nearby_Vehicles",[]]) > 0 && isNull objectParent player;
