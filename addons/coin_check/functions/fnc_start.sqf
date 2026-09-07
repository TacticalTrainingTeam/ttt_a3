#include "..\script_component.hpp"
/*
 * Author: Andx
 * Requests a new coin check at the unit's position. The server decides whether to grant it -
 * only one check can be active at a time - and creates the shared ground weapon holder, then
 * announces the result to everyone.
 *
 * Arguments:
 * 0: Initiator <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit"];

[QGVAR(requestStart), [netId _unit, getPosATL _unit]] call CBA_fnc_serverEvent;
