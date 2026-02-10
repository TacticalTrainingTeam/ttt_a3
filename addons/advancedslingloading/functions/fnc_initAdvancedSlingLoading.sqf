#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Initializes Advanced Sling Loading system
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_initAdvancedSlingLoading
 *
 * Public: No
 */

// Prevent advanced sling loading from installing twice
if(!isNil "ASL_ROPE_INIT") exitWith {};
ASL_ROPE_INIT = true;
INFO("Advanced Sling Loading Loading...");

// Initialize global configuration arrays
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
    ["B_T_VTOL_01_Vehicle_F", [-0.9, -0.9, -0.9]]
];

ASL_Supported_Vehicles = [
    "Helicopter",
    "VTOL_Base_F"
];

ASL_Sling_Rules = [
    ["All","CAN_SLING","All"]
];

// Client side initialization
if(!isDedicated) then {
    [] spawn {
        while {true} do {
            if(!isNull player && isPlayer player) then {
                if!( player getVariable ["ASL_Actions_Loaded",false] ) then {
                    [] call FUNC(addPlayerActions);
                    player setVariable ["ASL_Actions_Loaded",true];
                };
            };
            missionNamespace setVariable ["ASL_Nearby_Vehicles", (call FUNC(findNearbyVehicles))];
            sleep 2;
        };
    };
};

// Server side initialization
if(isServer) then {
    // Install Advanced Sling Loading on all clients (plus JIP) //

    ASL_Advanced_Sling_Loading_Install = {
        [] call FUNC(initAdvancedSlingLoading);
    };

    publicVariable "ASL_Advanced_Sling_Loading_Install";
    remoteExecCall ["ASL_Advanced_Sling_Loading_Install", -2,true];

};

// Disable Old Script Version on SA Server
SA_Rope_Action_Check = {false};
SA_Rope_Pickup_Rope_Action_Check = {false};
SA_Rope_Drop_Rope_Action_Check = {false};
SA_Rope_Attach_Rope_Action_Check = {false};

INFO("Advanced Sling Loading Loaded");
