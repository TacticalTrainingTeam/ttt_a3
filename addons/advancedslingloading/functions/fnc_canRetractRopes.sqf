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
private ["_existingRopes","_activeRopes"];
if(player distance _vehicle > 30) exitWith { false };
if!([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };
_existingRopes = _vehicle getVariable ["ASL_Ropes",[]];
if((count _existingRopes) == 0) exitWith { false };
_activeRopes = [_vehicle] call FUNC(getActiveRopesWithoutCargo);
if((count _activeRopes) == 0) exitWith { false };
true;
