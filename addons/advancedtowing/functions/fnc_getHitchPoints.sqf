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
 * [params] call PREFIX_advancedtowing_fnc_getHitchPoints
 *
 * Public: No
 */

params ["_vehicle"];

private _cornerPoints = [_vehicle] call FUNC(getCornerPoints);
private _rearCorner = _cornerPoints select 0;
private _rearCorner2 = _cornerPoints select 1;
private _frontCorner = _cornerPoints select 2;
private _frontCorner2 = _cornerPoints select 3;
private _rearHitchPoint = ((_rearCorner vectorDiff _rearCorner2) vectorMultiply 0.5) vectorAdd  _rearCorner2;
private _frontHitchPoint = ((_frontCorner vectorDiff _frontCorner2) vectorMultiply 0.5) vectorAdd  _frontCorner2;
//_sideLeftPoint = ((_frontCorner vectorDiff _rearCorner) vectorMultiply 0.5) vectorAdd  _frontCorner;
//_sideRightPoint = ((_frontCorner2 vectorDiff _rearCorner2) vectorMultiply 0.5) vectorAdd  _frontCorner2;

[_frontHitchPoint,_rearHitchPoint];
