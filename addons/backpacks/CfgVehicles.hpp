class CfgVehicles {
    class B_RadioBag_01_black_F;

    class ttt_Radiobackpack_Base: B_RadioBag_01_black_F {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 320;
        mass = 50;
    };

    class ttt_backpack_radio_coyote: ttt_Radiobackpack_Base {
        scope = 2;
        displayName = CSTRING(radio_coyote);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_coyote_ca.paa);
        hiddenSelections[] = {"Camo1"};
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

    class B_Kitbag_tan;

    class ttt_backpack_Base: B_Kitbag_tan {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 400;
        mass = 30;
    };

    class ttt_backpack_medic_tan_01: ttt_backpack_Base {
        scope = 2;
        displayName = CSTRING(Backpacks_medic_tan_01);
        picture = QPATHTOF(data\pictures\ttt_01_backpack_fast_tan_co_ca.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\medic_01_backpack_fast_tan_co.paa)};
    };

    class ttt_backpack_medic_tan_02: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(Backpacks_medic_tan_02);
        picture = QPATHTOF(data\pictures\ttt_02_backpack_fast_tan_co_ca.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_02_backpack_fast_tan_co.paa)};
    };

    class ttt_backpack_medic_tan_03: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(Backpacks_medic_tan_03);
        picture = QPATHTOF(data\pictures\ttt_03_backpack_fast_tan_co_ca.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_03_backpack_fast_tan_co.paa)};
    };

    class ttt_backpack_medic_rgr_01: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(Backpacks_medic_rgr_01);
        picture = QPATHTOF(data\pictures\ttt_01_backpack_fast_tan_co_ca.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_01_backpack_fast_rgr_co.paa)};
    };

    class ttt_backpack_medic_rgr_02: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(Backpacks_medic_rgr_02);
        picture = QPATHTOF(data\pictures\ttt_02_backpack_fast_tan_co_ca.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_02_backpack_fast_rgr_co.paa)};
    };

    class ttt_backpack_medic_rgr_03: ttt_backpack_medic_tan_01 {
        displayName = CSTRING(Backpacks_medic_rgr_03);
        picture = QPATHTOF(data\pictures\ttt_03_backpack_fast_tan_co_ca.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_03_backpack_fast_rgr_co.paa)};
    };
};
