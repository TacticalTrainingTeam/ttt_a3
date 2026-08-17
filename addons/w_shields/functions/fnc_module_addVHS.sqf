#include "..\script_component.hpp"
/*
* Author: [W] Miller (reworked by Andx)
*
* Description:
* Init function for the Zeus "Vehicleshield hinzufügen" module. Resolves the vehicle the module was attached to
* and, unless it already has a shield, dispatches QGVAR(addVehicleShield) as a global JIP event so the
* HandleDamage handler ends up added on whichever machine the vehicle is actually local to, not just the server.
*
* Arguments:
* 0: Module logic <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_logic"];

private _target = attachedTo _logic;
deleteVehicle _logic;

if (_target getVariable [QGVAR(hasVHS), false]) exitWith { hintSilent "Dieses Fahrzeug hat bereits ein VehicleShield"}; //ToDo Localize

[QGVAR(addVehicleShield), [_target]] call CBA_fnc_globalEventJIP;
