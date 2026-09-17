class CfgVehicles {
    //Radio Backpacks
    class B_RadioBag_01_base_F;
    class GVAR(radio_Base): B_RadioBag_01_base_F {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 320;
        mass = 50;
    };

    class GVAR(radio_coyote): GVAR(radio_Base) {
        scope = 2;
        displayName = CSTRING(radio_coyote);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_coyote_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_coyote_co.paa)};
    };

    class GVAR(radio_olive): GVAR(radio_coyote) {
        displayName = CSTRING(radio_olive);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_olive_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_olive_co.paa)};
    };

    class GVAR(radio_brown_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_brown_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_brown_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_brown_us_desert_co.paa)};
    };

    class GVAR(radio_bronze_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_bronze_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_bronze_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_bronze_us_desert_co.paa)};
    };

    class GVAR(radio_green_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_green_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_green_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_green_us_desert_co.paa)};
    };

    class GVAR(radio_grey_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_grey_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_grey_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_grey_us_desert_co.paa)};
    };

    class GVAR(radio_gold_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_gold_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_gold_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_gold_us_desert_co.paa)};
    };

    class GVAR(radio_platinum_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_platinum_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_platinum_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_platinum_us_desert_co.paa)};
    };

    class GVAR(radio_silver_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_silver_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_silver_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_silver_us_desert_co.paa)};
    };

    class GVAR(radio_white_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_white_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_white_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_white_us_desert_co.paa)};
    };

    class GVAR(radio_yellow_us_desert): GVAR(radio_coyote) {
        displayName = CSTRING(radio_yellow_us_desert);
        picture = QPATHTOF(data\pictures\ttt_backpack_radio_yellow_us_desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_yellow_us_desert_co.paa)};
    };

    // Medical backpacks

    class B_Kitbag_Base;
    class GVAR(medic_Base): B_Kitbag_Base {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        maximumLoad = 400;
        mass = 30;
    };

    class GVAR(medic_tan_01): GVAR(medic_Base) {
        scope = 2;
        displayName = CSTRING(medic_tan_01);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_01_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_01_tan_co.paa)};
    };

    class GVAR(medic_tan_02): GVAR(medic_tan_01) {
        displayName = CSTRING(medic_tan_02);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_02_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_02_tan_co.paa)};
    };

    class GVAR(medic_tan_03): GVAR(medic_tan_01) {
        displayName = CSTRING(medic_tan_03);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_tan_03_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_03_tan_co.paa)};
    };

    class GVAR(medic_rgr_01): GVAR(medic_tan_01) {
        displayName = CSTRING(medic_rgr_01);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_rgr_01_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_01_rgr_co.paa)};
    };

    class GVAR(medic_rgr_02): GVAR(medic_tan_01) {
        displayName = CSTRING(medic_rgr_02);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_rgr_02_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_02_rgr_co.paa)};
    };

    class GVAR(medic_rgr_03): GVAR(medic_tan_01) {
        displayName = CSTRING(medic_rgr_03);
        picture = QPATHTOF(data\pictures\ttt_backpack_medic_rgr_03_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_backpack_medic_03_rgr_co.paa)};
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/loadouts referencing
    //them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_backpack_radio_coyote: GVAR(radio_coyote) { scope = 1; };
    class ttt_backpack_radio_olive: GVAR(radio_olive) { scope = 1; };
    class ttt_backpack_radio_brown_us_desert: GVAR(radio_brown_us_desert) { scope = 1; };
    class ttt_backpack_radio_bronze_us_desert: GVAR(radio_bronze_us_desert) { scope = 1; };
    class ttt_backpack_radio_green_us_desert: GVAR(radio_green_us_desert) { scope = 1; };
    class ttt_backpack_radio_grey_us_desert: GVAR(radio_grey_us_desert) { scope = 1; };
    class ttt_backpack_radio_gold_us_desert: GVAR(radio_gold_us_desert) { scope = 1; };
    class ttt_backpack_radio_platinum_us_desert: GVAR(radio_platinum_us_desert) { scope = 1; };
    class ttt_backpack_radio_silver_us_desert: GVAR(radio_silver_us_desert) { scope = 1; };
    class ttt_backpack_radio_white_us_desert: GVAR(radio_white_us_desert) { scope = 1; };
    class ttt_backpack_radio_yellow_us_desert: GVAR(radio_yellow_us_desert) { scope = 1; };

    class ttt_backpack_medic_tan_01: GVAR(medic_tan_01) { scope = 1; };
    class ttt_backpack_medic_tan_02: GVAR(medic_tan_02) { scope = 1; };
    class ttt_backpack_medic_tan_03: GVAR(medic_tan_03) { scope = 1; };
    class ttt_backpack_medic_rgr_01: GVAR(medic_rgr_01) { scope = 1; };
    class ttt_backpack_medic_rgr_02: GVAR(medic_rgr_02) { scope = 1; };
    class ttt_backpack_medic_rgr_03: GVAR(medic_rgr_03) { scope = 1; };
};
