#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if cargo can be released
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Can release cargo <BOOL>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_canReleaseCargo
 *
 * Public: No
 */

params ["_vehicle"];
if (player distance _vehicle > ASL_PICKUP_DISTANCE) exitWith { false };
if !([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };
private _existingRopes = _vehicle getVariable ["ASL_Ropes", []];
if ((count _existingRopes) == 0) exitWith { false };
private _activeRopes = [_vehicle] call FUNC(getActiveRopesWithCargo);
if ((count _activeRopes) == 0) exitWith { false };
true;
