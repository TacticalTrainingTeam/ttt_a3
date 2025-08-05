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

    class medic_backpack_Base: B_Kitbag_tan {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 380;
        mass = 30;
    };

    class medic_01_backpack_fast_tan_co: medic_backpack_Base {
        scope = 2;
        displayName = CSTRING(medic_01_backpack_fast_tan_co);
        picture = QPATHTOF(data\pictures\medic_01_backpack_fast_tan_co_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\medic_01_backpack_fast_tan_co.paa)};
    };

    class medic_02_backpack_fast_tan_co: medic_01_backpack_fast_tan_co {
        displayName = CSTRING(medic_02_backpack_fast_tan_co);
        picture = QPATHTOF(data\pictures\medic_02_backpack_fast_tan_co_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\medic_02_backpack_fast_tan_co.paa)};
    };
};

