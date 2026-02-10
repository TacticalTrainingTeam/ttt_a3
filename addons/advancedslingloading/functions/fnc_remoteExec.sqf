#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Execute remote function with Exile support
 *
 * Arguments:
 * 0: Parameters <ANY>
 * 1: Function name <STRING>
 * 2: Target <NUMBER, OBJECT, STRING>
 * 3: Is call (optional, default false) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[_cargo, 1000], "ASL_Rope_Set_Mass", _cargo, true] call ttt_advancedslingloading_fnc_remoteExec
 *
 * Public: No
 */

params ["_params", "_functionName", "_target", ["_isCall", false]];
if (isNil "ExileClient_system_network_send") then {
    if (_isCall) then {
        _params remoteExecCall [_functionName, _target];
    } else {
        _params remoteExec [_functionName, _target];
    };
} else {
    ["AdvancedSlingLoadingRemoteExecClient", [_params, _functionName, _target, _isCall]] call ExileClient_system_network_send;
};
