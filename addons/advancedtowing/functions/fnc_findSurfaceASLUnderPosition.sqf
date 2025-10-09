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
 * [params] call PREFIX_advancedtowing_fnc_findSurfaceASLUnderPosition
 *
 * Public: No
 */

params ["_object", "_positionAGL", "_canFloat"];

private _objectASL = AGLToASL (_object modelToWorldVisual (getCenterOfMass _object));
private _surfaceIntersectStartASL = [_positionAGL select 0, _positionAGL select 1, (_objectASL select 2) + 1];
private _surfaceIntersectEndASL = [_positionAGL select 0, _positionAGL select 1, (_objectASL select 2) - 5];
private _surfaces = lineIntersectsSurfaces [_surfaceIntersectStartASL, _surfaceIntersectEndASL, _object, objNull, true, 5];
private _returnSurfaceASL = AGLToASL _positionAGL;

{
    scopeName "surfaceLoop";
    if( isNull (_x select 2) ) then {
        _returnSurfaceASL = _x select 0;
        breakOut "surfaceLoop";
    } else {
        if!((_x select 2) isKindOf "RopeSegment") then {
            _objectFileName = str (_x select 2);
            if((_objectFileName find " t_") == -1 && (_objectFileName find " b_") == -1) then {
                _returnSurfaceASL = _x select 0;
                breakOut "surfaceLoop";
            };
        };
    };
} forEach _surfaces;

if(_canFloat && (_returnSurfaceASL select 2) < 0) then {
    _returnSurfaceASL set [2, 0];
};

_returnSurfaceASL
