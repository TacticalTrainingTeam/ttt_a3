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
if(!isNil QGVAR(ROPE_INIT)) exitWith {};

GVAR(ROPE_INIT) = true;
INFO("Advanced Sling Loading Loading...");

GVAR(Sling_Load_Point_Class_Height_Offset) = [
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

GVAR(Supported_Vehicles) = [
    "Helicopter",
    "VTOL_Base_F"
];

GVAR(Sling_Rules) = [
    ["All","CAN_SLING","All"]
];


//ToDo Remove spawn and sleep
if(!isDedicated) then {
    [] spawn {
        while {true} do {
            if(!isNull ACE_player && isPlayer ACE_player) then {
                if!( ACE_player getVariable [QGVAR(actions_loaded),false] ) then {
                    call FUNC(addPlayerActions);
                    ACE_player setVariable [QGVAR(actions_loaded),true];
                };
            };
            missionNamespace setVariable [QGVAR(nearby_vehicles), (call FUNC(findNearbyVehicles))];
            sleep 2;
        };
    };
};

if(isServer) then {

    // Adds support for exile network calls (Only used when running exile) //

    GVAR(Supported_RemoteExecServer_Functions) = [
        QFUNC(customHideObjectGlobal)
    ];

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

   GVAR(Supported_RemoteExecClient_Functions) = [
        QFUNC(pickupropes),
        QFUNC(deployRopesIndex),
        QFUNC(ropeSetMass),
        QFUNC(extendRopes),
        QFUNC(shortenRopes),
        QFUNC(releaseCargo),
        QFUNC(retractRopes),
        QFUNC(deployRopes),
        QFUNC(customHint),
        QFUNC(attachRopes),
        QFUNC(dropRopes)
    ];

    ExileServer_AdvancedSlingLoading_network_AdvancedSlingLoadingRemoteExecClient = {
        params ["_sessionId", "_messageParameters"];
        _messageParameters params ["_params","_functionName","_target",["_isCall",false]];
        if(_functionName in GVAR(Supported_RemoteExecClient_Functions)) then {
            if(_isCall) then {
                _params remoteExecCall [_functionName, _target];
            } else {
                _params remoteExec [_functionName, _target];
            };
        };
    };

    // Install Advanced Sling Loading on all clients (plus JIP) //

    publicVariable "ASL_Advanced_Sling_Loading_Install";
    remoteExecCall ["ASL_Advanced_Sling_Loading_Install", -2, true];

};

// Disable Old Script Version on SA Server
SA_Rope_Action_Check = {false};
SA_Rope_Pickup_Rope_Action_Check = {false};
SA_Rope_Drop_Rope_Action_Check = {false};
SA_Rope_Attach_Rope_Action_Check = {false};

INFO("Advanced Sling Loading Loaded");
