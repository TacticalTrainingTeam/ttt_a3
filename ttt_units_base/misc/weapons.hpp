
/*
#############################################################
### Helme
#############################################################
*/
class TTT_Helmet_Base : H_HelmetSpecB {
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
    picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_CA.paa";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\TTT_helmet_1_bw_tropentarn.paa" };
    scope = 0;

    class ItemInfo : ItemInfo {
        hiddenSelections[] = { "camo" };
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
    };
};

class TTT_Helmet_Buzzard : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "TTT Helm Bussard";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\TTT_helmet_buzzard.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet_Hawk : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "TTT Helm Habicht";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\TTT_helmet_buzzard.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet_Falcon : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "TTT Helm Falke";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\TTT_helmet_falcon.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};

class TTT_Helmet_Eagle : TTT_Helmet_Base {
    model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    displayName = "TTT Helm Adler";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\TTT_helmet_eagle.paa" };
    scope = 2;

    class ItemInfo : ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
    };
};


/*
#############################################################
### Westen
#############################################################
*/

class TTT_Vest_Heavy_Base : V_PlateCarrier3_rgr {
    scope = 0;
    displayName = "TTT Heavy Vest Base";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\vest_yellow_co.paa" };

    class ItemInfo : ItemInfo {
        hiddenSelections[] = { "camo" };
    };
};

class TTT_Vest_Lite_Base : V_PlateCarrier1_rgr {
    scope = 0;
    displayName = "TTT Lite Vest Base";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\misc\vest_yellow_co.paa" };

    class ItemInfo : ItemInfo {
        hiddenSelections[] = { "camo" };
    };

};

class TTT_Vest_Crew_Base : V_TacVest_brn {
    scope = 0;
    displayName = "TTT Crew Vest Base";
};