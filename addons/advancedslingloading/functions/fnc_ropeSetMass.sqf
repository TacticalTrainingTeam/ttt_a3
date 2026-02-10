#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Sets the mass of an object
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Mass in kg <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_object, 1000] call ttt_advancedslingloading_fnc_ropeSetMass
 *
 * Public: No
 */

private ["_obj","_mass"];
_obj = [_this,0] call BIS_fnc_param;
_mass = [_this,1] call BIS_fnc_param;
_obj setMass _mass;
