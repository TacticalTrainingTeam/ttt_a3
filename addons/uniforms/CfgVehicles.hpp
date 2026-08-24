class CfgVehicles {

    //Uniforms on People need a Soldier at its base
    class B_Soldier_base_F;            // External class reference
    class GVAR(Base): B_Soldier_base_F {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "TTT Basis-Klasse";
        scope = 0;
        //empty all inventory
        items[] = {};
        respawnItems[] = {};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    class GVAR(plain_US_Desert): GVAR(Base) {
        displayName = CSTRING(plain_US_desert_DisplayName);
        scope = 1;
        uniformClass = QGVAR(plain_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_base_US_co.paa) };
    };

    class GVAR(Platinum_Pilot): GVAR(plain_US_Desert) {
        displayName = CSTRING(platinum_pilot_DisplayName);
        uniformClass = QGVAR(Platinum_Pilot_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_pilot_co.paa) };
    };

    class GVAR(Yellow_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        uniformClass = QGVAR(Yellow_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_US_Desert_co.paa) };
    };

    class GVAR(Grey_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        uniformClass = QGVAR(Grey_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_US_Desert_co.paa) };
    };

    class GVAR(Gold_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        uniformClass = QGVAR(Gold_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_US_Desert_co.paa) };
    };

    class GVAR(Green_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(green_US_Desert_DisplayName);
        uniformClass = QGVAR(Green_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_US_Desert_co.paa) };
    };

    class GVAR(Brown_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        uniformClass = QGVAR(Brown_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_US_Desert_co.paa) };
    };

    class GVAR(Black_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(black_US_Desert_DisplayName);
        uniformClass = QGVAR(Black_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_US_Desert_co.paa) };
    };

    class GVAR(Red_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(red_US_Desert_DisplayName);
        uniformClass = QGVAR(Red_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_US_Desert_co.paa) };
    };

    class GVAR(Bronze_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        uniformClass = QGVAR(Bronze_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_US_Desert_co.paa) };
    };

    class GVAR(Blue_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        uniformClass = QGVAR(Blue_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_US_Desert_co.paa) };
    };

    class GVAR(Violet_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        uniformClass = QGVAR(Violet_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_US_Desert_co.paa) };
    };

    class GVAR(White_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(white_US_Desert_DisplayName);
        uniformClass = QGVAR(White_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_US_Desert_co.paa) };
    };


    class GVAR(Silver_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(silver_US_Desert_DisplayName);
        uniformClass = QGVAR(Silver_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_US_Desert_co.paa) };
    };

    class GVAR(Orange_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        uniformClass = QGVAR(Orange_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_US_Desert_co.paa) };
    };

    class GVAR(Platinum_US_Desert): GVAR(plain_US_Desert) {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        uniformClass = QGVAR(Platinum_US_Desert_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_US_Desert_co.paa) };
    };

    //Flecktarn
    class GVAR(plain_BW_Flecktarn): GVAR(Base) {
        displayName = CSTRING(plain_BW_Flecktarn_DisplayName);
        scope = 1;
        uniformClass = QGVAR(plain_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_base_bw_flecktarn_co.paa) };
    };

    class GVAR(Yellow_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Yellow_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_flecktarn_co.paa) };
    };

    class GVAR(Grey_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Grey_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_flecktarn_co.paa) };
    };

    class GVAR(Gold_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Gold_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_flecktarn_co.paa) };
    };

    class GVAR(Green_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Green_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn_co.paa) };
    };
    class GVAR(Green_alt_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Green_alt_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_flecktarn_kampagne_co.paa) };
    };

    class GVAR(Brown_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Brown_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_flecktarn_co.paa) };
    };

    class GVAR(Black_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Black_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_flecktarn_co.paa) };
    };

    class GVAR(Red_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Red_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_flecktarn_co.paa) };
    };

    class GVAR(Bronze_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Bronze_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_flecktarn_co.paa) };
    };

    class GVAR(Blue_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Blue_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_flecktarn_co.paa) };
    };

    class GVAR(Violet_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Violet_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_flecktarn_co.paa) };
    };

    class GVAR(White_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(White_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_flecktarn_co.paa) };
    };

    class GVAR(Silver_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Silver_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_flecktarn_co.paa) };
    };

    class GVAR(Orange_BW_Flecktarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        uniformClass = QGVAR(Orange_BW_Flecktarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_flecktarn_co.paa) };
    };

    //Tropentarn
    class GVAR(Yellow_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Yellow_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_yellow_bw_tropentarn_co.paa) };
    };

    class GVAR(Grey_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Grey_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_grey_bw_tropentarn_co.paa) };
    };

    class GVAR(Gold_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Gold_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_gold_bw_tropentarn_co.paa) };
    };

    class GVAR(Green_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Green_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn_co.paa) };
    };

    class GVAR(Green_alt_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Green_alt_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_green_bw_tropentarn_kampagne_co.paa) };
    };

    class GVAR(Brown_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Brown_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_brown_bw_tropentarn_co.paa) };
    };

    class GVAR(Black_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Black_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_black_bw_tropentarn_co.paa) };
    };

    class GVAR(Red_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Red_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_red_bw_tropentarn_co.paa) };
    };

    class GVAR(Bronze_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Bronze_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_bronze_bw_tropentarn_co.paa) };
    };

    class GVAR(Blue_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Blue_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_blue_bw_tropentarn_co.paa) };
    };

    class GVAR(Violet_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Violet_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_violet_bw_tropentarn_co.paa) };
    };

    class GVAR(White_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(White_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_white_bw_tropentarn_co.paa) };
    };

    class GVAR(Silver_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(silver_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Silver_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_silver_bw_tropentarn_co.paa) };
    };

    class GVAR(Orange_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Orange_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_orange_bw_tropentarn_co.paa) };
    };

    class GVAR(Platinum_BW_Tropentarn): GVAR(plain_BW_Flecktarn) {
        displayName = CSTRING(platinum_BW_Tropentarn_DisplayName);
        uniformClass = QGVAR(Platinum_BW_Tropentarn_item);
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_bw_tropentarn_co.paa) };
    };

    //Ground Weapon Holders
    //these appear in the 3DEN Editor to be placed in the world
    //ToDo: Remove Later
    class Item_U_B_CombatUniform_mcam;

    class GVAR(Item_Black_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Black_BW_Tropentarn_item) {
                name = QGVAR(Black_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Green_alt_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Green_alt_BW_Tropentarn_item) {
                name = QGVAR(Green_alt_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Yellow_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Yellow_BW_Tropentarn_item) {
                name = QGVAR(Yellow_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Grey_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Grey_BW_Tropentarn_item) {
                name = QGVAR(Grey_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Gold_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Gold_BW_Tropentarn_item) {
                name = QGVAR(Gold_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Green_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Green_BW_Tropentarn_item) {
                name = QGVAR(Green_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Brown_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Brown_BW_Tropentarn_item) {
                name = QGVAR(Brown_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Red_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Red_BW_Tropentarn_item) {
                name = QGVAR(Red_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Bronze_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Bronze_BW_Tropentarn_item) {
                name = QGVAR(Bronze_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Blue_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Blue_BW_Tropentarn_item) {
                name = QGVAR(Blue_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Violet_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Violet_BW_Tropentarn_item) {
                name = QGVAR(Violet_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_White_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(White_BW_Tropentarn_item) {
                name = QGVAR(White_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Silver_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(silver_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Silver_BW_Tropentarn_item) {
                name = QGVAR(Silver_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Orange_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Orange_BW_Tropentarn_item) {
                name = QGVAR(Orange_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Platinum_BW_Tropentarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(platinum_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Platinum_BW_Tropentarn_item) {
                name = QGVAR(Platinum_BW_Tropentarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Orange_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Orange_BW_Flecktarn_item) {
                name = QGVAR(Orange_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Yellow_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Yellow_BW_Flecktarn_item) {
                name = QGVAR(Yellow_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Grey_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Grey_BW_Flecktarn_item) {
                name = QGVAR(Grey_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Gold_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Gold_BW_Flecktarn_item) {
                name = QGVAR(Gold_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Green_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Green_BW_Flecktarn_item) {
                name = QGVAR(Green_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Green_alt_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Green_alt_BW_Flecktarn_item) {
                name = QGVAR(Green_alt_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Brown_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Brown_BW_Flecktarn_item) {
                name = QGVAR(Brown_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Black_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Black_BW_Flecktarn_item) {
                name = QGVAR(Black_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Red_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Red_BW_Flecktarn_item) {
                name = QGVAR(Red_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Bronze_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Bronze_BW_Flecktarn_item) {
                name = QGVAR(Bronze_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Blue_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Blue_BW_Flecktarn_item) {
                name = QGVAR(Blue_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Violet_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Violet_BW_Flecktarn_item) {
                name = QGVAR(Violet_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_White_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(White_BW_Flecktarn_item) {
                name = QGVAR(White_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Silver_BW_Flecktarn): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Silver_BW_Flecktarn_item) {
                name = QGVAR(Silver_BW_Flecktarn_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Silver_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(silver_us_desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Silver_US_Desert_item) {
                name = QGVAR(Silver_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Yellow_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Yellow_US_Desert_item) {
                name = QGVAR(Yellow_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Grey_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Grey_US_Desert_item) {
                name = QGVAR(Grey_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Gold_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Gold_US_Desert_item) {
                name = QGVAR(Gold_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Green_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(green_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Green_US_Desert_item) {
                name = QGVAR(Green_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Brown_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Brown_US_Desert_item) {
                name = QGVAR(Brown_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Black_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(black_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Black_US_Desert_item) {
                name = QGVAR(Black_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Red_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(red_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Red_US_Desert_item) {
                name = QGVAR(Red_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Bronze_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Bronze_US_Desert_item) {
                name = QGVAR(Bronze_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Blue_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Blue_US_Desert_item) {
                name = QGVAR(Blue_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Violet_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Violet_US_Desert_item) {
                name = QGVAR(Violet_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_White_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(white_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(White_US_Desert_item) {
                name = QGVAR(White_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Orange_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;

        class TransportItems {
            class GVAR(Orange_US_Desert_item) {
                name = QGVAR(Orange_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Platinum_US_Desert): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_US_Desert_co.paa) };

        class TransportItems {
            class GVAR(Platinum_US_Desert_item) {
                name = QGVAR(Platinum_US_Desert_item);
                count = 1;
            };
        };
    };

    class GVAR(Item_Platinum_Pilot): Item_U_B_CombatUniform_mcam {
        displayName = CSTRING(platinum_pilot_DisplayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 1;
        hiddenSelectionsTextures[] = { QPATHTOF(data\ttt_uniform_platinum_pilot_co.paa) };

        class TransportItems {
            class GVAR(Platinum_Pilot_item) {
                name = QGVAR(Platinum_Pilot_item);
                count = 1;
            };
        };
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/loadouts referencing
    //them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_plain_US_Desert: GVAR(plain_US_Desert) { scope = 1; };
    class ttt_Platinum_Pilot: GVAR(Platinum_Pilot) { scope = 1; };
    class ttt_Yellow_US_Desert: GVAR(Yellow_US_Desert) { scope = 1; };
    class ttt_Grey_US_Desert: GVAR(Grey_US_Desert) { scope = 1; };
    class ttt_Gold_US_Desert: GVAR(Gold_US_Desert) { scope = 1; };
    class ttt_Green_US_Desert: GVAR(Green_US_Desert) { scope = 1; };
    class ttt_Brown_US_Desert: GVAR(Brown_US_Desert) { scope = 1; };
    class ttt_Black_US_Desert: GVAR(Black_US_Desert) { scope = 1; };
    class ttt_Red_US_Desert: GVAR(Red_US_Desert) { scope = 1; };
    class ttt_Bronze_US_Desert: GVAR(Bronze_US_Desert) { scope = 1; };
    class ttt_Blue_US_Desert: GVAR(Blue_US_Desert) { scope = 1; };
    class ttt_Violet_US_Desert: GVAR(Violet_US_Desert) { scope = 1; };
    class ttt_White_US_Desert: GVAR(White_US_Desert) { scope = 1; };
    class ttt_Silver_US_Desert: GVAR(Silver_US_Desert) { scope = 1; };
    class ttt_Orange_US_Desert: GVAR(Orange_US_Desert) { scope = 1; };
    class ttt_Platinum_US_Desert: GVAR(Platinum_US_Desert) { scope = 1; };

    class ttt_plain_BW_Flecktarn: GVAR(plain_BW_Flecktarn) { scope = 1; };
    class ttt_Yellow_BW_Flecktarn: GVAR(Yellow_BW_Flecktarn) { scope = 1; };
    class ttt_Grey_BW_Flecktarn: GVAR(Grey_BW_Flecktarn) { scope = 1; };
    class ttt_Gold_BW_Flecktarn: GVAR(Gold_BW_Flecktarn) { scope = 1; };
    class ttt_Green_BW_Flecktarn: GVAR(Green_BW_Flecktarn) { scope = 1; };
    class ttt_Green_alt_BW_Flecktarn: GVAR(Green_alt_BW_Flecktarn) { scope = 1; };
    class ttt_Brown_BW_Flecktarn: GVAR(Brown_BW_Flecktarn) { scope = 1; };
    class ttt_Black_BW_Flecktarn: GVAR(Black_BW_Flecktarn) { scope = 1; };
    class ttt_Red_BW_Flecktarn: GVAR(Red_BW_Flecktarn) { scope = 1; };
    class ttt_Bronze_BW_Flecktarn: GVAR(Bronze_BW_Flecktarn) { scope = 1; };
    class ttt_Blue_BW_Flecktarn: GVAR(Blue_BW_Flecktarn) { scope = 1; };
    class ttt_Violet_BW_Flecktarn: GVAR(Violet_BW_Flecktarn) { scope = 1; };
    class ttt_White_BW_Flecktarn: GVAR(White_BW_Flecktarn) { scope = 1; };
    class ttt_Silver_BW_Flecktarn: GVAR(Silver_BW_Flecktarn) { scope = 1; };
    class ttt_Orange_BW_Flecktarn: GVAR(Orange_BW_Flecktarn) { scope = 1; };

    class ttt_Yellow_BW_Tropentarn: GVAR(Yellow_BW_Tropentarn) { scope = 1; };
    class ttt_Grey_BW_Tropentarn: GVAR(Grey_BW_Tropentarn) { scope = 1; };
    class ttt_Gold_BW_Tropentarn: GVAR(Gold_BW_Tropentarn) { scope = 1; };
    class ttt_Green_BW_Tropentarn: GVAR(Green_BW_Tropentarn) { scope = 1; };
    class ttt_Green_alt_BW_Tropentarn: GVAR(Green_alt_BW_Tropentarn) { scope = 1; };
    class ttt_Brown_BW_Tropentarn: GVAR(Brown_BW_Tropentarn) { scope = 1; };
    class ttt_Black_BW_Tropentarn: GVAR(Black_BW_Tropentarn) { scope = 1; };
    class ttt_Red_BW_Tropentarn: GVAR(Red_BW_Tropentarn) { scope = 1; };
    class ttt_Bronze_BW_Tropentarn: GVAR(Bronze_BW_Tropentarn) { scope = 1; };
    class ttt_Blue_BW_Tropentarn: GVAR(Blue_BW_Tropentarn) { scope = 1; };
    class ttt_Violet_BW_Tropentarn: GVAR(Violet_BW_Tropentarn) { scope = 1; };
    class ttt_White_BW_Tropentarn: GVAR(White_BW_Tropentarn) { scope = 1; };
    class ttt_Silver_BW_Tropentarn: GVAR(Silver_BW_Tropentarn) { scope = 1; };
    class ttt_Orange_BW_Tropentarn: GVAR(Orange_BW_Tropentarn) { scope = 1; };
    class ttt_Platinum_BW_Tropentarn: GVAR(Platinum_BW_Tropentarn) { scope = 1; };

    class ttt_Item_black_BW_Tropentarn: GVAR(Item_Black_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Green_alt_BW_Tropentarn: GVAR(Item_Green_alt_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Yellow_BW_Tropentarn: GVAR(Item_Yellow_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Grey_BW_Tropentarn: GVAR(Item_Grey_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Gold_BW_Tropentarn: GVAR(Item_Gold_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Green_BW_Tropentarn: GVAR(Item_Green_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Brown_BW_Tropentarn: GVAR(Item_Brown_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Red_BW_Tropentarn: GVAR(Item_Red_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Bronze_BW_Tropentarn: GVAR(Item_Bronze_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Blue_BW_Tropentarn: GVAR(Item_Blue_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Violet_BW_Tropentarn: GVAR(Item_Violet_BW_Tropentarn) { scope = 1; };
    class ttt_Item_White_BW_Tropentarn: GVAR(Item_White_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Silver_BW_Tropentarn: GVAR(Item_Silver_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Orange_BW_Tropentarn: GVAR(Item_Orange_BW_Tropentarn) { scope = 1; };
    class ttt_Item_Platinum_BW_Tropentarn: GVAR(Item_Platinum_BW_Tropentarn) { scope = 1; };

    class ttt_Item_Orange_BW_Flecktarn: GVAR(Item_Orange_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Yellow_BW_Flecktarn: GVAR(Item_Yellow_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Grey_BW_Flecktarn: GVAR(Item_Grey_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Gold_BW_Flecktarn: GVAR(Item_Gold_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Green_BW_Flecktarn: GVAR(Item_Green_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Green_alt_BW_Flecktarn: GVAR(Item_Green_alt_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Brown_BW_Flecktarn: GVAR(Item_Brown_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Black_BW_Flecktarn: GVAR(Item_Black_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Red_BW_Flecktarn: GVAR(Item_Red_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Bronze_BW_Flecktarn: GVAR(Item_Bronze_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Blue_BW_Flecktarn: GVAR(Item_Blue_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Violet_BW_Flecktarn: GVAR(Item_Violet_BW_Flecktarn) { scope = 1; };
    class ttt_Item_White_BW_Flecktarn: GVAR(Item_White_BW_Flecktarn) { scope = 1; };
    class ttt_Item_Silver_BW_Flecktarn: GVAR(Item_Silver_BW_Flecktarn) { scope = 1; };

    class ttt_Item_Silver_US_desert: GVAR(Item_Silver_US_Desert) { scope = 1; };
    class ttt_Item_Yellow_US_Desert: GVAR(Item_Yellow_US_Desert) { scope = 1; };
    class ttt_Item_Grey_US_Desert: GVAR(Item_Grey_US_Desert) { scope = 1; };
    class ttt_Item_Gold_US_Desert: GVAR(Item_Gold_US_Desert) { scope = 1; };
    class ttt_Item_Green_US_Desert: GVAR(Item_Green_US_Desert) { scope = 1; };
    class ttt_Item_Brown_US_Desert: GVAR(Item_Brown_US_Desert) { scope = 1; };
    class ttt_Item_Black_US_Desert: GVAR(Item_Black_US_Desert) { scope = 1; };
    class ttt_Item_Red_US_Desert: GVAR(Item_Red_US_Desert) { scope = 1; };
    class ttt_Item_Bronze_US_Desert: GVAR(Item_Bronze_US_Desert) { scope = 1; };
    class ttt_Item_Blue_US_Desert: GVAR(Item_Blue_US_Desert) { scope = 1; };
    class ttt_Item_Violet_US_Desert: GVAR(Item_Violet_US_Desert) { scope = 1; };
    class ttt_Item_White_US_Desert: GVAR(Item_White_US_Desert) { scope = 1; };
    class ttt_Item_Orange_US_Desert: GVAR(Item_Orange_US_Desert) { scope = 1; };
    class ttt_Item_Platinum_US_Desert: GVAR(Item_Platinum_US_Desert) { scope = 1; };
    class ttt_Item_Platinum_Pilot: GVAR(Item_Platinum_Pilot) { scope = 1; };
};
