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
 * [params] call PREFIX_advancedtowing_fnc_canPickupTowRopes
 *
 * Public: No
 */

isNull (player getVariable [QGVAR(Ropes_Vehicle), objNull]) && count (missionNamespace getVariable [QGVAR(Nearby_Tow_Vehicles), []]) > 0 && isNull objectParent player;
