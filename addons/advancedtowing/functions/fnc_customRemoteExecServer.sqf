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
 * [params] call PREFIX_advancedtowing_fnc_customRemoteExecServer
 *
 * Public: No
 */

params ["_params", "_functionName", ["_isCall", false]];

if(_isCall) then {
    _params remoteExecCall [_functionName, 2];
} else {
    _params remoteExec [_functionName, 2];
};
