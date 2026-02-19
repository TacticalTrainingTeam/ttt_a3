#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if ropes can be retracted
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Can retract ropes <BOOL>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_canRetractRopes
 *
 * Public: No
 */

params ["_vehicle"];
if (player distance _vehicle > ASL_PLAYER_DISTANCE) exitWith { false };
if !([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };
private _existingRopes = _vehicle getVariable ["ASL_Ropes", []];
if ((count _existingRopes) == 0) exitWith { false };
private _activeRopes = [_vehicle] call FUNC(getActiveRopesWithoutCargo);
if ((count _activeRopes) == 0) exitWith { false };
true;
