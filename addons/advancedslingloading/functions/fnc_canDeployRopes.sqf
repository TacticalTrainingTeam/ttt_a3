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
 * [params] call ttt_advancedslingloading_fnc_canDeployRopes
 *
 * Public: No
 */

params ["_vehicle"];

private ["_existingRopes","_activeRopes"];

if(ACE_player distance _vehicle > 10) exitWith { false };
if!([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };
_existingVehicle = ACE_player getVariable ["ASL_Ropes_Vehicle", []];
if(count _existingVehicle > 0) exitWith { false };
_existingRopes = _vehicle getVariable ["ASL_Ropes",[]];
if((count _existingRopes) == 0) exitWith { true };
_activeRopes = [_vehicle] call FUNC(getActiveRopes);
if((count _existingRopes) > 0 && (count _existingRopes) == (count _activeRopes)) exitWith { false };

true;
