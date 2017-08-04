#include "\ttt_a3\ttt_vehicles_us\macros.hpp"

class CfgPatches {
	class ttt_vehicles_us {
		requiredAddons[] = {"ttt_main"};		
		units[] = {	"TTT_Truppfahrzeug_Mg_Us_Desert",
					"TTT_Truppfahrzeug_Mg_Us_Woodland", 
					"TTT_Truppfahrzeug_Gl_Us_Desert",
					"TTT_Truppfahrzeug_Gl_Us_Woodland",
					"TTT_Oplfahrzeug_Us_Desert",
					"TTT_Oplfahrzeug_Us_Woodland",
					"TTT_Schuetzenpanzer_Us_Desert",
					"TTT_Schuetzenpanzer_Us_Woodland",
					"TTT_Kampfpanzer_Us_Desert",
					"TTT_Kampfpanzer_Us_Woodland",
					"TTT_Kampfhelikopter_Us_Desert",
					"TTT_Kampfhelikopter_Us_Woodland",
					"TTT_Sanitaetshelikopter_Us_Desert",
					"TTT_Sanitaetshelikopter_Us_Woodland",
					"TTT_Logistikhelikopter_Us_Desert",
					"TTT_Logistikhelikopter_Us_Woodland",
                    "TTT_Transporthelikopter_Us_Desert",
                    "TTT_Transporthelikopter_Us_Woodland",
					"TTT_Aufklaerungsdrohne_Us_Desert",
					"TTT_Aufklaerungsdrohne_Us_Woodland",
					"TTT_Sanitaetsfahrzeug_Us_Desert",
					"TTT_Sanitaetsfahrzeug_Us_Woodland",
					"TTT_TransporterLeichtOffen_Us_Desert",
					"TTT_TransporterLeichtOffen_Us_Woodland"
		};
		weapons[] = {};
	};
};

class CfgVehicleClasses {
	class TTT_Vehicles_Us {
		displayName = "$STR_TTT_Vehilce_US";	//In-game name
		priority = 24; 							// How far down it is on the menu
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