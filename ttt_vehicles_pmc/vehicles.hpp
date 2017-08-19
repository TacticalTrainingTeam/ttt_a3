/*
#############################################################
### TTT Truppfahrzeug
#############################################################
*/

class TTT_IMV_MG_PMC : rhsusf_m1025_w_s_m2 {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Soldier_F";
    displayName = "$STR_TTT_IMV_MG_PMC";
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


class TTT_IMV_TOW_PMC : CUP_B_HMMWV_TOW_USMC {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Soldier_F";
    displayName = "$STR_TTT_IMV_TOW_PMC";
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

class TTT_IMV_AA_PMC : CUP_B_HMMWV_Avenger_USMC {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
	editorSubcategory = "EdSubcat_Cars";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Soldier_F";
    displayName = "$STR_TTT_IMV_AA_PMC";
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
### TTT Transporter
#############################################################
*/

class TTT_LUV_LOG_PMC : rhsusf_m998_w_s_2dr_fulltop {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Soldier_F";
    displayName = "$STR_TTT_LUV_LOG_PMC";
    typicalCargo[] = {};
    ace_cargo_space = 9;

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
### TTT Schuetzenpanzer
#############################################################
*/

class TTT_APC_IFV_PMC : rhsusf_M1117_W {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
	editorSubcategory = "EdSubcat_APCs";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Soldier_F";
    displayName = "$STR_TTT_IFV_PMC";
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
### TTT Transporthelikopter (schwer)
#############################################################
*/

class TTT_Heli_Heavy_PMC : B_T_VTOL_01_vehicle_F {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
	editorSubcategory = "EdSubcat_Helicopters";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Helipilot_F";
    displayName = "$STR_TTT_Heli_Heavy_PMC";
    typicalCargo[] = {};
    ace_cargo_space = 60;

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
		//backpack_xx(B_Parachute,30);
    };
};


/*
#############################################################
### TTT Transporthelikopter (medium)
#############################################################
*/

class TTT_Heli_Medium_PMC : UK3CB_BAF_Merlin_HC3_24 {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Helipilot_F";
    displayName = "$STR_TTT_Heli_Medium_PMC";
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
### TTT Transporthelikopter (leicht)
#############################################################
*/

class TTT_Heli_Light_PMC : RHS_MELB_MH6M {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_PMC";
    vehicleClass = "TTT_Vehicles_PMC";
    crew = "B_Helipilot_F";
    displayName = "$STR_TTT_Heli_Light_PMC";
    typicalCargo[] = {};
    ace_cargo_space = 4;

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
### TTT Combat Aircraft Close Air Support
#############################################################
*/

    class TTT_CAS_PMC : B_Plane_CAS_01_dynamicLoadout_F {
        author = "$STR_Tactical_Training_Team";
        scope = 2;
        scopeCurator = 2;
        faction = "TTT_faction_PMC";
        vehicleClass = "TTT_Vehicles_PMC";
        displayName = "$STR_TTT_CAS_PMC";
		crew = "B_pilot_F";
        typicalCargo[] = {};

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
		};
		class TransportBackpacks {
			backpack_xx(B_Parachute,1);
		};		
    };