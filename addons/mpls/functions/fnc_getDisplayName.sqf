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
 * [params] call PREFIX_mpls_fnc_getDisplayName
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
