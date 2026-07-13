#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
* 
* Arguments:
* 0: Player <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target"];

private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
private _plane = ("Tarp_01_small_Red_F") createVehicle _position;
_plane setDir (getDir _target);
private _pad = ("Land_HelipadEmpty_F") createVehicle _position;

_plane setVariable ["ttt_dronepanel_inUse", false, true];
(unitBackpack _target) setVariable ["ttt_dronepanel_hasTarp", false, true];

_target switchMove "";
