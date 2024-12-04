class CfgVehicles {

    class B_Soldier_base_F;            
    
    class ttt_Base_US : B_Soldier_base_F {
        _generalMacro = "B_Soldier_base_F";
        author = "Tactical Training Team";
        displayName = "Basis-Klasse US";
        scope = 0;
        icon = "iconMan";
        uniformAccessories[] = {};
        uniformClass = "";    
        nakedUniform = "U_BasicBody";
        hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
        items[] = {};
        respawnItems[] = {};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    class ttt_Platinum_Pilot : ttt_Base_US {
        author = "Tactical Training Team";
        displayName = "Klasse Platin Pilot";
        scope = 1;
        uniformClass = "ttt_Uniform_Platinum_Pilot";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_pilot.paa) };
    };

    class ttt_Yellow_US_Desert : ttt_Base_US {
        author = "Tactical Training Team";
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        scope = 1;
        uniformClass = "ttt_Uniform_Yellow_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_US_Desert.paa) };
    };

    class ttt_Grey_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(grey_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Grey_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_US_Desert.paa) };
    };

    class ttt_Gold_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(gold_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Gold_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_US_Desert.paa) };
    };

    class ttt_Green_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(green_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Green_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_US_Desert.paa) };
    };

    class ttt_Brown_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(brown_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Brown_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_US_Desert.paa) };
    };

    class ttt_Black_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(black_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Black_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_US_Desert.paa) };
    };

    class ttt_Red_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(red_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Red_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_US_Desert.paa) };
    };

    class ttt_Bronze_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_US_Desert.paa) };
    };

    class ttt_Blue_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(blue_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Blue_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_US_Desert.paa) };
    };

    class ttt_Violet_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(violet_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Violet_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_US_Desert.paa) };
    };

    class ttt_White_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(white_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_White_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_US_Desert.paa) };
    };

/*     class ttt_Silver_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = "Klasse Silber Desert";
        uniformClass = "ttt_Uniform_Silver_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_US_Desert.paa) };
    }; */

    class ttt_Orange_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(orange_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Orange_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_US_Desert.paa) };
    };

    class ttt_Platinum_US_Desert : ttt_Yellow_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Platinum_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_US_Desert.paa) };
    };

    class ttt_Base_BW : B_Soldier_base_F {
        _generalMacro = "B_Soldier_base_F";
        author = "Tactical Training Team";
        displayName = "Basis-Klasse BW";
        scope = 0;
        icon = "iconMan";
        uniformAccessories[] = {};
        uniformClass = "ttt_Uniform_Base_Bw";    
        nakedUniform = "U_BasicBody";
        hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
        items[] = {};
        respawnItems[] = {};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    //Flecktarn
    class ttt_Yellow_BW_Flecktarn : ttt_Base_BW {
        author = "Tactical Training Team";
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        scope = 1;
        uniformClass = "ttt_Uniform_Yellow_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_flecktarn.paa) };
        //hiddenSelectionsMaterials[] = {"\ttt_units_base\data\ttt_uniform.rvmat"};
    };

    class ttt_Grey_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Grey_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_flecktarn.paa) };
    };

    class ttt_Gold_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Gold_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_flecktarn.paa) };
    };

    class ttt_Green_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn.paa) };
    };
    class ttt_Green_BW_Flecktarn_alt : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(green_BW_Flecktarn__alt_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn_kampagne.paa) };
    };

    class ttt_Brown_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Brown_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_flecktarn.paa) };
    };

    class ttt_Black_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Black_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_flecktarn.paa) };
    };

    class ttt_Red_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Red_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_flecktarn.paa) };
    };

    class ttt_Bronze_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_flecktarn.paa) };
    };

    class ttt_Blue_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Blue_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_flecktarn.paa) };
    };

    class ttt_Violet_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Violet_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_flecktarn.paa) };
    };

    class ttt_White_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_White_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_flecktarn.paa) };
    };

    class ttt_Silver_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Silver_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_flecktarn.paa) };
    };

    class ttt_Orange_BW_Flecktarn : ttt_Yellow_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Orange_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_flecktarn.paa) };
    };

    //Tropentarn
    class ttt_Yellow_BW_Tropentarn : ttt_Base_BW {
        author = "Tactical Training Team";
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        scope = 1;
        uniformClass = "ttt_Uniform_Yellow_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_tropentarn.paa) };
    };

    class ttt_Grey_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Grey_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_tropentarn.paa) };
    };

    class ttt_Gold_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Gold_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_tropentarn.paa) };
    };

    class ttt_Green_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn.paa) };
    };

    class ttt_Green_BW_Tropentarn_alt : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(green_BW_Tropentarn_alt_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn_kampagne.paa) };
    };

    class ttt_Brown_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Brown_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_tropentarn.paa) };
    };

    class ttt_Black_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Black_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_tropentarn.paa) };
    };

    class ttt_Red_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Red_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_tropentarn.paa) };
    };

    class ttt_Bronze_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_tropentarn.paa) };
    };

    class ttt_Blue_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Blue_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_tropentarn.paa) };
    };

    class ttt_Violet_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Violet_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_tropentarn.paa) };
    };

    class ttt_White_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_White_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_tropentarn.paa) };
    };

/*     class ttt_Silver_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = "Klasse Silber Tropentarn";
        uniformClass = "ttt_Uniform_silver_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_tropentarn.paa) };
    }; */

    class ttt_Orange_BW_Tropentarn : ttt_Yellow_BW_Tropentarn {
        author = "Tactical Training Team";
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Orange_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_tropentarn.paa) };
    };
};