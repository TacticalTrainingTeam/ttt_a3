#include "..\script_component.hpp"
/*
 * Authors: Andx, joko
 * Initializes a full screen loading screen with mission image and text.
 *
 * Arguments:
 * 0: Display - The loading screen display (RscDisplayLoading)
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_fsml_fnc_initLoadingScreen
 *
 * Public: No
 */

params ["_display"];
TRACE_1("fnc_initLoadingScreen",_this);

private _imgPath = getMissionConfigValue ["loadScreen", ""];

if (_imgPath isEqualTo "") exitWith {false;};

private _background = _display ctrlCreate ["RscPicture", -1];

_background ctrlSetPosition [
    safeZoneXAbs,
    safeZoneY,
    safeZoneWAbs,
    safeZoneH
];

_background ctrlCommit 0;
_background ctrlSetText "#(rgb,8,8,3)color(0.2,0.2,0.2,1)";

private _size = 0.5;
private _width = 1 * safeZoneW;
private _height = 0.57 * safeZoneH * (getResolution#4);
private _picture = _display ctrlCreate ["RscPicture", -1];

_picture ctrlSetPosition [
    0.5-_width/2,
    0.5-_height/2,
    _width, _height
];

_picture ctrlCommit 0;
_picture ctrlSetText _imgPath;

private _text = _display ctrlCreate ["RscLoadingText", -1];

_text ctrlSetPosition [
    0.5-_width/2,
    0.2,
    _width, _height
];

_text ctrlCommit 0;
_text ctrlSetText "";

true
