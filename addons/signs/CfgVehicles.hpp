class CfgVehicleClasses {
    class ttt_Flags {
        displayName = QUOTE(TTT Flaggen);         
        priority = 25;                         
    };
    class signs_Small {
        displayName = QUOTE(TTT Schilder (klein));
        priority = 26;
    };
    class signs_Large {
        displayName = QUOTE(TTT Schilder (groß));         
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
        displayName = QUOTE(TTT Flagge Base);
        model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
        vehicleClass = "ttt_Flags";
    };

    class ttt_Flag_Logo : ttt_Flag_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = QUOTE(TTT Flagge Logo);
        editorSubcategory = "ttt_main_ttt";
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_sign_co.paa));
        };
    };

    class ttt_Flag_Blue : ttt_Flag_Logo {
        displayName = CSTRING(flag_blue_displayName);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_blau_co.paa));
        };
    };

    class ttt_Flag_Brown : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Braun);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_braun_co.paa));
        };
    };

    class ttt_Flag_Bronze : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Bronze);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_bronze_co.paa));
        };
    };

    class ttt_Flag_Yellow : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Gelb);
        
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_gelb_co.paa));
        };
    };

    class ttt_Flag_Gold : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Gold);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_gold_co.paa));
        };
    };

    class ttt_Flag_Grey : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Grau);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_grau_co.paa));
        };
    };

    class ttt_Flag_Green : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Grün);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_gruen_co.paa));
        };
    };

    class ttt_Flag_Platinum : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Platin);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_platin_co.paa));
        };
    };

    class ttt_Flag_Red : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Rot);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_rot_co.paa));
        };
    };

    class ttt_Flag_Black : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Schwarz);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_schwarz_co.paa));
        };
    };

    class ttt_Flag_Silver : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Silber);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_silber_co.paa));
        };
    };

    class ttt_Flag_Violet : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Violett);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_violett_co.paa));
        };
    };

    class ttt_Flag_White : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Weiss);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_weiss_co.paa));
        };
    };

    class ttt_Flag_Orange : ttt_Flag_Logo {
        displayName = QUOTE(TTT Flagge Orange);

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\ttt_logo_orange_co.paa));
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
        displayName = QUOTE(TTT Schild Klein Base);
        model = "\A3\Structures_F\Civ\InfoBoards\Noticeboard_F.p3d";
        vehicleClass = "signs_Small";
        hiddenSelections[] = {"board"};
    };

    class ttt_Sign_Small_Blue : ttt_Sign_Small_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = QUOTE(TTT Schild Blau (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_blau_co.paa)};
    };

    class ttt_Sign_Small_Bronze : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Bronze (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_bronze_co.paa)};
    };

    class ttt_Sign_Small_Brown : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Braun (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_braun_co.paa)};
    };

    class ttt_Sign_Small_Yellow : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Gelb (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gelb_co.paa)};
    };

    class ttt_Sign_Small_Gold : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Gold (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gold_co.paa)};
    };

    class ttt_Sign_Small_Grey : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Grau (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_grau_co.paa)};
    };

    class ttt_Sign_Small_Green : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Grün (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gruen_co.paa)};
    };

    class ttt_Sign_Small_Platinum : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Platin (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_platin_co.paa)};
    };

    class ttt_Sign_Small_Red : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Rot (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_rot_co.paa)};
    };

    class ttt_Sign_Small_Black : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Schwarz (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_schwarz_co.paa)};
    };
    class ttt_Sign_Small_Silver : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Silber (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_silber_co.paa)};
    };

    class ttt_Sign_Small_Violet : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Violett (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_violett_co.paa)};
    };

    class ttt_Sign_Small_White : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Weiss (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_weiss_co.paa)};
    };

    class ttt_Sign_Small_Logo : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Logo (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_sign_co.paa)};
    };

    class ttt_Sign_Small_Orange : ttt_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Orange (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_orange_co.paa)};
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
        displayName = QUOTE(TTT Schild Groß Base);
        model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
        vehicleClass = "signs_large";
        hiddenSelections[] = {"camo"};
    };

    class ttt_Sign_Large_Blue : ttt_Sign_Large_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = QUOTE(TTT Schild Blau (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_blau_co.paa)};
    };

    class ttt_Sign_Large_Bronze : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Bronze (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_bronze_co.paa)};
    };

    class ttt_Sign_Large_Brown : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Braun (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_braun_co.paa)};
    };

    class ttt_Sign_Large_Yellow : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Gelb (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gelb_co.paa)};
    };

    class ttt_Sign_Large_Gold : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Gold (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gold_co.paa)};
    };

    class ttt_Sign_Large_Grey : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Grau (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_grau_co.paa)};
    };

    class ttt_Sign_Large_Green : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Grün (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gruen_co.paa)};
    };

    class ttt_Sign_Large_Platinum : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Platin (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_platin_co.paa)};
    };
    class ttt_Sign_Large_Red : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Rot (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_rot_co.paa)};
    };

    class ttt_Sign_Large_Black : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Schwarz (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_schwarz_co.paa)};
    };

    class ttt_Sign_Large_Silver : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Silber (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_silber_co.paa)};
    };

    class ttt_Sign_Large_Violet : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Violett (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_violett_co.paa)};
    };

    class ttt_Sign_Large_White : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Weiss (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_weiss_co.paa)};
    };

    class ttt_Sign_Large_Logo : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Logo (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_sign_co.paa)};
    };

    class ttt_Sign_Large_Orange : ttt_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Orange (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_orange_co.paa)};
    };
};