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
 * [params] call ttt_advancedslingloading_fnc_remoteExecServer
 *
 * Public: No
 */

params ["_params","_functionName",["_isCall",false]];

if(isNil "ExileClient_system_network_send") then {
    if(_isCall) then {
        _params remoteExecCall [_functionName, 2];
    } else {
        _params remoteExec [_functionName, 2];
    };
} else {
    ["AdvancedSlingLoadingRemoteExecServer",[_params,_functionName,_isCall]] call ExileClient_system_network_send;
};
