class CfgVehicles {

    class B_Soldier_base_F;            // External class reference
    class ttt_Base: B_Soldier_base_F {
        _generalMacro = "B_Soldier_base_F";
        author = "Tactical Training Team";
        displayName = "TTT Basis-Klasse";
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

    class ttt_plain_US_Desert: ttt_Base {
        displayName = CSTRING(plain_US_desert_DisplayName);
        scope = 2;
        uniformClass = "ttt_Uniform_plain_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_base_US.paa) };
    };

    class ttt_Platinum_Pilot: ttt_plain_US_Desert {
        displayName = CSTRING(platinum_pilot_DisplayName);
        uniformClass = "ttt_Uniform_Platinum_Pilot";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_pilot.paa) };
    };

    class ttt_Yellow_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Yellow_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_US_Desert.paa) };
    };

    class ttt_Grey_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Grey_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_US_Desert.paa) };
    };

    class ttt_Gold_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Gold_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_US_Desert.paa) };
    };

    class ttt_Green_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(green_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Green_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_US_Desert.paa) };
    };

    class ttt_Brown_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Brown_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_US_Desert.paa) };
    };

    class ttt_Black_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(black_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Black_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_US_Desert.paa) };
    };

    class ttt_Red_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(red_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Red_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_US_Desert.paa) };
    };

    class ttt_Bronze_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_US_Desert.paa) };
    };

    class ttt_Blue_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Blue_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_US_Desert.paa) };
    };

    class ttt_Violet_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Violet_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_US_Desert.paa) };
    };

    class ttt_White_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(white_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_White_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_US_Desert.paa) };
    };

    class ttt_Orange_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Orange_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_US_Desert.paa) };
    };

    class ttt_Platinum_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Platinum_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_US_Desert.paa) };
    };

    //Flecktarn
    class ttt_plain_BW_Flecktarn: ttt_Base {
        displayName = CSTRING(plain_BW_Flecktarn_DisplayName);
        scope = 2;
        uniformClass = "ttt_Uniform_plain_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_base_bw_flecktarn.paa) };
    };

    class ttt_Yellow_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Yellow_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_flecktarn.paa) };
    };

    class ttt_Grey_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Grey_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_flecktarn.paa) };
    };

    class ttt_Gold_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Gold_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_flecktarn.paa) };
    };

    class ttt_Green_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn.paa) };
    };
    class ttt_Green_alt_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_alt_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn_kampagne.paa) };
    };

    class ttt_Brown_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Brown_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_flecktarn.paa) };
    };

    class ttt_Black_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Black_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_flecktarn.paa) };
    };

    class ttt_Red_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Red_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_flecktarn.paa) };
    };

    class ttt_Bronze_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_flecktarn.paa) };
    };

    class ttt_Blue_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Blue_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_flecktarn.paa) };
    };

    class ttt_Violet_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Violet_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_flecktarn.paa) };
    };

    class ttt_White_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_White_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_flecktarn.paa) };
    };

    class ttt_Silver_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Silver_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_flecktarn.paa) };
    };

    class ttt_Orange_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Orange_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_flecktarn.paa) };
    };

    //Tropentarn
    class ttt_Yellow_BW_Tropentarn: ttt_Base {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        scope = 2;
        uniformClass = "ttt_Uniform_Yellow_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_tropentarn.paa) };
    };

    class ttt_Grey_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Grey_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_tropentarn.paa) };
    };

    class ttt_Gold_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Gold_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_tropentarn.paa) };
    };

    class ttt_Green_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn.paa) };
    };

    class ttt_Green_alt_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_alt_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn_kampagne.paa) };
    };

    class ttt_Brown_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Brown_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_tropentarn.paa) };
    };

    class ttt_Black_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Black_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_tropentarn.paa) };
    };

    class ttt_Red_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Red_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_tropentarn.paa) };
    };

    class ttt_Bronze_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_tropentarn.paa) };
    };

    class ttt_Blue_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Blue_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_tropentarn.paa) };
    };

    class ttt_Violet_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Violet_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_tropentarn.paa) };
    };

    class ttt_White_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_White_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_tropentarn.paa) };
    };

    class ttt_Orange_BW_Tropentarn: ttt_Yellow_BW_Tropentarn {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Orange_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_tropentarn.paa) };
    };
};