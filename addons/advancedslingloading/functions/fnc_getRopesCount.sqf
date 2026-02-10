#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets the total number of rope sets
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Number of rope sets <NUMBER>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_getRopesCount
 *
 * Public: No
 */

params ["_vehicle"];
count (_vehicle getVariable ["ASL_Ropes",[]]);
