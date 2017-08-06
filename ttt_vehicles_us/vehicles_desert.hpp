	/*
    #############################################################
    ### TTT Truppfahrzeug
    #############################################################
    */

class TTT_IMV_MG_US_Desert : UK3CB_BAF_Coyote_Passenger_L111A1_D {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_Black_1_US_Desert";
    displayName = "$STR_TTT_IMV_MG_US_Desert";
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


class TTT_IMV_GL_US_Desert : UK3CB_BAF_Coyote_Passenger_L134A1_D {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_Black_1_US_Desert";
    displayName = "$STR_TTT_IMV_GL_US_Desert";
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

class TTT_LUV_COM_US_Desert : rhsusf_m998_d_4dr_fulltop {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
		"ttt_a3\ttt_vehicles_us\data\oplfahrzeug_unitdecals.paa",
		"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};		   
	crew = "TTT_Yellow_1_US_Desert";
    displayName = "$STR_TTT_LUV_COM_US_Desert";
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
### TTT Sanitaetsfahrzeug
#############################################################
*/

class TTT_LUV_SAR_US_Desert : rhsusf_m998_d_2dr_fulltop {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_White_1_US_Desert";
    displayName = "$STR_TTT_LUV_SAR_US_Desert";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
		//Sanitaetsmaterial
		item_xx(ACE_packingBandage,20);
		item_xx(ACE_elasticBandage,20);
		item_xx(ACE_fieldDressing,20);
		item_xx(ACE_quikclot,15);
		item_xx(ACE_atropine,10);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
		item_xx(ACE_salineIV,15);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Transporter leicht (offen)
#############################################################
*/

class TTT_LUV_LOG_US_Desert : rhsusf_m998_d_2dr {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_Black_1_US_Desert";
    displayName = "TTT Transporter leicht (offen) (US Desert)";
    typicalCargo[] = {};
    ace_cargo_space = 8;

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
### TTT Sch�tzenpanzer
#############################################################
*/

class TTT_IFV_US_Desert : RHS_M2A3_BUSKIII {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_Bronze_1_US_Desert";
    displayName = "$STR_TTT_IFV_US_Desert";
    typicalCargo[] = {};
    damageResistance = 0.02;
    radarType = 8;
    driverCanSee = 31;
    gunnerCanSee = 31;
    commanderCanSee = 31;
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
### TTT Kampfpanzer
#############################################################
*/

class TTT_MBT_US_Desert : rhsusf_m1a2sep1tuskiid_USarmy {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_Bronze_1_US_Desert";
    displayName = "$STR_TTT_MBT_US_Desert";
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
### TTT Kampfhelikopter
#############################################################
*/

class TTT_Heli_CAS_US_Desert : RHS_AH64D {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
	
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
		"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
		"\ttt_a3\ttt_vehicles_us\data\kampfhelikopter_camo3.paa"};	
    crew = "TTT_Adler1_US_Desert";
    displayName = "TTT Kampfhelikopter (US Desert)";
    typicalCargo[] = {};
    accuracy = 1000;

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
		backpack_xx(B_Parachute,2);
    };
};

/*
#############################################################
### TTT Sanitaetshelikopter
#############################################################
*/

class TTT_Heli_SAR_US_Desert : RHS_UH60M {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_White_3_US_Desert";
    displayName = "$STR_TTT_Heli_SAR_US_Desert";
    typicalCargo[] = {};
	hiddenSelectionsTextures[] = {
	"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa",
	"\ttt_a3\ttt_vehicles_us\data\medivac_engine_co.paa",
	"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
	"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"};
    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);	
		//Sanitaetsmaterial
 		item_xx(ACE_packingBandage,20);
		item_xx(ACE_elasticBandage,20);
		item_xx(ACE_fieldDressing,20);
		item_xx(ACE_quikclot,15);
		item_xx(ACE_atropine,10);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
		item_xx(ACE_salineIV,15);
	};
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Logistikhelikopter
#############################################################
*/

class TTT_Heli_Heavy_US_Desert : RHS_CH_47F {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa",
		"\ttt_a3\ttt_vehicles_us\data\logheli_desert_camo2.paa",
		"\ttt_a3\ttt_vehicles_us\data\logheli_camo3.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"};		
    crew = "TTT_Buzzard_1_US_Desert";
    displayName = "TTT Logistikhelikopter (US Desert)";
    typicalCargo[] = {};
    ace_cargo_space = 16;

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
		backpack_xx(B_Parachute,30);
    };
};


/*
#############################################################
### TTT Transporthelikopter
#############################################################
*/

class TTT_Heli_Medium_US_Desert : RHS_UH60M {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    crew = "TTT_Hawk_1_US_Desert";
    displayName = "$STR_TTT_Heli_Medium_US_Desert";
    typicalCargo[] = {};
    ace_cargo_space = 8;

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
### TTT Aufkl�rungsdrohne
#############################################################
*/

class TTT_Drone_US_Desert : CUP_B_USMC_MQ9 {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Vehicles_US";
    displayName = "TTT Aufklaerungsdrohne (US Desert)";
};
