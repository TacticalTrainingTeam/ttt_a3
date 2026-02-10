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

// Correct width and length factor for air
private _widthFactor = ASL_WIDTH_FACTOR_DEFAULT;
private _lengthFactor = ASL_LENGTH_FACTOR_DEFAULT;
if (_vehicle isKindOf "Air") then {
    _widthFactor = ASL_WIDTH_FACTOR_AIR;
};
if (_vehicle isKindOf "Helicopter") then {
    _widthFactor = ASL_WIDTH_FACTOR_HELI;
    _lengthFactor = ASL_LENGTH_FACTOR_HELI;
};

private _centerOfMass = getCenterOfMass _vehicle;
private _bbr = boundingBoxReal _vehicle;
private _p1 = _bbr select 0;
private _p2 = _bbr select 1;
private _maxWidth = abs ((_p2 select 0) - (_p1 select 0));
private _widthOffset = ((_maxWidth / 2) - abs (_centerOfMass select 0)) * _widthFactor;
private _maxLength = abs ((_p2 select 1) - (_p1 select 1));
private _lengthOffset = ((_maxLength / 2) - abs (_centerOfMass select 1)) * _lengthFactor;
private _maxHeight = abs ((_p2 select 2) - (_p1 select 2));
private _heightOffset = _maxHeight / ASL_HEIGHT_DIVISOR;

private _rearCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) - _lengthOffset, (_centerOfMass select 2) + _heightOffset];
private _rearCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) - _lengthOffset, (_centerOfMass select 2) + _heightOffset];
private _frontCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) + _lengthOffset, (_centerOfMass select 2) + _heightOffset];
private _frontCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) + _lengthOffset, (_centerOfMass select 2) + _heightOffset];

[_rearCorner, _rearCorner2, _frontCorner, _frontCorner2];
