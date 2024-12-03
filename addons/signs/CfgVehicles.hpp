class CfgVehicleClasses {
    class ttt_Flags {
        displayName = CSTRING(ttt_Flags_displayName);         
        priority = 25;                         
    };
    class signs_Small {
        displayName = CSTRING(signs_Small_displayName);
        priority = 26;
    };
    class signs_Large {
        displayName = CSTRING(signs_Large_displayName);         
        priority = 27;                         
    };
};

class CfgVehicles {
    /*
    #############################################################
    ### Flaggen
    #############################################################
    */
    class FlagCarrierCore;
    class ttt_Flag_Base : FlagCarrierCore {
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(flag_base_displayName);
        model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
        vehicleClass = "ttt_Flags";
    };

    class ttt_Flag_Logo : ttt_Flag_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flag_logo_displayName);
        editorSubcategory = "ttt_main_ttt";
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_sign_co.paa)));
        };
    };

    class ttt_Flag_Blue : ttt_Flag_Logo {
        displayName = CSTRING(flag_blue_displayName);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_blau_co.paa)));
        };
    };

    class ttt_Flag_Brown : ttt_Flag_Logo {
        displayName = CSTRING(flag_brown_displayName);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_braun_co.paa)));
        };
    };

    class ttt_Flag_Bronze : ttt_Flag_Logo {
        displayName = CSTRING(flag_bronze_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_bronze_co.paa)));
        };
    };

    class ttt_Flag_Yellow : ttt_Flag_Logo {
        displayName = CSTRING(flag_yellow_displayName);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_gelb_co.paa)));
        };
    };

    class ttt_Flag_Gold : ttt_Flag_Logo {
        displayName = CSTRING(flag_gold_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_gold_co.paa)));
        };
    };

    class ttt_Flag_Grey : ttt_Flag_Logo {
        displayName = CSTRING(flag_grey_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_grau_co.paa)));
        };
    };

    class ttt_Flag_Green : ttt_Flag_Logo {
        displayName = CSTRING(flag_green_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_gruen_co.paa)));
        };
    };

    class ttt_Flag_Platinum : ttt_Flag_Logo {
        displayName = CSTRING(flag_platinum_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_platin_co.paa)));
        };
    };

    class ttt_Flag_Red : ttt_Flag_Logo {
        displayName = CSTRING(flag_red_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_rot_co.paa)));
        };
    };

    class ttt_Flag_Black : ttt_Flag_Logo {
        displayName = CSTRING(flag_black_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_schwarz_co.paa)));
        };
    };

    class ttt_Flag_Silver : ttt_Flag_Logo {
        displayName = CSTRING(flag_silver_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_silber_co.paa)));
        };
    };

    class ttt_Flag_Violet : ttt_Flag_Logo {
        displayName = CSTRING(flag_violet_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_violett_co.paa)));
        };
    };

    class ttt_Flag_White : ttt_Flag_Logo {
        displayName = CSTRING(flag_white_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_weiss_co.paa)));
        };
    };

    class ttt_Flag_Orange : ttt_Flag_Logo {
        displayName = CSTRING(flag_orange_displayName);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(main,data\ttt_logo_orange_co.paa)));
        };
    };

    /*
    #############################################################
    ### Schilder Klein
    #############################################################
    */
    class NonStrategic;
    class ttt_Sign_Small_Base : NonStrategic {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(sign_small_base_displayName);
        model = "\A3\Structures_F\Civ\InfoBoards\Noticeboard_F.p3d";
        vehicleClass = "signs_Small";
        hiddenSelections[] = {"board"};
    };

    class ttt_Sign_Small_Blue : ttt_Sign_Small_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = CSTRING(sign_small_blue_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_blau_co.paa)};
    };

    class ttt_Sign_Small_Bronze : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_bronze_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_bronze_co.paa)};
    };

    class ttt_Sign_Small_Brown : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_brown_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_braun_co.paa)};
    };

    class ttt_Sign_Small_Yellow : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_yellow_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_gelb_co.paa)};
    };

    class ttt_Sign_Small_Gold : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_gold_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_gold_co.paa)};
    };

    class ttt_Sign_Small_Grey : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_grey_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_grau_co.paa)};
    };

    class ttt_Sign_Small_Green : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_green_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_gruen_co.paa)};
    };

    class ttt_Sign_Small_Platinum : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_platinum_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_platin_co.paa)};
    };

    class ttt_Sign_Small_Red : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_red_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_rot_co.paa)};
    };

    class ttt_Sign_Small_Black : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_black_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_schwarz_co.paa)};
    };
    class ttt_Sign_Small_Silver : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_silver_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_silber_co.paa)};
    };

    class ttt_Sign_Small_Violet : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_violet_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_violett_co.paa)};
    };

    class ttt_Sign_Small_White : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_white_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_weiss_co.paa)};
    };

    class ttt_Sign_Small_Logo : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_logo_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_sign_co.paa)};
    };

    class ttt_Sign_Small_Orange : ttt_Sign_Small_Blue {
        displayName = CSTRING(sign_small_orange_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_orange_co.paa)};
    };

    /*
    #############################################################
    ### Schilder (groß)
    #############################################################
    */
    class ttt_Sign_Large_Base : NonStrategic {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(sign_large_base_displayName);
        model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
        vehicleClass = "signs_large";
        hiddenSelections[] = {"camo"};
    };

    class ttt_Sign_Large_Blue : ttt_Sign_Large_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = CSTRING(sign_large_blue_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_blau_co.paa)};
    };

    class ttt_Sign_Large_Bronze : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_bronze_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_bronze_co.paa)};
    };

    class ttt_Sign_Large_Brown : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_brown_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_braun_co.paa)};
    };

    class ttt_Sign_Large_Yellow : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_yellow_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_gelb_co.paa)};
    };

    class ttt_Sign_Large_Gold : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_gold_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_gold_co.paa)};
    };

    class ttt_Sign_Large_Grey : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_grey_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_grau_co.paa)};
    };

    class ttt_Sign_Large_Green : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_green_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_gruen_co.paa)};
    };

    class ttt_Sign_Large_Platinum : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_platinum_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_platin_co.paa)};
    };
    class ttt_Sign_Large_Red : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_red_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_rot_co.paa)};
    };

    class ttt_Sign_Large_Black : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_black_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_schwarz_co.paa)};
    };

    class ttt_Sign_Large_Silver : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_silver_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_silber_co.paa)};
    };

    class ttt_Sign_Large_Violet : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_violet_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_violett_co.paa)};
    };

    class ttt_Sign_Large_White : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_white_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_weiss_co.paa)};
    };

    class ttt_Sign_Large_Logo : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_logo_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_sign_co.paa)};
    };

    class ttt_Sign_Large_Orange : ttt_Sign_Large_Blue {
        displayName = CSTRING(sign_large_orange_displayName);
        hiddenSelectionsTextures[] = {QPATHTOEF(main,data\ttt_logo_orange_co.paa)};
    };
};