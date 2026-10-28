#include "..\script_component.hpp"
/*
 * Author: Andx
 * Prepares a Dingo with CG13 so the CG13 switch also drives the Crows radio jammer.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle] call ttt_compat_bwa3_fnc_initVehicle
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (getNumber (configOf _vehicle >> "BWA3_hasECM") != 1) exitWith {};

// The Engine EH only fires where the vehicle is local, so it has to exist on every machine.
// BWA3 switches the CG13 off on engine stop without any event we could listen to.
_vehicle addEventHandler ["Engine", {
    params ["_vehicle", "_engineState"];

    if (!_engineState) then {
        [QGVAR(ecmToggled), [_vehicle, false]] call CBA_fnc_serverEvent;
    };
}];

if (!isServer) exitWith {};

// Editor-placed vehicles initialise before Crows has registered its server event handlers
[{CBA_missionTime > 0}, LINKFUNC(registerJammer), [_vehicle]] call CBA_fnc_waitUntilAndExecute;
