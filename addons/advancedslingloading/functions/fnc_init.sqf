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
 * [params] call ttt_advancedslingloading_fnc_init
 *
 * Public: No
 */

params [];

// Prevent advanced sling loading from installing twice
if(!isNil "ASL_ROPE_INIT") exitWith {};
ASL_ROPE_INIT = true;
INFO("Advanced Sling Loading Loading...");

ASL_Sling_Load_Point_Class_Height_Offset = [
    ["All", [-0.05, -0.05, -0.05]],
    ["UK3CB_BAF_Merlin_HC3_18", [-0.05, -0.05, -0.05]],
    ["UK3CB_BAF_Merlin_HC3_18_GPMG", [-0.05, -0.05, -0.05]],
    ["UK3CB_BAF_Merlin_HC3_24", [-0.05, -0.05, -0.05]],
    ["UK3CB_BAF_Merlin_HC3_32", [-0.05, -0.05, -0.05]],
    ["UK3CB_BAF_Merlin_HC3_CSAR", [-0.05, -0.05, -0.05]],
    ["UK3CB_ADA_B_Mi8", [-0.05, -0.05, -0.05]],
    ["CUP_CH47F_base", [-0.05, -2, -0.05]],
    ["CUP_AW159_Unarmed_Base", [-0.05, -0.06, -0.05]],
    ["RHS_CH_47F", [-0.75, -2.6, -0.75]],
    ["rhsusf_CH53E_USMC", [-0.8, -1, -1.1]],
    ["rhsusf_CH53E_USMC_D", [-0.8, -1, -1.1]],
    ["Cup_B_MV22_USMC", [-0.05, -0.05, -0.05]],
    ["CUP_B_MI6A_CDF", [-0.8, -1, -1.1]],
    ["B_Heli_Transport_03_F", [-0.35, -0.15, -0.05]],
    ["RHS_UH60M2_d", [-0.05, -0.05, -0.05]],
    ["B_T_VTOL_01_Vehicle_F", [-0.9, -0.9, -0.9]] //ToDo Hatchet Mod
];

ASL_Supported_Vehicles = [
    "Helicopter",
    "VTOL_Base_F"
];

ASL_Sling_Rules = [
    ["All","CAN_SLING","All"]
];

if(!isDedicated) then {
    [] spawn {
        while {true} do {
            if(!isNull ACE_player && isPlayer ACE_player) then {
                if!( ACE_player getVariable [QGVAR(actions_loaded),false] ) then {
                    [] call FUNC(addPlayerActions);
                    ACE_player setVariable [GVAR(actions_loaded),true];
                };
            };
            missionNamespace setVariable [QGVAR(nearby_vehicles), (call FUNC(findNearbyVehicles))];
            sleep 2;
        };
    };
};

if(isServer) then {

    // Adds support for exile network calls (Only used when running exile) //

    ASL_Supported_RemoteExecServer_Functions = ["ASL_Hide_Object_Global"];

    ExileServer_AdvancedSlingLoading_network_AdvancedSlingLoadingRemoteExecServer = {
        params ["_sessionId", "_messageParameters",["_isCall",false]];
        _messageParameters params ["_params","_functionName"];
        if(_functionName in ASL_Supported_RemoteExecServer_Functions) then {
            if(_isCall) then {
                _params call (missionNamespace getVariable [_functionName,{}]);
            } else {
                _params spawn (missionNamespace getVariable [_functionName,{}]);
            };
        };
    };

    ASL_Supported_RemoteExecClient_Functions = ["ASL_Pickup_Ropes","ASL_Deploy_Ropes_Index","ASL_Rope_Set_Mass","ASL_Extend_Ropes","ASL_Shorten_Ropes","ASL_Release_Cargo","ASL_Retract_Ropes","ASL_Deploy_Ropes","ASL_Hint","ASL_Attach_Ropes","ASL_Drop_Ropes"];

    ExileServer_AdvancedSlingLoading_network_AdvancedSlingLoadingRemoteExecClient = {
        params ["_sessionId", "_messageParameters"];
        _messageParameters params ["_params","_functionName","_target",["_isCall",false]];
        if(_functionName in ASL_Supported_RemoteExecClient_Functions) then {
            if(_isCall) then {
                _params remoteExecCall [_functionName, _target];
            } else {
                _params remoteExec [_functionName, _target];
            };
        };
    };

    // Install Advanced Sling Loading on all clients (plus JIP) //

    publicVariable "ASL_Advanced_Sling_Loading_Install";
    remoteExecCall ["ASL_Advanced_Sling_Loading_Install", -2,true];

};

// Disable Old Script Version on SA Server
SA_Rope_Action_Check = {false};
SA_Rope_Pickup_Rope_Action_Check = {false};
SA_Rope_Drop_Rope_Action_Check = {false};
SA_Rope_Attach_Rope_Action_Check = {false};

INFO("Advanced Sling Loading Loaded");
