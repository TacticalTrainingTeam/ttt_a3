#include "..\script_component.hpp"
/*
 * Author: Andx
 * Tops a supply vehicle up to the starting stock (CBA setting) without clearing its cargo:
 * only what is missing from each stock entry is added, finished drones and anything else in the
 * cargo stay where they are.
 *
 * Can be called on any machine; on a client the request is forwarded to the server.
 *
 * Arguments:
 * 0: Supply vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [myTruck] call ttt_drone_crafting_fnc_restock;
 *
 * Public: Yes
 */

params [["_vehicle", objNull, [objNull]]];

if (isNull _vehicle) exitWith {};

if (!isServer) exitWith {
    [QGVAR(restock), [_vehicle]] call CBA_fnc_serverEvent;
};

// Same reason as in fnc_setVehicle.sqf: the cargo must not change halfway through a craft
if (canSuspend) exitWith {
    [FUNC(restock), [_vehicle]] call CBA_fnc_directCall;
};

if !(_vehicle in GVAR(vehicles)) exitWith {
    WARNING_1("restock: %1 is no supply vehicle",_vehicle);
};

[_vehicle, false] call FUNC(fillStock);
