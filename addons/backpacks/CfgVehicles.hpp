class CfgVehicles {
    //Radio Backpacks
    class B_RadioBag_01_base_F;
    class ttt_backpack_radio_Base: B_RadioBag_01_base_F {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 320;
        mass = 50;
    };

    class ttt_backpack_radio_coyote: ttt_backpack_radio_Base {
        scope = 2;
        displayName = CSTRING(radio_coyote);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_coyote_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_coyote_co.paa)};
    };

    class ttt_backpack_radio_olive: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_olive);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_olive_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_olive_co.paa)};
    };

     class ttt_backpack_radio_brown_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_brown_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_brown_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_brown_us_desert_co.paa)};
    };

    class ttt_backpack_radio_bronze_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_bronze_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_bronze_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_bronze_us_desert_co.paa)};
    };

    class ttt_backpack_radio_green_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_green_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_green_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_green_us_desert_co.paa)};
    };

    class ttt_backpack_radio_grey_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_grey_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_grey_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_grey_us_desert_co.paa)};
    };

    class ttt_backpack_radio_gold_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_gold_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_gold_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_gold_us_desert_co.paa)};
    };

    class ttt_backpack_radio_platinum_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_platinum_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_platinum_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_platinum_us_desert_co.paa)};
    };

    class ttt_backpack_radio_silver_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_silver_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_silver_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_silver_us_desert_co.paa)};
    };

    class ttt_backpack_radio_white_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_white_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_white_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_white_us_desert_co.paa)};
    };

    class ttt_backpack_radio_yellow_us_desert: ttt_backpack_radio_coyote {
        displayName = CSTRING(radio_yellow_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_yellow_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_yellow_us_desert_co.paa)};
    };

    // Medical backpacks
    class B_Kitbag_Base;
    class ttt_backpack_medic_Base: B_Kitbag_Base {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 400;
        mass = 30;
    };

    class ttt_backpack_medic_tan_01: ttt_backpack_medic_Base {
        scope = 2;
        displayName = CSTRING(medic_tan_01);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_01_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_01_tan_co.paa)};
    };

    class ttt_backpack_medic_tan_02: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(medic_tan_02);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_02_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_02_tan_co.paa)};
    };

    class ttt_backpack_medic_tan_03: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(medic_tan_03);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_03_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_03_tan_co.paa)};
    };

    class ttt_backpack_medic_rgr_01: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(medic_rgr_01);
        //picture = QPATHTOF(data\pictures\ttt_backpack_medic_rgr_01_ca.paa);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_01_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_01_rgr_co.paa)};
    };

    class ttt_backpack_medic_rgr_02: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(medic_rgr_02);
        //picture = QPATHTOF(data\pictures\ttt_backpack_medic_rgr_02_ca.paa);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_02_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_02_rgr_co.paa)};
    };

    class ttt_backpack_medic_rgr_03: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(medic_rgr_03);
        //picture = QPATHTOF(data\pictures\ttt_backpack_medic_rgr_03_ca.paa);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_03_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_03_rgr_co.paa)};
    };
};
