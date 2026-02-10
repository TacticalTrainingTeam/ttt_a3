#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Gets the corner points of a vehicle's bounding box
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Array of corner points [rear, rear2, front, front2] <ARRAY>
 *
 * Example:
 * [_vehicle] call ttt_advancedslingloading_fnc_getCornerPoints
 *
 * Public: No
 */

params ["_vehicle"];
private ["_centerOfMass","_bbr","_p1","_p2","_rearCorner","_rearCorner2","_frontCorner","_frontCorner2"];
private ["_maxWidth","_widthOffset","_maxLength","_lengthOffset","_widthFactor","_lengthFactor","_maxHeight","_heightOffset"];

// Correct width and length factor for air
_widthFactor = 0.5;
_lengthFactor = 0.5;
if(_vehicle isKindOf "Air") then {
    _widthFactor = 0.3;
};
if(_vehicle isKindOf "Helicopter") then {
    _widthFactor = 0.2;
    _lengthFactor = 0.45;
};

_centerOfMass = getCenterOfMass _vehicle;
_bbr = boundingBoxReal _vehicle;
_p1 = _bbr select 0;
_p2 = _bbr select 1;
_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
_widthOffset = ((_maxWidth / 2) - abs ( _centerOfMass select 0 )) * _widthFactor;
_maxLength = abs ((_p2 select 1) - (_p1 select 1));
_lengthOffset = ((_maxLength / 2) - abs (_centerOfMass select 1 )) * _lengthFactor;
_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
_heightOffset = _maxHeight/6;

_rearCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) - _lengthOffset, (_centerOfMass select 2)+_heightOffset];
_rearCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) - _lengthOffset, (_centerOfMass select 2)+_heightOffset];
_frontCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) + _lengthOffset, (_centerOfMass select 2)+_heightOffset];
_frontCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) + _lengthOffset, (_centerOfMass select 2)+_heightOffset];

[_rearCorner,_rearCorner2,_frontCorner,_frontCorner2];
