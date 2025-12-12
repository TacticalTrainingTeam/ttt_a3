#include "..\script_component.hpp"
/*
 * Authors: Andx, joko
 * Initializes a full screen loading screen with mission image and text.
 *
 * Arguments:
 * 0: Display - The loading screen display (RscDisplayLoading)
 *
 * Return Value:
 * Success <BOOLEAN>
 *
 * Example:
 * [display] call ttt_fsml_fnc_initLoadingScreen
 *
 * Public: No
 */

params ["_display"];
TRACE_1("fnc_initLoadingScreen",_this);

private _imgPath = getMissionConfigValue ["loadScreen", ""];
private _author = getMissionConfigValue ["author", "Tactical Training Team"];
private _name = getMissionConfigValue ["OnLoadName", ""];
private _slogan = getMissionConfigValue ["OnLoadMission", ""];

if (_imgPath isEqualTo "") exitWith {false;};

private _background = _display ctrlCreate ["RscPicture", -1];

_background ctrlSetPosition [
    safeZoneXAbs,
    safeZoneY,
    safeZoneWAbs,
    safeZoneH
];

_background ctrlCommit 0;
_background ctrlSetText "#(rgb,8,8,3)color(0,0,0,1)";

private _size = 0.5;
private _width = 1 * safeZoneW;
private _height = 0.57 * safeZoneH * (getResolution#4);
private _picture = _display ctrlCreate ["RscPicture", -1];

_picture ctrlSetPosition [
    _size-_width/2,
    _size-_height/2,
    _width, _height
];

_picture ctrlCommit 0;
_picture ctrlSetText _imgPath;

private _text = _display ctrlCreate ["RscLoadingText", -1];

_text ctrlSetPosition [
    _size-_width/2,
    safeZoneY + 0.05,
    _width,
    0.1
];

_text ctrlCommit 0;
private _string = [_name, "by", _author] joinString " ";
_text ctrlSetText _string;

private _text2 = _display ctrlCreate ["RscLoadingText", -1];

_text2 ctrlSetPosition [
    _size-_width/2,
    safeZoneY + safeZoneH - 0.15,
    _width,
    0.1
];

_text2 ctrlCommit 0;
_text2 ctrlSetText _slogan;

true
