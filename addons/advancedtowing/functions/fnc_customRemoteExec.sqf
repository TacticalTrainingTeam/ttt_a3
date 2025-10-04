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
 * [params] call PREFIX_advancedtowing_fnc_customRemoteExec
 *
 * Public: No
 */

params ["_params", "_functionName", "_target", ["_isCall", false]];

if(_isCall) then {
    _params remoteExecCall [_functionName, _target];
} else {
    _params remoteExec [_functionName, _target];
};
