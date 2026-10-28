#include "..\script_component.hpp"
/*
 * Author: Andx
 * Fired handler of the DUKE toggle "ammo". Asks the server to sync the jammer once RHS has switched its state.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_rhs_fnc_onFired
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

// RHS only switches its state variable in a spawned script, reading it now would give the old value
[{
    [QGVAR(syncJammer), _this] call CBA_fnc_serverEvent;
}, [_vehicle], DUKE_SYNC_DELAY] call CBA_fnc_waitAndExecute;
