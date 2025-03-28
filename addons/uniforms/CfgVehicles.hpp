class CfgVehicles {

    //Uniforms on People need a Soldier at its base
    class B_Soldier_base_F;            // External class reference
    class ttt_Base: B_Soldier_base_F {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "TTT Basis-Klasse";
        scope = 0;
        //uniformAccessories[] = {};
        //empty all inventory
        items[] = {};
        respawnItems[] = {};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    class ttt_plain_US_Desert: ttt_Base {
        displayName = CSTRING(plain_US_desert_DisplayName);
        scope = 1;
        uniformClass = "ttt_Uniform_plain_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_base_US_co.paa) };
    };

    class ttt_Platinum_Pilot: ttt_plain_US_Desert {
        displayName = CSTRING(platinum_pilot_DisplayName);
        uniformClass = "ttt_Uniform_Platinum_Pilot";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_pilot_co.paa) };
    };

    class ttt_Yellow_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Yellow_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_US_Desert_co.paa) };
    };

    class ttt_Grey_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Grey_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_US_Desert_co.paa) };
    };

    class ttt_Gold_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Gold_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_US_Desert_co.paa) };
    };

    class ttt_Green_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(green_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Green_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_US_Desert_co.paa) };
    };

    class ttt_Brown_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Brown_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_US_Desert_co.paa) };
    };

    class ttt_Black_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(black_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Black_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_US_Desert_co.paa) };
    };

    class ttt_Red_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(red_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Red_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_US_Desert_co.paa) };
    };

    class ttt_Bronze_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_US_Desert_co.paa) };
    };

    class ttt_Blue_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Blue_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_US_Desert_co.paa) };
    };

    class ttt_Violet_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Violet_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_US_Desert_co.paa) };
    };

    class ttt_White_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(white_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_White_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_US_Desert_co.paa) };
    };

   
    class ttt_Silver_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(silver_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Silver_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_US_Desert_co.paa) };
    };

     class ttt_Orange_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Orange_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_US_Desert_co.paa) };
    };

    class ttt_Platinum_US_Desert: ttt_plain_US_Desert {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        uniformClass = "ttt_Uniform_Platinum_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_US_Desert_co.paa) };
    };

    //Flecktarn
    class ttt_plain_BW_Flecktarn: ttt_Base {
        displayName = CSTRING(plain_BW_Flecktarn_DisplayName);
        scope = 1;
        uniformClass = "ttt_Uniform_plain_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_base_bw_flecktarn_co.paa) };
    };

    class ttt_Yellow_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Yellow_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_flecktarn_co.paa) };
    };

    class ttt_Grey_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Grey_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_flecktarn_co.paa) };
    };

    class ttt_Gold_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Gold_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_flecktarn_co.paa) };
    };

    class ttt_Green_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn_co.paa) };
    };
    class ttt_Green_alt_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_alt_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn_kampagne_co.paa) };
    };

    class ttt_Brown_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Brown_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_flecktarn_co.paa) };
    };

    class ttt_Black_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Black_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_flecktarn_co.paa) };
    };

    class ttt_Red_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Red_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_flecktarn_co.paa) };
    };

    class ttt_Bronze_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_flecktarn_co.paa) };
    };

    class ttt_Blue_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Blue_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_flecktarn_co.paa) };
    };

    class ttt_Violet_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Violet_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_flecktarn_co.paa) };
    };

    class ttt_White_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_White_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_flecktarn_co.paa) };
    };

    class ttt_Silver_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Silver_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_flecktarn_co.paa) };
    };

    class ttt_Orange_BW_Flecktarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        uniformClass = "ttt_Uniform_Orange_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_flecktarn_co.paa) };
    };

    //Tropentarn
    class ttt_Yellow_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Yellow_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_tropentarn_co.paa) };
    };

    class ttt_Grey_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Grey_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_tropentarn_co.paa) };
    };

    class ttt_Gold_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Gold_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_tropentarn_co.paa) };
    };

    class ttt_Green_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn_co.paa) };
    };

    class ttt_Green_alt_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Green_alt_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn_kampagne_co.paa) };
    };

    class ttt_Brown_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Brown_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_tropentarn_co.paa) };
    };

    class ttt_Black_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Black_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_tropentarn_co.paa) };
    };

    class ttt_Red_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Red_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_tropentarn_co.paa) };
    };

    class ttt_Bronze_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Bronze_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_tropentarn_co.paa) };
    };

    class ttt_Blue_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Blue_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_tropentarn_co.paa) };
    };

    class ttt_Violet_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Violet_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_tropentarn_co.paa) };
    };

    class ttt_White_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_White_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_tropentarn_co.paa) };
    };

     class ttt_Silver_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(silver_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_silver_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_tropentarn_co.paa) };
    };

    class ttt_Orange_BW_Tropentarn: ttt_plain_BW_Flecktarn {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        uniformClass = "ttt_Uniform_Orange_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_tropentarn_co.paa) };
    };

    class Item_U_B_CombatUniform_mcam;
    class ttt_Item_black_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Black_BW_Tropentarn {
                name = "ttt_Uniform_Black_BW_Tropentarn";
                count = 1;
            };
        };
    };

    //Ground Weapon Holders
    //these appear in the 3DEN Editor to be placed in the world
    //ToDo: hiddenselections
    class ttt_Item_Green_alt_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Green_alt_BW_Tropentarn {
                name = "ttt_Uniform_Green_alt_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Yellow_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Yellow_BW_Tropentarn {
                name = "ttt_Uniform_Yellow_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Grey_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Grey_BW_Tropentarn {
                name = "ttt_Uniform_Grey_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Gold_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Gold_BW_Tropentarn {
                name = "ttt_Uniform_Gold_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Green_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Green_BW_Tropentarn {
                name = "ttt_Uniform_Green_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Brown_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Brown_BW_Tropentarn {
                name = "ttt_Uniform_Brown_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Red_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Red_BW_Tropentarn {
                name = "ttt_Uniform_Red_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Bronze_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Bronze_BW_Tropentarn {
                name = "ttt_Uniform_Bronze_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Blue_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Blue_BW_Tropentarn {
                name = "ttt_Uniform_Blue_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Violet_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Violet_BW_Tropentarn {
                name = "ttt_Uniform_Violet_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_White_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_White_BW_Tropentarn {
                name = "ttt_Uniform_White_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Silver_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(silver_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_silver_BW_Tropentarn {
                name = "ttt_Uniform_silver_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Orange_BW_Tropentarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Orange_BW_Tropentarn {
                name = "ttt_Uniform_Orange_BW_Tropentarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Orange_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Orange_BW_Flecktarn {
                name = "ttt_Uniform_Orange_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Yellow_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Yellow_BW_Flecktarn {
                name = "ttt_Uniform_Yellow_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Grey_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Grey_BW_Flecktarn {
                name = "ttt_Uniform_Grey_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Gold_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Gold_BW_Flecktarn {
                name = "ttt_Uniform_Gold_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Green_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Green_BW_Flecktarn {
                name = "ttt_Uniform_Green_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Green_alt_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Green_alt_BW_Flecktarn {
                name = "ttt_Uniform_Green_alt_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Brown_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Brown_BW_Flecktarn {
                name = "ttt_Uniform_Brown_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Black_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Black_BW_Flecktarn {
                name = "ttt_Uniform_Black_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Red_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Red_BW_Flecktarn {
                name = "ttt_Uniform_Red_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Bronze_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Bronze_BW_Flecktarn {
                name = "ttt_Uniform_Bronze_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Blue_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Blue_BW_Flecktarn {
                name = "ttt_Uniform_Blue_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Violet_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Violet_BW_Flecktarn {
                name = "ttt_Uniform_Violet_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_White_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_White_BW_Flecktarn {
                name = "ttt_Uniform_White_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Silver_BW_Flecktarn : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Silver_BW_Flecktarn {
                name = "ttt_Uniform_Silver_BW_Flecktarn";
                count = 1;
            };
        };
    };

    class ttt_Item_Silver_US_desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(silver_us_desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Silver_us_desert {
                name = "ttt_Uniform_Silver_us_desret";
                count = 1;
            };
        };
    };

    class ttt_Item_Yellow_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Yellow_US_Desert {
                name = "ttt_Uniform_Yellow_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Grey_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Grey_US_Desert {
                name = "ttt_Uniform_Grey_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Gold_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Gold_US_Desert {
                name = "ttt_Uniform_Gold_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Green_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Green_US_Desert {
                name = "ttt_Uniform_Green_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Brown_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Brown_US_Desert {
                name = "ttt_Uniform_Brown_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Black_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(black_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Black_US_Desert {
                name = "ttt_Uniform_Black_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Red_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(red_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Red_US_Desert {
                name = "ttt_Uniform_Red_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Bronze_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Bronze_US_Desert {
                name = "ttt_Uniform_Bronze_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Blue_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Blue_US_Desert {
                name = "ttt_Uniform_Blue_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Violet_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Violet_US_Desert {
                name = "ttt_Uniform_Violet_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_White_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(white_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_White_US_Desert {
                name = "ttt_Uniform_White_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Orange_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Orange_US_Desert {
                name = "ttt_Uniform_Orange_US_Desert";
                count = 1;
            };
        };
    };

    class ttt_Item_Platinum_US_Desert : Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);

        class TransportItems {
            class ttt_Uniform_Platinum_US_Desert {
                name = "ttt_Uniform_Platinum_US_Desert";
                count = 1;
            };
        };
    };
};