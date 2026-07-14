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
private _planeColor = switch (GVAR(tarpColor)) do {
    case 0: {"Tarp_01_Small_Black_F"};
    case 1: {"Tarp_01_Small_Green_F"};
    case 2: {"Tarp_01_Small_Red_F"};
    case 3: {"Tarp_01_Small_Yellow_F"};
    default {"Tarp_01_Small_Red_F"};
};

private _plane = (_planeColor) createVehicle _position;
_plane setDir (getDir _target);
private _pad = createVehicle ["Land_HelipadEmpty_F", _position, [], 0, "CAN_COLLIDE"];

_plane setVariable [QGVAR(helipad), _pad, true];

_plane setVariable ["ttt_dronepanel_inUse", false, true];
(unitBackpack _target) setVariable ["ttt_dronepanel_hasTarp", false, true];

_target switchMove "";
