#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller"];

private _position = (_target getPos [-10, getDir _target]) findEmptyPosition [2, 10, "Tank"];
_medicTent = GVAR(facitlityObject) createVehicle _position;
_medicTent setDir (getDir _target);

_medicTent setVariable ["ace_medical_isMedicalFacility", true, true];
_medicTent setVariable ["ttt_medic_vehicle_inUse", false, true];
{_medicTent animate [_x, 1];} forEach ["door1_hide","door2_hide","roof_1_solar_hide","roof_1_nosolar_unhide","roof_2_solar_hide","roof_2_nosolar_unhide"];
_medicTent animateSource ["MedSign_Hide", 0];
_medicTent allowDamage false;
[_target, (_target getVariable ["ttt_medic_vehicle_fuel", 100])] remoteExec ["setFuel", (owner _target), false];

{
    _x addCuratorEditableObjects [[_medicTent], false];
} forEach allCurators;

_caller switchMove "";
