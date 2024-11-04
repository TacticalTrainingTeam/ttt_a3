class CfgWeapons {

    class Vest_NoCamo_Base;

    class V_PlateCarrier3_rgr : Vest_NoCamo_Base { class ItemInfo; };    
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base { class ItemInfo; };
    
    class ttt_Vest_Heavy_Base : V_PlateCarrier3_rgr {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = QUOTE(TTT Veste Basis (Schwer));
        hiddenSelections[] = { "camo" }; //needs to stay here to work
        hiddenSelectionsTextures[] = { QPATHTOF(data\vest_yellow_co.paa) };

        class ItemInfo : ItemInfo {
            hiddenSelections[] = { "camo" };
        };
    };

    class ttt_Vest_Lite_Base : V_PlateCarrier1_rgr {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = QUOTE(TTT Veste Basis (Leicht));
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\vest_yellow_co.paa) };

        class ItemInfo : ItemInfo {
            hiddenSelections[] = { "camo" };
        };
    };

    class ttt_Vest_Heavy_Yellow_US_Desert : ttt_Vest_Heavy_Base {
        scope = 2;
        displayName = CSTRING(heavy_yellow_DisplayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_yellow_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Yellow_US_Desert : ttt_Vest_Lite_Base {
        scope = 2;
        displayName = CSTRING(light_yellow_DisplayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_yellow_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Blue_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Blau (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_blue_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Blue_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Blau (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_blue_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Black_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Schwarz (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_black_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Black_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Schwarz (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_black_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Brown_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Braun (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_brown_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Brown_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Braun (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_brown_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Gold_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Gold (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_gold_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Gold_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Gold (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_gold_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Green_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Grün (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_green_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Green_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Grün (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_green_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Grey_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Grau (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_grey_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Grey_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Grau (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_grey_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Red_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Rot (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_red_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Red_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Rot (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_red_us_desert_co.paa)};
    };
    
    class ttt_Vest_Heavy_Violet_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Violett (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_violet_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Violet_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Violett (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_violet_us_desert_co.paa)};
    };

    class ttt_Vest_Heavy_Orange_US_Desert : ttt_Vest_Heavy_Yellow_US_Desert {
        displayName = QUOTE(TTT Schwere Weste Orange (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_orange_us_desert_co.paa)};
    };
    
    class ttt_Vest_Lite_Orange_US_Desert : ttt_Vest_Lite_Yellow_US_Desert {
        displayName = QUOTE(TTT Leichte Weste Orange (US Desert));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_orange_us_desert_co.paa)};
    };     
    
    class V_TacVest_brn;
    
    class ttt_Vest_Crew_Base : V_TacVest_brn {
        scope = 0;
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = QUOTE(TTT Crew Veste Basis);
    };

    class ttt_Vest_Crew_US_Desert : ttt_Vest_Crew_Base {
        scope = 2;
        displayName = QUOTE(TTT Crew Weste (US Desert));
    };
    
    class ttt_Vest_Crew_Bronze : ttt_Vest_Crew_US_Desert {
        displayName = QUOTE(TTT Crew Weste Bronze);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_bronze_co.paa)};
    };
    
    class ttt_Vest_Crew_Silver : ttt_Vest_Crew_US_Desert {
        displayName = QUOTE(TTT Crew Weste Silber);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_silver_co.paa)};
    };
    
    class ttt_Vest_Crew_White : ttt_Vest_Crew_US_Desert {
        displayName = QUOTE(TTT Crew Weste Weiss);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_white_co.paa)};
    };

};