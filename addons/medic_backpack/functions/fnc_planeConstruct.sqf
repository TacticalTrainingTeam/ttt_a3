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
_plane = (GVAR(facitlityObject)) createVehicle _position;
_plane setDir (getDir _target);

_plane setVariable ["ace_medical_isMedicalFacility", true, true];
_plane setVariable ["ttt_medic_backpack_inUse", false, true];
(unitBackpack _target) setVariable ["ttt_medic_backpack_hasTent", false, true];
[_plane, false] remoteExec ["allowDamage", (owner _plane), false];

{
    private _posItem = (getPos _plane) findEmptyPosition [1, 3, "Tank"];
    _x createVehicle _posItem;
} forEach (parseSimpleArray GVAR(additionalItems));

private _arrayItems = nearestObjects [(getPos _plane), (parseSimpleArray GVAR(additionalItems)), 10];
{
    _x addCuratorEditableObjects [([_plane] + _arrayItems), false];
} forEach allCurators;

_target switchMove "";
