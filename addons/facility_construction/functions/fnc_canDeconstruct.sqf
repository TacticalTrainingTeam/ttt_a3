#include "..\script_component.hpp"
/*
* Author: Andx, originally by EinStein
*
* ACE self-interaction condition for the deconstruct action.
*
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Context <HASHMAP>
*
* Return Value:
* Whether deconstruction is currently possible <BOOLEAN>
*
* Public: No
*/

(_this select 0) params ["_target", "_caller", "_context"];

private _varPrefix = _context get "varPrefix";
private _vehicle = _target getVariable [_varPrefix + "_vehicle", objNull];

!isNull _vehicle &&
{!(_target getVariable [_varPrefix + "_inUse", false])} &&
{!(_vehicle getVariable [_varPrefix + "_hasFacility", true])}
