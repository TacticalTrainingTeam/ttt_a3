#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedtowing_fnc_getCornerPoints
 *
 * Public: No
 */

params ["_vehicle"];

// Correct width and length factor for air
private _widthFactor = 0.75;
private _lengthFactor = 0.75;

if(_vehicle isKindOf "Air") then {
    _widthFactor = 0.3;
};
if(_vehicle isKindOf "Helicopter") then {
    _widthFactor = 0.2;
    _lengthFactor = 0.45;
};

private _centerOfMass = getCenterOfMass _vehicle;
private _bbr = boundingBoxReal _vehicle;
private _p1 = _bbr select 0;
private _p2 = _bbr select 1;
private _maxWidth = abs ((_p2 select 0) - (_p1 select 0));
private _widthOffset = ((_maxWidth / 2) - abs ( _centerOfMass select 0 )) * _widthFactor;
private _maxLength = abs ((_p2 select 1) - (_p1 select 1));
private _lengthOffset = ((_maxLength / 2) - abs (_centerOfMass select 1 )) * _lengthFactor;
private _rearCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) - _lengthOffset, _centerOfMass select 2];
private _rearCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) - _lengthOffset, _centerOfMass select 2];
private _frontCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) + _lengthOffset, _centerOfMass select 2];
private _frontCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) + _lengthOffset, _centerOfMass select 2];

if(missionNamespace getVariable [QGVAR(DEBUG_ENABLED), false]) then {
    if(isNil "sa_tow_debug_arrow_1") then {
        sa_tow_debug_arrow_1 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
        sa_tow_debug_arrow_2 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
        sa_tow_debug_arrow_3 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
        sa_tow_debug_arrow_4 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
    };
    sa_tow_debug_arrow_1 setPosASL  AGLToASL (_vehicle modelToWorldVisual _rearCorner);
    sa_tow_debug_arrow_2 setPosASL  AGLToASL (_vehicle modelToWorldVisual _rearCorner2);
    sa_tow_debug_arrow_3 setPosASL  AGLToASL (_vehicle modelToWorldVisual _frontCorner);
    sa_tow_debug_arrow_4 setPosASL  AGLToASL (_vehicle modelToWorldVisual _frontCorner2);
};

[_rearCorner,_rearCorner2,_frontCorner,_frontCorner2];
