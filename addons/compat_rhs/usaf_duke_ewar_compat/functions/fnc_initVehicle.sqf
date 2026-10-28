#include "..\script_component.hpp"
/*
 * Author: Andx
 * Prepares a vehicle with a DUKE so its state also drives a Crows radio jammer.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_rhs_fnc_initVehicle
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (getText (configOf _vehicle >> "rhs_duke_type") isEqualTo "") exitWith {};

// The Dammaged EH only fires where the vehicle is local, so it has to exist on every machine
_vehicle addEventHandler ["Dammaged", {_this call FUNC(onDammaged)}];

if (!isServer) exitWith {};

// Editor-placed vehicles initialise before Crows has registered its server event handlers
[{CBA_missionTime > 0}, LINKFUNC(registerJammer), [_vehicle]] call CBA_fnc_waitUntilAndExecute;
