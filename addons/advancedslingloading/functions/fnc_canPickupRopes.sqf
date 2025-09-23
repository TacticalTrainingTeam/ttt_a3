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

 count (ACE_player getVariable [QGVAR(ropes_vehicle), []]) == 0 && count (missionNamespace getVariable [QGVAR(nearby_vehicles),[]]) > 0 && isNull objectParent ACE_player;
