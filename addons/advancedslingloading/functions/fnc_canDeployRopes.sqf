#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if ropes can be deployed
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Can deploy ropes <BOOL>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_canDeployRopes
 *
 * Public: No
 */

params ["_vehicle"];
if (player distance _vehicle > ASL_PICKUP_DISTANCE) exitWith { false };
if !([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };
_existingVehicle = player getVariable ["ASL_Ropes_Vehicle", []];
if (count _existingVehicle > 0) exitWith { false };
private _existingRopes = _vehicle getVariable ["ASL_Ropes", []];
if ((count _existingRopes) == 0) exitWith { true };
private _activeRopes = [_vehicle] call FUNC(getActiveRopes);
if ((count _existingRopes) > 0 && (count _existingRopes) == (count _activeRopes)) exitWith { false };
true;
