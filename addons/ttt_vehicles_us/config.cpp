#include "\ttt_a3\ttt_vehicles_us\macros.hpp"

class CfgPatches {
    class TTT_Vehicles_US {
        requiredAddons[] = {"ttt_main"};
        units[] = {
                    "TTT_LUV_COM_US_Desert",
                    "TTT_LUV_COM_US_Woodland",
                    "TTT_LUV_SAR_US_Desert",
                    "TTT_LUV_SAR_US_Woodland",
                    "TTT_LUV_LOG_US_Desert",
                    "TTT_LUV_LOG_US_Woodland",
                    "TTT_IMV_MG_US_Desert",
                    "TTT_IMV_MG_US_Woodland",
                    "TTT_IMV_GL_US_Desert",
                    "TTT_IMV_GL_US_Woodland",
                    "TTT_IFV_US_Desert",
                    "TTT_IFV_US_Woodland",
                    "TTT_MBT_US_Desert",
                    "TTT_MBT_US_Woodland",
                    "TTT_MTA_SAR_US_Desert",
                    "TTT_MTA_SAR_US_Woodland",
                    "TTT_MTA_Medium_US_Desert",
                    "TTT_MTA_Medium_US_Woodland",
                    "TTT_MTA_Heavy_US_Desert",
                    "TTT_MTA_Heavy_US_Woodland",
                    "TTT_UAV_US_Desert",
                    "TTT_UAV_US_Woodland",
                    "TTT_AH_US_Desert",
                    "TTT_AH_US_Woodland"

        };
        weapons[] = {};
    };
};

class CfgVehicleClasses {
    class TTT_Vehicles_US {
        displayName = "$STR_TTT_Vehilce_US";    //In-game name
        priority = 24;                          // How far down it is on the menu
    };
};

class CfgVehicles {
    // External class references
    class UK3CB_BAF_Coyote_Passenger_L134A1_D;
    class UK3CB_BAF_Coyote_Passenger_L134A1_W;
    class UK3CB_BAF_Coyote_Passenger_L111A1_D;
    class UK3CB_BAF_Coyote_Passenger_L111A1_W;
    class RHS_M2A3_BUSKIII;
    class RHS_AH64D;
    class RHS_UH60M;
    class RHS_CH_47F;
    class rhsusf_m1a2sep1tuskiid_usarmy;
    class rhsusf_m998_w_4dr_fulltop;
    class rhsusf_m998_d_4dr_fulltop;
    class rhsusf_m998_d_2dr_fulltop;
    class rhsusf_m998_d_2dr;
    class rhsusf_m998_w_2dr;
    class CUP_B_USMC_MQ9;

    #include "\ttt_a3\ttt_vehicles_us\vehicles_desert.hpp"
    #include "\ttt_a3\ttt_vehicles_us\vehicles_woodland.hpp"
};