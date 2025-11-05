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
_workshop = GVAR(facilityObject) createVehicle _position;
_workshop setDir (getDir _target);

_workshop setVariable ["ACE_isRepairFacility", true, true];
_workshop setVariable ["ttt_repair_vehicle_inUse", false, true];
[_workshop, false] remoteExec ["allowDamage", (owner _workshop), false];
[_target, (_target getVariable ["ttt_repair_vehicle_fuel", 100])] remoteExec ["setFuel", (owner _target), false];

{
    _x addCuratorEditableObjects [[_workshop], false];
} forEach allCurators;

_caller switchMove "";
