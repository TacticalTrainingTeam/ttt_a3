#include "..\script_component.hpp"
/*
 * Author: EinStein
 * 
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Caller <OBJECT>
 * 2: Arguments <ARRAY>
 *
 * Return Value:
 * BOOLEAN
 *
 * Public: No
 */


(_this select 0) params ["_target", "_caller"];

private _return = true;
if (_target getVariable ["hasTent", true]) then {} else {_return = false;};

_return;
