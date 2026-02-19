#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Execute remote function on server with Exile support
 *
 * Arguments:
 * 0: Parameters <ANY>
 * 1: Function name <STRING>
 * 2: Is call (optional, default false) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[_helper], "ASL_Hide_Object_Global", false] call ttt_advancedslingloading_fnc_remoteExecServer
 *
 * Public: No
 */

params ["_params", "_functionName", ["_isCall", false]];
if (isNil "ExileClient_system_network_send") then {
    if (_isCall) then {
        _params remoteExecCall [_functionName, 2];
    } else {
        _params remoteExec [_functionName, 2];
    };
} else {
    ["AdvancedSlingLoadingRemoteExecServer", [_params, _functionName, _isCall]] call ExileClient_system_network_send;
};
