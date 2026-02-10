#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets the maximum lift capability of a vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Maximum lift capability in kg <NUMBER>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_ropeGetLiftCapability
 *
 * Public: No
 */

params ["_vehicle"];
private ["_slingLoadMaxCargoMass"];
_slingLoadMaxCargoMass = getNumber (configOf _vehicle >> "slingLoadMaxCargoMass");
if (_slingLoadMaxCargoMass <= 0) then {
    _slingLoadMaxCargoMass = 4000;
};
_slingLoadMaxCargoMass;
