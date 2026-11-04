#include "..\script_component.hpp"
/*
 * Author: Andx
 * Removes the supply vehicle designation from a vehicle. Its cargo is left untouched.
 *
 * Can be called on any machine; on a client the request is forwarded to the server.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [myTruck] call ttt_drone_crafting_fnc_removeVehicle;
 *
 * Public: Yes
 */

params [["_vehicle", objNull, [objNull]]];

if (isNull _vehicle) exitWith {};

if (!isServer) exitWith {
    [QGVAR(removeVehicle), [_vehicle]] call CBA_fnc_serverEvent;
};

GVAR(vehicles) = GVAR(vehicles) select {alive _x && {_x != _vehicle}};
publicVariable QGVAR(vehicles);

INFO_1("Supply vehicle removed: %1",_vehicle);
