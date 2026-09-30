class CfgWeapons {

    class Vest_NoCamo_Base;

    class V_PlateCarrier3_rgr: Vest_NoCamo_Base { class ItemInfo; };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base { class ItemInfo; };

    class GVAR(Heavy_Base): V_PlateCarrier3_rgr {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = "ttt_Vest_Heavy_Base";
        hiddenSelections[] = { "camo" }; //needs to stay here to work

        class ItemInfo: ItemInfo {
            hiddenSelections[] = { "camo" };
        };
    };

    class GVAR(Lite_Base): V_PlateCarrier1_rgr {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = "ttt_Vest_Lite_Base";
        hiddenSelections[] = { "camo" };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = { "camo" };
        };
    };

    class GVAR(Heavy_Yellow_US_Desert): GVAR(Heavy_Base) {
        scope = 2;
        displayName = CSTRING(heavy_yellow_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Yellow_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_yellow_us_desert_co.paa)};
    };

    class GVAR(Lite_Yellow_US_Desert): GVAR(Lite_Base) {
        scope = 2;
        displayName = CSTRING(light_yellow_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Yellow_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_yellow_us_desert_co.paa)};
    };

    class GVAR(Heavy_Blue_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_blue_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Blue_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_blue_us_desert_co.paa)};
    };

    class GVAR(Lite_Blue_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_blue_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Blue_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_blue_us_desert_co.paa)};
    };

    class GVAR(Heavy_Black_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_black_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Black_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_black_us_desert_co.paa)};
    };

    class GVAR(Lite_Black_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_black_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Black_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_black_us_desert_co.paa)};
    };

    class GVAR(Heavy_Brown_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_brown_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Brown_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_brown_us_desert_co.paa)};
    };

    class GVAR(Lite_Brown_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_brown_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Brown_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_brown_us_desert_co.paa)};
    };

    class GVAR(Heavy_Gold_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_gold_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Gold_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_gold_us_desert_co.paa)};
    };

    class GVAR(Lite_Gold_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_gold_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Gold_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_gold_us_desert_co.paa)};
    };

    class GVAR(Heavy_Green_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_green_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Green_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_green_us_desert_co.paa)};
    };

    class GVAR(Lite_Green_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_green_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Green_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_green_us_desert_co.paa)};
    };

    class GVAR(Heavy_Grey_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_grey_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Grey_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_grey_us_desert_co.paa)};
    };

    class GVAR(Lite_Grey_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_grey_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Grey_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_grey_us_desert_co.paa)};
    };

    class GVAR(Heavy_Red_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_red_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Red_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_red_us_desert_co.paa)};
    };

    class GVAR(Lite_Red_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_red_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Red_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_red_us_desert_co.paa)};
    };

    class GVAR(Heavy_Violet_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_violet_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Violet_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_violet_us_desert_co.paa)};
    };

    class GVAR(Lite_Violet_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_violet_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Violet_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_violet_us_desert_co.paa)};
    };

    class GVAR(Heavy_Orange_US_Desert): GVAR(Heavy_Yellow_US_Desert) {
        displayName = CSTRING(heavy_orange_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Heavy_Orange_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_orange_us_desert_co.paa)};
    };

    class GVAR(Lite_Orange_US_Desert): GVAR(Lite_Yellow_US_Desert) {
        displayName = CSTRING(light_orange_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Lite_Orange_US_Desert_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_orange_us_desert_co.paa)};
    };

    class V_TacVest_brn;

    class GVAR(Crew_Base): V_TacVest_brn {
        scope = 0;
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "ttt_Vest_Crew_Base";
    };

    class GVAR(Crew_Bronze): GVAR(Crew_Base) {
        scope = 2;
        displayName = CSTRING(crew_bronze_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Crew_Bronze_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_bronze_co.paa)};
    };

    class GVAR(Crew_Silver): GVAR(Crew_Bronze) {
        displayName = CSTRING(crew_silver_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Crew_Silver_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_silver_co.paa)};
    };

    class GVAR(Crew_White): GVAR(Crew_Bronze) {
        displayName = CSTRING(crew_white_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Vest_Crew_White_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_vest_white_co.paa)};
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/loadouts referencing
    //them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Vest_Heavy_Yellow_US_Desert: GVAR(Heavy_Yellow_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Yellow_US_Desert: GVAR(Lite_Yellow_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Blue_US_Desert: GVAR(Heavy_Blue_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Blue_US_Desert: GVAR(Lite_Blue_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Black_US_Desert: GVAR(Heavy_Black_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Black_US_Desert: GVAR(Lite_Black_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Brown_US_Desert: GVAR(Heavy_Brown_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Brown_US_Desert: GVAR(Lite_Brown_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Gold_US_Desert: GVAR(Heavy_Gold_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Gold_US_Desert: GVAR(Lite_Gold_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Green_US_Desert: GVAR(Heavy_Green_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Green_US_Desert: GVAR(Lite_Green_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Grey_US_Desert: GVAR(Heavy_Grey_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Grey_US_Desert: GVAR(Lite_Grey_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Red_US_Desert: GVAR(Heavy_Red_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Red_US_Desert: GVAR(Lite_Red_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Violet_US_Desert: GVAR(Heavy_Violet_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Violet_US_Desert: GVAR(Lite_Violet_US_Desert) { scope = 1; };
    class ttt_Vest_Heavy_Orange_US_Desert: GVAR(Heavy_Orange_US_Desert) { scope = 1; };
    class ttt_Vest_Lite_Orange_US_Desert: GVAR(Lite_Orange_US_Desert) { scope = 1; };

    class ttt_Vest_Crew_Bronze: GVAR(Crew_Bronze) { scope = 1; };
    class ttt_Vest_Crew_Silver: GVAR(Crew_Silver) { scope = 1; };
    class ttt_Vest_Crew_White: GVAR(Crew_White) { scope = 1; };
};
