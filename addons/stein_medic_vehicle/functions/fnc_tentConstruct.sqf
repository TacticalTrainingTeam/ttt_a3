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
* [unit] call ttt_stein_medic_vehicle_fnc_tentConstruct;
*
* Public: No
*/

params ["_target", "_caller"];

private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];
_medicTent = GVAR(facitlityObject) createVehicle _position;
_medicTent setDir (getDir _target);

_medicTent setVariable ["ace_medical_isMedicalFacility", true, true];
_medicTent setVariable ["inUse", false, true];
{_medicTent animate [_x, 1];} forEach ["door1_hide","door2_hide","roof_1_solar_hide","roof_1_nosolar_unhide","roof_2_solar_hide","roof_2_nosolar_unhide"];
_medicTent animateSource ["MedSign_Hide", 0];
_medicTent allowDamage false;
[_target, (_target getVariable ["fuel", 100])] remoteExec ["setFuel", (owner _target), false];

_caller switchMove "";
