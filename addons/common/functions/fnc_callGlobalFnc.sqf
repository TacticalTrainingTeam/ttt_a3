#include "..\script_component.hpp"
/*
 * Author: Andx
 * Calls a function with the given arguments on every machine, including JIP
 * clients, via the JIP-enabled QGVAR(call) CBA event registered in XEH_preInit.
 *
 * Arguments:
 * 0: Arguments passed to the function <ANY>
 * 1: Function <CODE>
 *
 * Return Value:
 * JIP ID of the event <STRING>
 *
 * Example:
 * [[_vehicle], ttt_w_shields_fnc_removeVehicleShield] call ttt_common_fnc_callGlobalFnc
 *
 * Public: No
 */

params ["_args", ["_function", {}, [{}]]];

[QGVAR(call), [_args, _function]] call CBA_fnc_globalEventJIP
