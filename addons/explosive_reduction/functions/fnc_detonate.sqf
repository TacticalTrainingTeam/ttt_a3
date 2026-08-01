#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Detonates an M112 demolition charge at the target's position and
* deletes the target object.
*
* Arguments:
* 0: Target Object <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target"];

if (isNull _target) exitWith {};

private _pos = getPosATL _target;

// Setting damage to 1 on a mine/charge ammo simulation object triggers its explosion
private _charge = "DemoCharge_Remote_Ammo" createVehicle _pos;
_charge setPosATL _pos;
_charge setDamage 1;

deleteVehicle _target;
