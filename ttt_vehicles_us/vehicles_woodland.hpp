	/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
	class TTT_Truppfahrzeug_Mg_Us_Woodland : UK3CB_BAF_Coyote_Passenger_L111A1_W {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		faction = "TTT_faction_Us";
		vehicleClass = "TTT_Vehicles_Us";
		crew = "TTT_Schwarz1_Us_Woodland";
		displayName = "TTT Truppfahrzeug MG (US Woodland)";
		typicalCargo[] = {};

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
		};
		class TransportBackpacks {
		};		
	};
	
	
	class TTT_Truppfahrzeug_Gl_Us_Woodland : UK3CB_BAF_Coyote_Passenger_L134A1_W {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		faction = "TTT_faction_Us";
		vehicleClass = "TTT_Vehicles_Us";
		crew = "TTT_Schwarz1_Us_Woodland";
		displayName = "TTT Truppfahrzeug GL (US Woodland)";
		typicalCargo[] = {};

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
		};
		class TransportBackpacks {
		};		
	};
	
	/*
	#############################################################
	### TTT OPL-Fahrzeug
	#############################################################
	*/
	
	class TTT_Oplfahrzeug_Us_Woodland : TTT_Oplfahrzeug_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"ttt_a3\ttt_vehicles_us\data\oplfahrzeug_unitdecals.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};		
		displayName = "TTT OPL-Fahrzeug (US Woodland)";			
	};	
	
	/*
	#############################################################
	### TTT Sanitaetsfahrzeug
	#############################################################
	*/
	
	class TTT_Sanitaetsfahrzeug_Us_Woodland : TTT_Sanitaetsfahrzeug_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		HiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""};		
		
		crew = "TTT_Weiss1_Us_Woodland";
		displayName = "TTT Sanitaetsfahrzeug (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Transporter leicht (offen)
	#############################################################
	*/
	
	class TTT_TransporterLeichtOffen_Us_Woodland : TTT_TransporterLeichtOffen_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		HiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""};		
		crew = "TTT_Schwarz1_Us_Woodland";
		displayName = "TTT Transporter leicht (offen) (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Schützenpanzer
	#############################################################
	*/

	class TTT_Schuetzenpanzer_Us_Woodland : TTT_Schuetzenpanzer_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
			"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
		crew = "TTT_Bronze1_Us_Woodland";
		displayName = "TTT Schuetzenpanzer (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Kampfpanzer
	#############################################################
	*/
	
	class TTT_Kampfpanzer_Us_Woodland : TTT_Kampfpanzer_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
		crew = "TTT_Bronze1_Us_Woodland";
		displayName = "TTT Kampfpanzer (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Kampfhelikopter
	#############################################################
	*/
	
	class TTT_Kampfhelikopter_Us_Woodland : TTT_Kampfhelikopter_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		crew = "TTT_Adler1_Us_Woodland";
		displayName = "TTT Kampfhelikopter (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Sanitaetshelikopter
	#############################################################
	*/	
	
	class TTT_Sanitaetshelikopter_Us_Woodland : TTT_Sanitaetshelikopter_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		crew = "TTT_Weiss3_Us_Woodland";
		displayName = "TTT Sanitaetshelikopter (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Logistikhelikopter
	#############################################################
	*/
	
	class TTT_Logistikhelikopter_Us_Woodland : TTT_Logistikhelikopter_Us_Desert {
		author = "$STR_Tactical_Training_Team";
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
		"\ttt_a3\ttt_vehicles_us\data\logheli_camo3.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};		
		crew = "TTT_Bussard1_Us_Woodland";
		displayName = "TTT Logistikhelikopter (US Woodland)";
	};

    /*
    #############################################################
    ### TTT Transporthelikopter
    #############################################################
    */

    class TTT_Transporthelikopter_Us_Woodland : TTT_Transporthelikopter_Us_Desert {
        author = "$STR_Tactical_Training_Team";
        crew = "TTT_Habicht1_Us_Woodland";
        displayName = "TTT Transporthelikopter (US Woodland)";
    };
	
	/*
	#############################################################
	### TTT Aufklärungsdrohne
	#############################################################
	*/
	
	class TTT_Aufklaerungsdrohne_Us_Woodland : TTT_Aufklaerungsdrohne_Us_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Aufklaerungsdrohne (US Woodland)";
	};
