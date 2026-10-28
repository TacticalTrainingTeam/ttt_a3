#include "..\script_component.hpp"
/*
 * Author: Andx
 * Damage handler of vehicles with a DUKE. Asks the server to sync the jammer, as destroyed antennas
 * shorten the range or stop the DUKE.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_rhs_fnc_onDammaged
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

// Nothing to follow while the DUKE is off. A pending sync also covers every further hit within the delay
if (!(_vehicle getVariable [DUKE_STATE_VAR, false]) || {_vehicle getVariable [QGVAR(syncPending), false]}) exitWith {};

_vehicle setVariable [QGVAR(syncPending), true];

[{
    params ["_vehicle"];

    _vehicle setVariable [QGVAR(syncPending), false];
    [QGVAR(syncJammer), [_vehicle]] call CBA_fnc_serverEvent;
}, [_vehicle], DUKE_SYNC_DELAY] call CBA_fnc_waitAndExecute;
