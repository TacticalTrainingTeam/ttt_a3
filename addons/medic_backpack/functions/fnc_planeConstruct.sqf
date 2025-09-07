#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Arguments:
* 0: Player <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target"];

private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
_plane = createVehicle [(GVAR(facitlityObject)), _position, [], 0, "CAN_COLLIDE"];
_plane setDir (getDir _target);

_plane setVariable ["ace_medical_isMedicalFacility", true, true];
_plane setVariable ["ttt_medic_backpack_inUse", false, true];
(unitBackpack _target) setVariable ["ttt_medic_backpack_hasTent", false, true];
[_plane, false] remoteExec ["allowDamage", (owner _plane), false];

{
    createVehicle [_x, _position, [], 2, "NONE"];
} forEach (parseSimpleArray GVAR(additionalItems));

private _arrayItems = nearestObjects [(getPos _plane), (parseSimpleArray GVAR(additionalItems)), 10];
{
    _x addCuratorEditableObjects [([_plane] + _arrayItems), false];
} forEach allCurators;

_target switchMove "";
INFO_3("Medical backpack item %1 was created at %2 by %3",_plane,_position,_target);
