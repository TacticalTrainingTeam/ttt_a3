#include "..\script_component.hpp"
/*
 * Author: EinStein
 * 
 * Arguments:
 * 0: vehicle that is interacted with <OBJECT>
 * 1: player that is interacting with the vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * 
 *
 * Public: No
 */

(_this select 0) params ["_target", "_caller"];

private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];
_medicTent = GVAR(supportedObject) createVehicle _position;
_medicTent setVariable ["ace_medical_isMedicalFacility", true, true];
_medicTent setVariable ["inUse", false, true];
 // Disable damage on tent
_medicTent allowDamage false;
_caller switchMove "";
[_target, (_target getVariable ["fuel", 100])] remoteExec ["setFuel", (owner _target), false];