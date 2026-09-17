class CfgWeapons {

    class Uniform_Base;
    class U_B_CombatUniform_mcam: Uniform_Base { class ItemInfo; };

    //US Desert
    class GVAR(Base_item): U_B_CombatUniform_mcam {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = "TTT Uniform Base";
        model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";

        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Uniform_Base_US";
            containerClass = "Supply60"; // Supply40
        };
    };

    class GVAR(plain_US_Desert_item): GVAR(Base_item) {
        scope = 2;
        displayName = CSTRING(plain_US_desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Uniform_Base_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(plain_US_Desert);
        };
    };

    class GVAR(Yellow_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Yellow_US_Desert);
        };
    };

    class GVAR(Grey_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Grey_US_Desert);
        };
    };

    class GVAR(Gold_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Gold_US_Desert);
        };
    };
    class GVAR(Silver_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(silver_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Silver_US_Desert);
        };
    };

    class GVAR(Green_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(green_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Green_US_Desert);
        };
    };

    class GVAR(Brown_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Brown_US_Desert);
        };
    };

    class GVAR(Black_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(black_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Black_US_Desert);
        };
    };

    class GVAR(Red_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(red_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Red_US_Desert);
        };
    };

    class GVAR(Bronze_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Bronze_US_Desert);
        };
    };

    class GVAR(Blue_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Blue_US_Desert);
        };
    };

    class GVAR(Violet_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Violet_US_Desert);
        };
    };

    class GVAR(White_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(white_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(White_US_Desert);
        };
    };

    class GVAR(Orange_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_us_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Orange_US_Desert);
        };
    };

    class GVAR(Platinum_US_Desert_item): GVAR(plain_US_Desert_item) {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_us_ca.paa);
        ACE_GForceCoef = 0.55;

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Platinum_US_Desert);
        };
    };

    //BW Fleck
    class GVAR(plain_BW_Flecktarn_item): GVAR(Base_item) {
        scope = 2;
        displayName = CSTRING(plain_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_plain_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(plain_BW_Flecktarn);
        };
    };

    class GVAR(Yellow_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Yellow_BW_Flecktarn);
        };
    };

    class GVAR(Grey_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Grey_BW_Flecktarn);
        };
    };

    class GVAR(Orange_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Orange_BW_Flecktarn);
        };
    };

    class GVAR(Gold_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Gold_BW_Flecktarn);
        };
    };

    class GVAR(Green_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Green_BW_Flecktarn);
        };
    };


    class GVAR(Green_alt_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_alt_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Green_alt_BW_Flecktarn);
        };
    };

    class GVAR(Brown_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Brown_BW_Flecktarn);
        };
    };

    class GVAR(Black_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Black_BW_Flecktarn);
        };
    };

    class GVAR(Red_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Red_BW_Flecktarn);
        };
    };

    class GVAR(Bronze_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Bronze_BW_Flecktarn);
        };
    };

    class GVAR(Blue_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Blue_BW_Flecktarn);
        };
    };

    class GVAR(Violet_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Violet_BW_Flecktarn);
        };
    };

    class GVAR(White_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(White_BW_Flecktarn);
        };
    };

    class GVAR(Silver_BW_Flecktarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_bw_flecktarn_ca.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Silver_BW_Flecktarn);
        };
    };

    class GVAR(Platinum_Pilot_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(platinum_pilot_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_pilot_ca.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Platinum_Pilot);
        };
    };

    //BW Tropen
    class GVAR(Yellow_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Yellow_BW_Tropentarn);
        };
    };

    class GVAR(Grey_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Grey_BW_Tropentarn);
        };
    };

    class GVAR(Orange_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Orange_BW_Tropentarn);
        };
    };

    class GVAR(Gold_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Gold_BW_Tropentarn);
        };
    };

    class GVAR(Green_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Green_BW_Tropentarn);
        };
    };

    class GVAR(Green_alt_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_alt_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Green_alt_BW_Tropentarn);
        };
    };

    class GVAR(Brown_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Brown_BW_Tropentarn);
        };
    };

    class GVAR(Black_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Black_BW_Tropentarn);
        };
    };

    class GVAR(Red_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Red_BW_Tropentarn);
        };
    };

    class GVAR(Bronze_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Bronze_BW_Tropentarn);
        };
    };

    class GVAR(Blue_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Blue_BW_Tropentarn);
        };
    };

    class GVAR(Silver_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(silver_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Silver_BW_Tropentarn);
        };
    };

    class GVAR(Platinum_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(platinum_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Platinum_BW_Tropentarn);
        };
    };

    class GVAR(Violet_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(Violet_BW_Tropentarn);
        };
    };

    class GVAR(White_BW_Tropentarn_item): GVAR(plain_BW_Flecktarn_item) {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_bw_tropen_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(White_BW_Tropentarn);
        };
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/loadouts referencing
    //them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Uniform_plain_US_Desert: GVAR(plain_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Yellow_US_Desert: GVAR(Yellow_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Grey_US_Desert: GVAR(Grey_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Gold_US_Desert: GVAR(Gold_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Silver_US_Desert: GVAR(Silver_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Green_US_Desert: GVAR(Green_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Brown_US_Desert: GVAR(Brown_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Black_US_Desert: GVAR(Black_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Red_US_Desert: GVAR(Red_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Bronze_US_Desert: GVAR(Bronze_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Blue_US_Desert: GVAR(Blue_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Violet_US_Desert: GVAR(Violet_US_Desert_item) { scope = 1; };
    class ttt_Uniform_White_US_Desert: GVAR(White_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Orange_US_Desert: GVAR(Orange_US_Desert_item) { scope = 1; };
    class ttt_Uniform_Platinum_US_Desert: GVAR(Platinum_US_Desert_item) { scope = 1; };

    class ttt_Uniform_plain_BW_Flecktarn: GVAR(plain_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Yellow_BW_Flecktarn: GVAR(Yellow_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Grey_BW_Flecktarn: GVAR(Grey_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Orange_BW_Flecktarn: GVAR(Orange_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Gold_BW_Flecktarn: GVAR(Gold_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Green_BW_Flecktarn: GVAR(Green_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Green_alt_BW_Flecktarn: GVAR(Green_alt_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Brown_BW_Flecktarn: GVAR(Brown_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Black_BW_Flecktarn: GVAR(Black_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Red_BW_Flecktarn: GVAR(Red_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Bronze_BW_Flecktarn: GVAR(Bronze_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Blue_BW_Flecktarn: GVAR(Blue_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Violet_BW_Flecktarn: GVAR(Violet_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_White_BW_Flecktarn: GVAR(White_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Silver_BW_Flecktarn: GVAR(Silver_BW_Flecktarn_item) { scope = 1; };
    class ttt_Uniform_Platinum_Pilot: GVAR(Platinum_Pilot_item) { scope = 1; };

    class ttt_Uniform_Yellow_BW_Tropentarn: GVAR(Yellow_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Grey_BW_Tropentarn: GVAR(Grey_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Orange_BW_Tropentarn: GVAR(Orange_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Gold_BW_Tropentarn: GVAR(Gold_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Green_BW_Tropentarn: GVAR(Green_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Green_alt_BW_Tropentarn: GVAR(Green_alt_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Brown_BW_Tropentarn: GVAR(Brown_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Black_BW_Tropentarn: GVAR(Black_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Red_BW_Tropentarn: GVAR(Red_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Bronze_BW_Tropentarn: GVAR(Bronze_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Blue_BW_Tropentarn: GVAR(Blue_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Silver_BW_Tropentarn: GVAR(Silver_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Platinum_BW_Tropentarn: GVAR(Platinum_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_Violet_BW_Tropentarn: GVAR(Violet_BW_Tropentarn_item) { scope = 1; };
    class ttt_Uniform_White_BW_Tropentarn: GVAR(White_BW_Tropentarn_item) { scope = 1; };
};
