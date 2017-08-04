#include "\ttt_a3\ttt_vehicles_bw\macros.hpp"

class CfgPatches {
	class ttt_vehicles_bw {
		requiredAddons[] = {"ttt_main"};		
		units[] = {	"TTT_Truppfahrzeug_Mg_Bw_Tropentarn",
					"TTT_Truppfahrzeug_Mg_Bw_Flecktarn", 
					"TTT_Truppfahrzeug_Gl_Bw_Tropentarn",
					"TTT_Truppfahrzeug_Gl_Bw_Flecktarn",
					"TTT_Oplfahrzeug_Bw_Tropentarn",
					"TTT_Oplfahrzeug_Bw_Flecktarn",
					"TTT_Schuetzenpanzer_Bw_Tropentarn",
					"TTT_Schuetzenpanzer_Bw_Flecktarn",
					"TTT_Kampfpanzer_Bw_Tropentarn",
					"TTT_Kampfpanzer_Bw_Flecktarn",
					"TTT_Kampfhelikopter_Bw_Tropentarn",
					"TTT_Kampfhelikopter_Bw_Flecktarn",
					"TTT_Sanitaetshelikopter_Bw_Tropentarn",
					"TTT_Sanitaetshelikopter_Bw_Flecktarn",
					"TTT_Logistikhelikopter_Bw_Tropentarn",
					"TTT_Logistikhelikopter_Bw_Flecktarn",
                    "TTT_Transporthelikopter_Bw_Tropentarn",
                    "TTT_Transporthelikopter_Bw_Flecktarn",
                    "TTT_Aufklaerungsdrohne_Bw_Tropentarn",
                    "TTT_Aufklaerungsdrohne_Bw_Flecktarn",
                    "TTT_Sanitaetsfahrzeug_Bw_Tropentarn",
                    "TTT_Sanitaetsfahrzeug_Bw_Flecktarn",
                    "TTT_TransporterLeichtOffen_Bw_Tropentarn",
                    "TTT_TransporterLeichtOffen_Bw_Flecktarn",
                    "TTT_Kampfjet_Bw_Tropentarn",
                    "TTT_Kampfjet_Bw_Flecktarn"
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