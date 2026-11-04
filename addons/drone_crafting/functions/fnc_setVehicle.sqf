#include "..\script_component.hpp"
/*
 * Author: Andx
 * Designates an object with cargo space (usually a vehicle) as a drone supply vehicle. Players
 * within range of it get the drone crafting ACE self-interaction. Several supply vehicles can
 * exist at the same time.
 *
 * Can be called on any machine; on a client the request is forwarded to the server.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Replace the cargo with the starting stock (CBA setting) <BOOL> (default: true)
 *
 * Return Value:
 * None
 *
 * Example:
 * [myTruck] call ttt_drone_crafting_fnc_setVehicle;
 * [myTruck, false] call ttt_drone_crafting_fnc_setVehicle; // keep the current inventory
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_fillStock", true, [true]]
];

if (isNull _vehicle || {_vehicle isKindOf "CAManBase"}) exitWith {
    WARNING_1("setVehicle: %1 can't be a supply vehicle",_vehicle);
};

if (!isServer) exitWith {
    [QGVAR(setVehicle), [_vehicle, _fillStock]] call CBA_fnc_serverEvent;
};

// Module functions and init scripts (initServer.sqf) run scheduled. Refilling the cargo must
// not be interrupted by a craft request in between, so continue unscheduled.
if (canSuspend) exitWith {
    [FUNC(setVehicle), [_vehicle, _fillStock]] call CBA_fnc_directCall;
};

if (_fillStock) then {
    [_vehicle, true] call FUNC(fillStock);
};

GVAR(vehicles) = GVAR(vehicles) select {alive _x};
GVAR(vehicles) pushBackUnique _vehicle;
publicVariable QGVAR(vehicles);

INFO_2("Supply vehicle set: %1 (stock loaded: %2)",_vehicle,_fillStock);
