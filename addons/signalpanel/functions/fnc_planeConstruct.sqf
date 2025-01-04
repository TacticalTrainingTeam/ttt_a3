#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
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
_plane = ("Tarp_01_Large_Red_F") createVehicle _position;
_plane setDir (getDir _target);

_plane setVariable ["inUse", false, true];
(unitBackpack _target) setVariable ["hasTent", false, true];

_target switchMove "";