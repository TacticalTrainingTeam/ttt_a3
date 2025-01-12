class CfgVehicles {
    /*
    #############################################################
    ### Flaggen
    #############################################################
    */
    class FlagCarrierCore;
    class ttt_Flag_Base: FlagCarrierCore {
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        icon = "iconObject_circle";
        displayName = CSTRING(flag_base_displayName);
        model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
    };

    class ttt_Flag_Logo: ttt_Flag_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flag_logo_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Logo_preview.jpg);
        editorSubcategory = "ttt_main_ttt";
        icon = "iconObject_circle";
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_sign_co.paa)));
        };
    };

    class ttt_Flag_Blue: ttt_Flag_Logo {
        displayName = CSTRING(flag_blue_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Blue_preview.jpg);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_blau_co.paa)));
        };
    };

    class ttt_Flag_Brown: ttt_Flag_Logo {
        displayName = CSTRING(flag_brown_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Brown_preview.jpg);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_braun_co.paa)));
        };
    };

    class ttt_Flag_Bronze: ttt_Flag_Logo {
        displayName = CSTRING(flag_bronze_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Bronze_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_bronze_co.paa)));
        };
    };

    class ttt_Flag_Yellow: ttt_Flag_Logo {
        displayName = CSTRING(flag_yellow_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Yellow_preview.jpg);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_gelb_co.paa)));
        };
    };

    class ttt_Flag_Gold: ttt_Flag_Logo {
        displayName = CSTRING(flag_gold_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Gold_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_gold_co.paa)));
        };
    };

    class ttt_Flag_Grey: ttt_Flag_Logo {
        displayName = CSTRING(flag_grey_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Grey_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_grau_co.paa)));
        };
    };

    class ttt_Flag_Green: ttt_Flag_Logo {
        displayName = CSTRING(flag_green_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Green_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_gruen_co.paa)));
        };
    };

    class ttt_Flag_Platinum: ttt_Flag_Logo {
        displayName = CSTRING(flag_platinum_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Platinum_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_platin_co.paa)));
        };
    };

    class ttt_Flag_Red: ttt_Flag_Logo {
        displayName = CSTRING(flag_red_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Red_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_rot_co.paa)));
        };
    };

    class ttt_Flag_Black: ttt_Flag_Logo {
        displayName = CSTRING(flag_black_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Black_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_schwarz_co.paa)));
        };
    };

    class ttt_Flag_Silver: ttt_Flag_Logo {
        displayName = CSTRING(flag_silver_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Silver_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_silber_co.paa)));
        };
    };

    class ttt_Flag_Violet: ttt_Flag_Logo {
        displayName = CSTRING(flag_violet_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Violet_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_violet_co.paa)));
        };
    };

    class ttt_Flag_White: ttt_Flag_Logo {
        displayName = CSTRING(flag_white_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_White_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_weiss_co.paa)));
        };
    };

    class ttt_Flag_Orange: ttt_Flag_Logo {
        displayName = CSTRING(flag_orange_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Flag_Orange_preview.jpg);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_orange_co.paa)));
        };
    };

    /*
    #############################################################
    ### Schilder Klein
    #############################################################
    */
    class Land_Noticeboard_F;
    class ttt_Sign_Small_Base: Land_Noticeboard_F {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        icon = "iconObject_4x1";
        displayName = CSTRING(sign_small_base_displayName);
        hiddenSelections[] = {"board"};
    };

    class ttt_Sign_Small_Blue: ttt_Sign_Small_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = CSTRING(sign_small_blue_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Blue_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_blau_co.paa)};
    };

    class ttt_Sign_Small_Bronze: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_bronze_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Bronze_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_bronze_co.paa)};
    };

    class ttt_Sign_Small_Brown: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_brown_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Brown_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_braun_co.paa)};
    };

    class ttt_Sign_Small_Yellow: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_yellow_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Yellow_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gelb_co.paa)};
    };

    class ttt_Sign_Small_Gold: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_gold_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Gold_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gold_co.paa)};
    };

    class ttt_Sign_Small_Grey: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_grey_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Grey_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_grau_co.paa)};
    };

    class ttt_Sign_Small_Green: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_green_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Green_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gruen_co.paa)};
    };

    class ttt_Sign_Small_Platinum: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_platinum_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Platinum_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_platin_co.paa)};
    };

    class ttt_Sign_Small_Red: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_red_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Red_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_rot_co.paa)};
    };

    class ttt_Sign_Small_Black: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_black_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Black_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_schwarz_co.paa)};
    };
    class ttt_Sign_Small_Silver: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_silver_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Silver_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_silber_co.paa)};
    };

    class ttt_Sign_Small_Violet: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_violet_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Violet_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_violett_co.paa)};
    };

    class ttt_Sign_Small_White: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_white_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_White_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_weiss_co.paa)};
    };

    class ttt_Sign_Small_Logo: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_logo_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Logo_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_sign_co.paa)};
    };

    class ttt_Sign_Small_Orange: ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_orange_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Small_Orange_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_orange_co.paa)};
    };

    /*
    #############################################################
    ### Schilder (groß)
    #############################################################
    */
    class SignAd_Sponsor_F;
    class ttt_Sign_Large_Base: SignAd_Sponsor_F {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        icon = "iconObject_10x1";
        displayName = CSTRING(sign_large_base_displayName);
        hiddenSelections[] = {"camo"};
    };

    class ttt_Sign_Large_Blue: ttt_Sign_Large_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = CSTRING(sign_large_blue_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Blue_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_blau_co.paa)};
    };

    class ttt_Sign_Large_Bronze: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_bronze_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Bronze_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_bronze_co.paa)};
    };

    class ttt_Sign_Large_Brown: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_brown_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Brown_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_braun_co.paa)};
    };

    class ttt_Sign_Large_Yellow: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_yellow_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Yellow_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gelb_co.paa)};
    };

    class ttt_Sign_Large_Gold: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_gold_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Gold_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gold_co.paa)};
    };

    class ttt_Sign_Large_Grey: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_grey_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Grey_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_grau_co.paa)};
    };

    class ttt_Sign_Large_Green: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_green_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Green_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gruen_co.paa)};
    };

    class ttt_Sign_Large_Platinum: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_platinum_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Platinum_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_platin_co.paa)};
    };
    class ttt_Sign_Large_Red: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_red_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Red_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_rot_co.paa)};
    };

    class ttt_Sign_Large_Black: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_black_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Black_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_schwarz_co.paa)};
    };

    class ttt_Sign_Large_Silver: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_silver_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Silver_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_silber_co.paa)};
    };

    class ttt_Sign_Large_Violet: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_violet_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Violet_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_violett_co.paa)};
    };

    class ttt_Sign_Large_White: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_white_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_White_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_weiss_co.paa)};
    };

    class ttt_Sign_Large_Logo: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_logo_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Logo_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_sign_co.paa)};
    };

    class ttt_Sign_Large_Orange: ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_orange_displayName);
        editorPreview = QPATHTOF(data\previews\ttt_Sign_Large_Orange_preview.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_orange_co.paa)};
    };
};