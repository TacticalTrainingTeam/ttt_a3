#include "\ttt_a3\ttt_vehicles_bw\macros.hpp"

class CfgPatches {
	class ttt_vehicles_bw {
		requiredAddons[] = {"ttt_main"};		
		units[] = {	"TTT_IMV_MG_BW_Tropentarn",
					"TTT_IMV_MG_BW_Flecktarn", 
					"TTT_IMV_GL_BW_Tropentarn",
					"TTT_IMV_GL_BW_Flecktarn",
					"TTT_LUV_COM_BW_Tropentarn",
					"TTT_LUV_COM_BW_Flecktarn",
					"TTT_IFV_BW_Tropentarn",
					"TTT_IFV_BW_Flecktarn",
					"TTT_MBT_BW_Tropentarn",
					"TTT_MBT_BW_Flecktarn",
					"TTT_Heli_CAS_BW_Tropentarn",
					"TTT_Heli_CAS_BW_Flecktarn",
					"TTT_Heli_SAR_BW_Tropentarn",
					"TTT_Heli_SAR_BW_Flecktarn",
					"TTT_Heli_Heavy_BW_Tropentarn",
					"TTT_Heli_Heavy_BW_Flecktarn",
                    "TTT_Heli_Medium_BW_Tropentarn",
                    "TTT_Heli_Medium_BW_Flecktarn",
                    "TTT_Drone_BW_Tropentarn",
                    "TTT_Drone_BWFlecktarn",
                    "TTT_LUV_SAR_BW_Tropentarn",
                    "TTT_LUV_SAR_BW_Flecktarn",
                    "TTT_LUV_LOG_BW_Tropentarn",
                    "TTT_LUV_LOG_BW_Flecktarn",
                    "TTT_MRCA_BW_Tropentarn",
                    "TTT_MRCA_BW_Flecktarn"
        };
		weapons[] = {};
	};
};

class CfgVehicleClasses {
	// Fahrzeug-Gruppe
	class TTT_Vehicles_Bw {
		displayName = "$STR_TTT_Vehilce_BW"; //In-game name
		priority = 23; 						// How far down it is on the menu
	};
};

class CfgVehicles {
	// External class references
    class CUP_B_Dingo_Wdl;
    class CUP_B_Dingo_GL_Wdl;
    class BWA3_Puma_Tropen;
    class BWA3_Tiger_RMK_Universal;
    class NH90Armed;
    class CUP_B_CH53E_GER;
    class BWA3_Leopard2A6M_Tropen;
	class rhsusf_m998_w_4dr_fulltop;
	class rhsusf_m998_d_2dr_fulltop;
	class rhsusf_m998_w_2dr;
    class CUP_B_USMC_MQ9;
    class EAWS_EF2000_GER_SS;
	
	#include "\ttt_a3\ttt_vehicles_bw\vehicles_tropentarn.hpp"
	#include "\ttt_a3\ttt_vehicles_bw\vehicles_flecktarn.hpp"
};