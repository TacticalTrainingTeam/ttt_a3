#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Locks 2 Seats in the NH90 that float underneath the cabin.
 *
 * Arguments:
 * 0: Helicopter <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [helicopter] call ttt_compat_bwa3_fnc_lockNH90seats
 *
 * Public: No
 */

params ["_helicopter"];

_helicopter lockCargo [25, true];
_helicopter lockCargo [26, true];