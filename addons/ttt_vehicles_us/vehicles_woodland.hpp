/*
#############################################################
### TTT Truppfahrzeug (Infantry Mobility Vehicle)
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
### TTT OPL-Fahrzeug (Light Utility Vehicle)
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
        "ttt_a3\addons\ttt_vehicles_us\data\oplfahrzeug_unitdecals.paa",
        "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};
    displayName = "$STR_TTT_LUV_COM_US_Woodland";
};

/*
#############################################################
### TTT Sanitaetsfahrzeug (Light Utility Vehicle)
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
### TTT Transporter (Light Utility Vehicle)
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
### TTT Schuetzenpanzer (Infantry Fighting Vehicle)
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
### TTT Kampfpanzer (Main Battle Tank)
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
### TTT Kampfhelikopter (Attack Helicopter)
#############################################################
*/

class TTT_AH_US_Woodland : TTT_AH_US_Desert {
    author = "$STR_Tactical_Training_Team";
    crew = "TTT_Silver_1_US_Woodland";
    displayName = "$STR_TTT_AH_US_Woodland";
};

/*
#############################################################
### TTT Sanitaetshelikopter (Military Transport Aircraft)
#############################################################
*/

class TTT_MTA_SAR_US_Woodland : TTT_MTA_SAR_US_Desert {
    author = "$STR_Tactical_Training_Team";
    crew = "TTT_White_3_US_Woodland";
    displayName = "$STR_TTT_MTA_SAR_US_Woodland";
};

/*
#############################################################
### TTT Logistikhelikopter (Military Transport Aircraft)
#############################################################
*/

class TTT_MTA_Heavy_US_Woodland : TTT_MTA_Heavy_US_Desert {
    author = "$STR_Tactical_Training_Team";
hiddenSelectionsTextures[] = {
    "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
    "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
    "\ttt_a3\addons\ttt_vehicles_us\data\logheli_camo3.paa",
    "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
    crew = "TTT_Buzzard_1_US_Woodland";
    displayName = "$STR_TTT_MTA_Heavy_US_Woodland";
};

/*
#############################################################
### TTT Transporthelikopter (Military Transport Aircraft)
#############################################################
*/

class TTT_MTA_Medium_US_Woodland : TTT_MTA_Medium_US_Desert {
    author = "$STR_Tactical_Training_Team";
    crew = "TTT_Hawk_1_US_Woodland";
    displayName = "$STR_TTT_MTA_Medium_US_Woodland";
};

/*
#############################################################
### TTT Aufklaerungsdrohne (Unmanned Aerial Vehicle)
#############################################################
*/

class TTT_UAV_US_Woodland : TTT_UAV_US_Desert {
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_UAV_US_Woodland";
};