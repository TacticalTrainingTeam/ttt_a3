class CfgVehicles {
    /*
    #############################################################
    ### Flaggen
    #############################################################
    */
    class FlagCarrierCore;
    class GVAR(Flag_Base): FlagCarrierCore {
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        icon = "iconObject_circle";
        displayName = CSTRING(flag_base_displayName);
        model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
    };

    class GVAR(Flag_Logo): GVAR(Flag_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flag_logo_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Logo_preview.jpg);
        editorSubcategory = "ttt_main_ttt";
        icon = "iconObject_circle";

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_sign_co.paa)));
        };
    };

    class GVAR(Flag_Blue): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_blue_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Blue_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_blau_co.paa)));
        };
    };

    class GVAR(Flag_Brown): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_brown_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Brown_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_braun_co.paa)));
        };
    };

    class GVAR(Flag_Bronze): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_bronze_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Bronze_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_bronze_co.paa)));
        };
    };

    class GVAR(Flag_Yellow): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_yellow_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Yellow_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_gelb_co.paa)));
        };
    };

    class GVAR(Flag_Gold): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_gold_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Gold_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_gold_co.paa)));
        };
    };

    class GVAR(Flag_Grey): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_grey_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Grey_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_grau_co.paa)));
        };
    };

    class GVAR(Flag_Green): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_green_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Green_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_gruen_co.paa)));
        };
    };

    class GVAR(Flag_Platinum): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_platinum_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Platinum_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_platin_co.paa)));
        };
    };

    class GVAR(Flag_Red): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_red_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Red_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_rot_co.paa)));
        };
    };

    class GVAR(Flag_Black): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_black_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Black_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_schwarz_co.paa)));
        };
    };

    class GVAR(Flag_Silver): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_silver_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Silver_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_silber_co.paa)));
        };
    };

    class GVAR(Flag_Violet): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_violet_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Violet_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_violet_co.paa)));
        };
    };

    class GVAR(Flag_White): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_white_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_White_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_weiss_co.paa)));
        };
    };

    class GVAR(Flag_Orange): GVAR(Flag_Logo) {
        displayName = CSTRING(flag_orange_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Orange_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(common,data\ttt_logo_orange_co.paa)));
        };
    };

    /*
    #############################################################
    ### Schilder Klein
    #############################################################
    */
    class Land_Noticeboard_F;
    class GVAR(Small_Base): Land_Noticeboard_F {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        icon = "iconObject_4x1";
        displayName = CSTRING(sign_small_base_displayName);
        hiddenSelections[] = {"board"};
    };

    class GVAR(Small_Blue): GVAR(Small_Base) {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = CSTRING(sign_small_blue_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Blue_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_blau_co.paa)};
    };

    class GVAR(Small_Bronze): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_bronze_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Bronze_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_bronze_co.paa)};
    };

    class GVAR(Small_Brown): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_brown_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Brown_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_braun_co.paa)};
    };

    class GVAR(Small_Yellow): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_yellow_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Yellow_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_gelb_co.paa)};
    };

    class GVAR(Small_Gold): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_gold_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Gold_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_gold_co.paa)};
    };

    class GVAR(Small_Grey): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_grey_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Grey_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_grau_co.paa)};
    };

    class GVAR(Small_Green): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_green_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Green_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_gruen_co.paa)};
    };

    class GVAR(Small_Platinum): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_platinum_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Platinum_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_platin_co.paa)};
    };

    class GVAR(Small_Red): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_red_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Red_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_rot_co.paa)};
    };

    class GVAR(Small_Black): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_black_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Black_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_schwarz_co.paa)};
    };
    class GVAR(Small_Silver): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_silver_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Silver_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_silber_co.paa)};
    };

    class GVAR(Small_Violet): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_violet_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Violet_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_violet_co.paa)};
    };

    class GVAR(Small_White): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_white_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_White_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_weiss_co.paa)};
    };

    class GVAR(Small_Logo): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_logo_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Logo_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_sign_co.paa)};
    };

    class GVAR(Small_Orange): GVAR(Small_Blue) {
        displayName = CSTRING(sign_small_orange_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Orange_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_orange_co.paa)};
    };

    /*
    #############################################################
    ### Schilder (groß)
    #############################################################
    */
    class SignAd_Sponsor_F;
    class GVAR(Large_Base): SignAd_Sponsor_F {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        icon = "iconObject_10x1";
        displayName = CSTRING(sign_large_base_displayName);
        hiddenSelections[] = {"camo"};
    };

    class GVAR(Large_Blue): GVAR(Large_Base) {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = CSTRING(sign_large_blue_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Blue_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_blau_co.paa)};
    };

    class GVAR(Large_Bronze): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_bronze_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Bronze_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_bronze_co.paa)};
    };

    class GVAR(Large_Brown): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_brown_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Brown_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_braun_co.paa)};
    };

    class GVAR(Large_Yellow): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_yellow_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Yellow_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_gelb_co.paa)};
    };

    class GVAR(Large_Gold): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_gold_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Gold_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_gold_co.paa)};
    };

    class GVAR(Large_Grey): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_grey_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Grey_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_grau_co.paa)};
    };

    class GVAR(Large_Green): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_green_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Green_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_gruen_co.paa)};
    };

    class GVAR(Large_Platinum): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_platinum_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Platinum_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_platin_co.paa)};
    };
    class GVAR(Large_Red): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_red_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Red_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_rot_co.paa)};
    };

    class GVAR(Large_Black): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_black_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Black_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_schwarz_co.paa)};
    };

    class GVAR(Large_Silver): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_silver_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Silver_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_silber_co.paa)};
    };

    class GVAR(Large_Violet): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_violet_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Violet_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_violet_co.paa)};
    };

    class GVAR(Large_White): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_white_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_White_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_weiss_co.paa)};
    };

    class GVAR(Large_Logo): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_logo_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Logo_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_sign_co.paa)};
    };

    class GVAR(Large_Orange): GVAR(Large_Blue) {
        displayName = CSTRING(sign_large_orange_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Orange_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOEF(common,data\ttt_logo_orange_co.paa)};
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/Eden placements
    //referencing them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Flag_Logo: GVAR(Flag_Logo) { scope = 1; };
    class ttt_Flag_Blue: GVAR(Flag_Blue) { scope = 1; };
    class ttt_Flag_Brown: GVAR(Flag_Brown) { scope = 1; };
    class ttt_Flag_Bronze: GVAR(Flag_Bronze) { scope = 1; };
    class ttt_Flag_Yellow: GVAR(Flag_Yellow) { scope = 1; };
    class ttt_Flag_Gold: GVAR(Flag_Gold) { scope = 1; };
    class ttt_Flag_Grey: GVAR(Flag_Grey) { scope = 1; };
    class ttt_Flag_Green: GVAR(Flag_Green) { scope = 1; };
    class ttt_Flag_Platinum: GVAR(Flag_Platinum) { scope = 1; };
    class ttt_Flag_Red: GVAR(Flag_Red) { scope = 1; };
    class ttt_Flag_Black: GVAR(Flag_Black) { scope = 1; };
    class ttt_Flag_Silver: GVAR(Flag_Silver) { scope = 1; };
    class ttt_Flag_Violet: GVAR(Flag_Violet) { scope = 1; };
    class ttt_Flag_White: GVAR(Flag_White) { scope = 1; };
    class ttt_Flag_Orange: GVAR(Flag_Orange) { scope = 1; };

    class ttt_Sign_Small_Blue: GVAR(Small_Blue) { scope = 1; };
    class ttt_Sign_Small_Bronze: GVAR(Small_Bronze) { scope = 1; };
    class ttt_Sign_Small_Brown: GVAR(Small_Brown) { scope = 1; };
    class ttt_Sign_Small_Yellow: GVAR(Small_Yellow) { scope = 1; };
    class ttt_Sign_Small_Gold: GVAR(Small_Gold) { scope = 1; };
    class ttt_Sign_Small_Grey: GVAR(Small_Grey) { scope = 1; };
    class ttt_Sign_Small_Green: GVAR(Small_Green) { scope = 1; };
    class ttt_Sign_Small_Platinum: GVAR(Small_Platinum) { scope = 1; };
    class ttt_Sign_Small_Red: GVAR(Small_Red) { scope = 1; };
    class ttt_Sign_Small_Black: GVAR(Small_Black) { scope = 1; };
    class ttt_Sign_Small_Silver: GVAR(Small_Silver) { scope = 1; };
    class ttt_Sign_Small_Violet: GVAR(Small_Violet) { scope = 1; };
    class ttt_Sign_Small_White: GVAR(Small_White) { scope = 1; };
    class ttt_Sign_Small_Logo: GVAR(Small_Logo) { scope = 1; };
    class ttt_Sign_Small_Orange: GVAR(Small_Orange) { scope = 1; };

    class ttt_Sign_Large_Blue: GVAR(Large_Blue) { scope = 1; };
    class ttt_Sign_Large_Bronze: GVAR(Large_Bronze) { scope = 1; };
    class ttt_Sign_Large_Brown: GVAR(Large_Brown) { scope = 1; };
    class ttt_Sign_Large_Yellow: GVAR(Large_Yellow) { scope = 1; };
    class ttt_Sign_Large_Gold: GVAR(Large_Gold) { scope = 1; };
    class ttt_Sign_Large_Grey: GVAR(Large_Grey) { scope = 1; };
    class ttt_Sign_Large_Green: GVAR(Large_Green) { scope = 1; };
    class ttt_Sign_Large_Platinum: GVAR(Large_Platinum) { scope = 1; };
    class ttt_Sign_Large_Red: GVAR(Large_Red) { scope = 1; };
    class ttt_Sign_Large_Black: GVAR(Large_Black) { scope = 1; };
    class ttt_Sign_Large_Silver: GVAR(Large_Silver) { scope = 1; };
    class ttt_Sign_Large_Violet: GVAR(Large_Violet) { scope = 1; };
    class ttt_Sign_Large_White: GVAR(Large_White) { scope = 1; };
    class ttt_Sign_Large_Logo: GVAR(Large_Logo) { scope = 1; };
    class ttt_Sign_Large_Orange: GVAR(Large_Orange) { scope = 1; };
};
