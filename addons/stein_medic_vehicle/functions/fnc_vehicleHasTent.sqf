#include "..\script_component.hpp"
/*
 * Author: EinStein
 * 
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * BOOLEAN
 *
 * Example:
 * [vehicle] call ttt_stein_medic_vehicle_fnc_vehicleHasTent;
 *
 * Public: No
 */


params ["_target"];

_bool = true;

if (!(_target getVariable ["hasTent", true])) then {_bool = false;};

_bool;