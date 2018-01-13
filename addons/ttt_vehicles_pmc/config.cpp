#include "\ttt_a3\ttt_vehicles_pmc\macros.hpp"

class CfgPatches {
	class TTT_Vehicles_PMC {
		requiredAddons[] = {"ttt_main"};		
		units[] = {	
					"TTT_LUV_LOG_PMC",				
					"TTT_IMV_MG_PMC",
					"TTT_IMV_TOW_PMC", 
					"TTT_IMV_AA_PMC",
					"TTT_IFV_PMC",	
					"TTT_MTA_Light_PMC",	
					"TTT_MTA_Medium_PMC",												
					"TTT_MTA_Heavy_PMC",
					"TTT_MRCA_PMC"
		};
		weapons[] = {};
	};
};

class CfgVehicleClasses {
	class TTT_Vehicles_PMC {
		displayName = "$STR_TTT_Vehilce_PMC";	//In-game name
		priority = 25; 							// How far down it is on the menu
	};
};

class CfgVehicles {
	// External class references
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_T_VTOL_01_vehicle_F;
    class CUP_B_HMMWV_Avenger_USMC;
    class CUP_B_HMMWV_TOW_USMC;
    class rhsusf_m1025_w_s_m2;
    class rhsusf_m998_w_s_2dr_fulltop;
	class rhsusf_M1117_W;
	class RHS_MELB_MH6M;
	class UK3CB_BAF_Merlin_HC3_24;

	#include "\ttt_a3\ttt_vehicles_pmc\vehicles.hpp"
};