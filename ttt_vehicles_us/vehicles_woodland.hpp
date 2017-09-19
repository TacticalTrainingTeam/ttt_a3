	/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
	class TTT_IMV_MG_US_Woodland : UK3CB_BAF_Coyote_Passenger_L111A1_W {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		faction = "TTT_faction_US";
		vehicleClass = "TTT_Vehicles_US";
		crew = "TTT_Black_1_US_Woodland";
		displayName = "$STR_TTT_IMV_MG_US_Woodland";
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
	
	
	class TTT_IMV_GL_US_Woodland : UK3CB_BAF_Coyote_Passenger_L134A1_W {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		faction = "TTT_faction_US";
		vehicleClass = "TTT_Vehicles_US";
		crew = "TTT_Black_1_US_Woodland";
		displayName = "$STR_TTT_IMV_GL_US_Woodland";
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
	
	class TTT_LUV_COM_US_Woodland : TTT_LUV_COM_US_Desert {
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
		displayName = "$STR_TTT_LUV_COM_US_Woodland";			
	};	
	
	/*
	#############################################################
	### TTT Sanitaetsfahrzeug
	#############################################################
	*/
	
	class TTT_LUV_SAR_US_Woodland : TTT_LUV_SAR_US_Desert {
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
		
		crew = "TTT_White_1_US_Woodland";
		displayName = "$STR_TTT_LUV_SAR_US_Woodland";
	};
	
	/*
	#############################################################
	### TTT Transporter leicht (offen)
	#############################################################
	*/
	
	class TTT_LUV_LOG_US_Woodland : TTT_LUV_LOG_US_Desert {
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
		crew = "TTT_Black_1_US_Woodland";
		displayName = "$STR_TTT_LUV_LOG_US_Woodland";
	};
	
	/*
	#############################################################
	### TTT Schuetzenpanzer
	#############################################################
	*/

	class TTT_IFV_US_Woodland : TTT_IFV_US_Desert {
		author = "$STR_Tactical_Training_Team";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
			"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
		crew = "TTT_Bronze_1_US_Woodland";
		displayName = "$STR_TTT_IFV_US_Woodland";
	};
	
	/*
	#############################################################
	### TTT Kampfpanzer
	#############################################################
	*/
	
	class TTT_MBT_US_Woodland : TTT_MBT_US_Desert {
		author = "$STR_Tactical_Training_Team";
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
		crew = "TTT_Bronze_1_US_Woodland";
		displayName = "$STR_TTT_MBT_US_Woodland";
	};
	
	/*
	#############################################################
	### TTT Kampfhelikopter
	#############################################################
	*/
	
	class TTT_Heli_CAS_US_Woodland : TTT_Heli_CAS_US_Desert {
		author = "$STR_Tactical_Training_Team";
		crew = "TTT_Adler1_US_Woodland";
		displayName = "$STR_TTT_Heli_CAS_US_Woodland";
	};
	
	/*
	#############################################################
	### TTT Sanitaetshelikopter
	#############################################################
	*/	
	
	class TTT_Heli_SAR_US_Woodland : TTT_Heli_SAR_US_Desert {
		author = "$STR_Tactical_Training_Team";
		crew = "TTT_White_3_US_Woodland";
		displayName = "$STR_TTT_Heli_SAR_US_Woodland";
	};
	
	/*
	#############################################################
	### TTT Logistikhelikopter
	#############################################################
	*/
	
	class TTT_Heli_Heavy_US_Woodland : TTT_Heli_Heavy_US_Desert {
		author = "$STR_Tactical_Training_Team";
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
		"\ttt_a3\ttt_vehicles_us\data\logheli_camo3.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};		
		crew = "TTT_Buzzard_1_US_Woodland";
		displayName = "$STR_TTT_Heli_Heavy_US_Woodland";
	};

    /*
    #############################################################
    ### TTT Transporthelikopter
    #############################################################
    */

    class TTT_Heli_Medium_US_Woodland : TTT_Heli_Medium_US_Desert {
        author = "$STR_Tactical_Training_Team";
        crew = "TTT_Hawk_1_US_Woodland";
        displayName = "$STR_TTT_Heli_Medium_US_Woodland";
    };
	
	/*
	#############################################################
	### TTT Aufklaerungsdrohne
	#############################################################
	*/
	
	class TTT_Drone_US_Woodland : TTT_Drone_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "$STR_TTT_Drone_US_Woodland";
	};
