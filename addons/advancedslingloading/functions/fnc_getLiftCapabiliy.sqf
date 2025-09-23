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
 * [params] call PREFIX_advancedslingloading_fnc_getLiftCapabiliy
 *
 * Public: No
 */

params ["_vehicle"];

private ["_slingLoadMaxCargoMass"];
_slingLoadMaxCargoMass = getNumber (configOf _vehicle >> "slingLoadMaxCargoMass");
if(_slingLoadMaxCargoMass <= 0) then {
    _slingLoadMaxCargoMass = 4000;
};
_slingLoadMaxCargoMass;
