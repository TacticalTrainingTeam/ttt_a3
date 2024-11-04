class CfgVehicles {
    class B_RadioBag_01_black_F;

    class ttt_Radiobackpack_Base : B_RadioBag_01_black_F {
        author = QUOTE(Tactical Training Team);
        scope = 0;
        maximumLoad = 320;
        mass = 50;
    };

    class ttt_backpack_radio_coyote : ttt_Radiobackpack_Base {
        scope = 2;
        displayName = CSTRING(radio_coyote);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_coyote_co.paa)};
    };

    class ttt_backpack_radio_olive : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack (Olive));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_olive_co.paa)};
    };

     class ttt_backpack_radio_brown_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Braun (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_brown_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_bronze_us_desert : ttt_backpack_radio_coyote {
        scope = 2;
        displayName = QUOTE(TTT Funk Rucksack Bronze (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_bronze_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_green_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Grün (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_green_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_grey_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Grau (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_grey_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_gold_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Gold (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_gold_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_platinum_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Platin (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_platinum_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_silver_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Silber (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_silver_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_white_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Weiss (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_white_us_desert_co.paa)};
    };
    
    class ttt_backpack_radio_yellow_us_desert : ttt_backpack_radio_coyote {
        displayName = QUOTE(TTT Funk Rucksack Gelb (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_backpack_radio_yellow_us_desert_co.paa)};
    };
};

