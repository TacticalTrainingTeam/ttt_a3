#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* ACE self-interaction condition for the construct action.
*
* Arguments:
* 0: Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Context <HASHMAP>
*
* Return Value:
* Whether construction is currently possible <BOOLEAN>
*
* Public: No
*/

(_this select 0) params ["_target", "_caller", "_context"];

_target getVariable [(_context get "varPrefix") + "_hasFacility", true]
