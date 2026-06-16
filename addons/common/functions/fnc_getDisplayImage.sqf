#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Gets a usable display image for a given class.
 *
 * Arguments:
 * 0: Class <OBJECT>
 * 1: Root <OBJECT>
 *
 * Return Value:
 * Display image path <STRING>
 *
 * Example:
 * [params] call ttt_mpls_fnc_getDisplayImage
 *
 * Public: No
 */

params ["_class", "_root"];
TRACE_1("fnc_getDisplayImage",_this);

private _cfg = configFile >> _root >> _class;
if (!isClass _cfg) exitWith {""};

private _fields = ["picture", "icon", "pictureSmall"];
private _p = "";
{
    _p = getText (_cfg >> _x);
    if (_p != "") exitWith {_p};
} forEach _fields;

_p
