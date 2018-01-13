/*
#############################################################
### TTT Truppfahrzeug (Infantry Mobility Vehicle)
#############################################################
*/

   class TTT_IMV_MG_BW_Tropentarn : CUP_B_Dingo_Wdl {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    hiddenSelectionsTextures[] = {
        "\ttt_a3\ttt_vehicles_bw\data\karosse_d_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Dingo\data\ger\a_teile_ger_d_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Dingo\data\ger\FLW100_ger_d_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Dingo\data\ger\FLW200_ger_d_co.paa"
    };
    crew = "TTT_Black_1_BW_Tropentarn";
    displayName = "TTT Truppfahrzeug (Infantry Mobility Vehicle) MG (BW Tropentarn)";
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

class TTT_IMV_GL_BW_Tropentarn : CUP_B_Dingo_GL_Wdl {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    hiddenSelectionsTextures[] = {
        "\ttt_a3\ttt_vehicles_bw\data\karosse_d_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Dingo\data\ger\a_teile_ger_d_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Dingo\data\ger\FLW100_ger_d_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Dingo\data\ger\FLW200_ger_d_co.paa"
    };
    crew = "TTT_Black_1_BW_Tropentarn";
    displayName = "TTT Truppfahrzeug (Infantry Mobility Vehicle) GL (BW Tropentarn)";
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
### TTT OPL-Fahrzeug (Light Utility Vehicle)
#############################################################
*/

class TTT_LUV_COM_BW_Tropentarn : rhsusf_m998_w_4dr_fulltop {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
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
        "\ttt_a3\ttt_vehicles_bw\data\oplfahrzeug_unitdecal.paa",
        ""
    };
    crew = "TTT_Black_1_BW_Tropentarn";
    displayName = "TTT OPL-Fahrzeug (BW Tropentarn)";
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
### TTT Sanitaetsfahrzeug (Light Utility Vehicle)
#############################################################
*/

class TTT_LUV_SAR_BW_Tropentarn : rhsusf_m998_d_2dr_fulltop {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_White_1_BW_Tropentarn";
    displayName = "TTT Sanitaetsfahrzeug (BW Tropentarn)";
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
### TTT Transporter (Light Utility Vehicle)
#############################################################
*/

class TTT_LUV_LOG_BW_Tropentarn : rhsusf_m998_w_2dr {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_Black_1_BW_Tropentarn";
    displayName = "TTT Transporter leicht (offen) (BW Tropentarn)";
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
### TTT Schuetzenpanzer (Infantry Fighting Vehicle)
#############################################################
*/

class TTT_IFV_BW_Tropentarn : BWA3_Puma_Tropen {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_Bronze_1_BW_Tropentarn";
    displayName = "TTT Schuetzenpanzer (BW Tropentarn)";
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
### TTT Kampfpanzer (Main Battle Tank)
#############################################################
*/

class TTT_MBT_BW_Tropentarn : BWA3_Leopard2A6M_Tropen {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_Bronze_1_BW_Tropentarn";
    displayName = "TTT Kampfpanzer (BW Tropentarn)";
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
### TTT Kampfhelikopter (Attack Helicopter)
#############################################################
*/

class TTT_AH_BW_Tropentarn : BWA3_Tiger_RMK_Universal {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_Silver_1_BW_Tropentarn";
    displayName = "TTT Kampfhelikopter (BW Tropentarn)";
    typicalCargo[] = {};
    accuracy=1000;
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
### TTT Sanitaetshelikopter (Military Transport Aircraft)
#############################################################
*/

class TTT_MTA_SAR_BW_Tropentarn : NH90Armed {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_White_3_BW_Tropentarn";
    displayName = "TTT Sanitaetshelikopter (BW Tropentarn)";
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
### TTT Logistikhelikopter (Military Transport Aircraft)
#############################################################
*/

class TTT_MTA_Heavy_BW_Tropentarn : CUP_B_CH53E_GER {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_Buzzard_1_BW_Tropentarn";
    displayName = "TTT Logistikhelikopter (BW Tropentarn)";
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
### TTT Transporthelikopter (Military Transport Aircraft)
#############################################################
*/

class TTT_MTA_Medium_BW_Tropentarn : NH90Armed {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    crew = "TTT_Hawk_1_BW_Tropentarn";
    displayName = "TTT Transporthelikopter (BW Tropentarn)";
    typicalCargo[] = {};
    weapons[] = { "CMFlareLauncher" };
    magazines[] = { "300Rnd_CMFlare_Chaff_Magazine" };
    LockDetectionSystem = 2 + 8 + 4;
    incomingMissileDetectionSystem = 16;
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
### TTT Aufklaerungsdrohne (Unmanned Aerial Vehicle)
#############################################################
*/

class TTT_UAV_BW_Tropentarn : CUP_B_USMC_MQ9 {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    displayName = "TTT Aufklaerungsdrohne (BW Tropentarn)";
};

/*
#############################################################
### TTT Jet (MultiRole Combat Aircraft)
#############################################################
*/

class TTT_MRCA_BW_Tropentarn : EAWS_EF2000_GER_SS {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    scopeCurator = 2;
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Vehicles_BW";
    displayName = "TTT Kampfjet (BW Tropentarn)";
    crew = "TTT_Platinum_1_BW_Tropentarn";
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