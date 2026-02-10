#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if ropes can be shortened
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Can shorten ropes <BOOL>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_canShortenRopes
 *
 * Public: No
 */

params ["_vehicle"];
private ["_existingRopes","_activeRopes"];
if(player distance _vehicle > 10) exitWith { false };
if!([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };
_existingRopes = _vehicle getVariable ["ASL_Ropes",[]];
if((count _existingRopes) == 0) exitWith { false };
_activeRopes = [_vehicle] call FUNC(getActiveRopes);
if((count _activeRopes) == 0) exitWith { false };
true;
