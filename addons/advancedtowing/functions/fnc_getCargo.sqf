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
 * [params] call PREFIX_advancedtowing_fnc_getCargo
 *
 * Public: No
 */

params ["_vehicle", "_cargo"];

if( ropeAttachedObjects _vehicle isEqualTo [] ) then {
    _cargo = objNull;
} else {
    _cargo = ((ropeAttachedObjects _vehicle) select 0) getVariable [QGVAR(Cargo), objNull];
};
