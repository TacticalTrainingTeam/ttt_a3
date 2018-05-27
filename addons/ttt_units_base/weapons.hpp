/*
#############################################################
### Helme
#############################################################
*/

class TTT_Helmet_Base : H_HelmetSpecB {
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
    picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_CA.paa";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_1_bw_tropentarn.paa" };
    scope = 0;

    class ItemInfo : ItemInfo {
        hiddenSelections[] = { "camo" };
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
        allowedSlots[] = {605,701,901};
    };
};

class TTT_Helmet_Buzzard : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "$STR_TTT_Weapons_Helmet_Buzzard";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_buzzard.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet_Hawk : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "$STR_TTT_Weapons_Helmet_Hawk";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_buzzard.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet_Falcon : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "$STR_TTT_Weapons_Helmet_Falcon";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_falcon.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet_Eagle : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "$STR_TTT_Weapons_Helmet_Eagle";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_eagle.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet1_Vehiclecrew : BWA3_CrewmanKSK_Tropen_Headset {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_Weapons_Helmet_Veh_I";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_1_vehiclecrew.paa" };
};

class TTT_Helmet2_Vehiclecrew : BWA3_CrewmanKSK_Tropen_Headset {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_Weapons_Helmet_Veh_II";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_2_vehiclecrew.paa" };
};

class TTT_Helmet3_Vehiclecrew : BWA3_CrewmanKSK_Tropen_Headset {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_Weapons_Helmet_Veh_III";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_3_vehiclecrew.paa" };
};

class TTT_Helmet4_Vehiclecrew : BWA3_CrewmanKSK_Tropen_Headset {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_Weapons_Helmet_Veh_IV";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_4_vehiclecrew.paa" };
};

class TTT_Helmet5_Vehiclecrew : BWA3_CrewmanKSK_Tropen_Headset {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_Weapons_Helmet_Veh_V";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_5_vehiclecrew.paa" };
};

class TTT_Helmet6_Vehiclecrew : BWA3_CrewmanKSK_Tropen_Headset {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "$STR_TTT_Weapons_Helmet_Veh_VI";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\TTT_helmet_6_vehiclecrew.paa" };
};

/*
#############################################################
### Westen
#############################################################
*/

class TTT_Vest_Heavy_Base : V_PlateCarrier3_rgr {
    scope = 0;
    displayName = "$STR_TTT_Vest_Heavy_Base";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\vest_yellow_co.paa" };

    class ItemInfo : ItemInfo {
        hiddenSelections[] = { "camo" };
    };
};

class TTT_Vest_Lite_Base : V_PlateCarrier1_rgr {
    scope = 0;
    displayName = "$STR_TTT_Vest_Lite_Base";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_base\data\vest_yellow_co.paa" };

    class ItemInfo : ItemInfo {
        hiddenSelections[] = { "camo" };
    };

};

class TTT_Vest_Crew_Base : V_TacVest_brn {
    scope = 0;
    displayName = "$STR_TTT_Vest_Crew_Base";
};