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
 * [params] call ttt_advancedslingloading_fnc_ropeSetMass
 *
 * Public: No
 */

private ["_obj","_mass"];

_obj = [_this,0] call BIS_fnc_param;
_mass = [_this,1] call BIS_fnc_param;
_obj setMass _mass;
