#include "..\script_component.hpp"
/*
 * Authors: 
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_mpls_fnc_getDisplayImage
 *
 * Public: No
 */

params ["_class", "_root"];
TRACE_1("fnc_getDisplayImage",_this);

private _cfg = configFile >> _root >> _class;
if (!isClass _cfg) exitWith {""};

private _fields = ["picture", "icon", "pictureSmall"];
{
    private _p = getText (_cfg >> _x);
    if (_p != "") exitWith {_p};
} forEach _fields;

_p
