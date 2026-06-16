#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Gets the display name for a given class.
 *
 * Arguments:
 * 0: Root <OBJECT>
 * 1: Class <OBJECT>
 *
 * Return Value:
 * Display name <STRING>
 *
 * Example:
 * [params] call ttt_mpls_fnc_getDisplayName
 *
 * Public: No
 */

params ["_root","_class"];
TRACE_1("fnc_getDisplayName",_this);

if (isNil "_class" || _class == "") exitWith {""};
if (!isClass (configFile >> _root >> _class)) exitWith { _class };
private _dn = getText (configFile >> _root >> _class >> "displayName");
[_dn, _class] select (_dn isEqualTo "");

_dn
