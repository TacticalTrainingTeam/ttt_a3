class CfgVehicleClasses {
    class TTT_Flags {
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
    class TTT_Flag_Base : FlagCarrierCore {
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        displayName = QUOTE(TTT Flagge Base);
        model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
        vehicleClass = "TTT_Flags";
        icon = "iconObject_circle";
        keepHorizontalPlacement = 1;
        accuracy = 1000;
        animated = 0;
        nameSound = "obj_flag";
        supplyRadius = 2;
    };

    class TTT_Flag_Logo : TTT_Flag_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = QUOTE(TTT Flagge Logo);
        editorSubcategory = "ttt_main_ttt";
        
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_sign_co.paa'";
        };
    };

    class TTT_Flag_Blue : TTT_Flag_Logo {
        displayName = CSTRING(flag_blue);
        
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_blau_co.paa'";
        };
    };

    class TTT_Flag_Brown : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Braun);
        
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_braun_co.paa'";
        };
    };

    class TTT_Flag_Bronze : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Bronze);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_bronze_co.paa'";
        };
    };

    class TTT_Flag_Yellow : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Gelb);
        
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_gelb_co.paa'";
        };
    };

    class TTT_Flag_Gold : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Gold);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_gold_co.paa'";
        };
    };

    class TTT_Flag_Grey : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Grau);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_grau_co.paa'";
        };
    };

    class TTT_Flag_Green : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Grün);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_gruen_co.paa'";
        };
    };

    class TTT_Flag_Platinum : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Platin);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_platin_co.paa'";
        };
    };

    class TTT_Flag_Red : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Rot);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_rot_co.paa'";
        };
    };

    class TTT_Flag_Black : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Schwarz);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_schwarz_co.paa'";
        };
    };

    class TTT_Flag_Silver : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Silber);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_silber_co.paa'";
        };
    };

    class TTT_Flag_Violet : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Violett);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_violett_co.paa'";
        };
    };

    class TTT_Flag_White : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Weiss);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_weiss_co.paa'";
        };
    };

    class TTT_Flag_Orange : TTT_Flag_Logo {
        displayName = QUOTE(TTT Flagge Orange);

        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\ttt\addons\signs\data\ttt_logo_orange_co.paa'";
        };
    };

    /*
    #############################################################
    ### Schilder Klein
    #############################################################
    */
    class NonStrategic;
    class TTT_Sign_Small_Base : NonStrategic {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        displayName = QUOTE(TTT Schild Klein Base);
        model = "\A3\Structures_F\Civ\InfoBoards\Noticeboard_F.p3d";
        icon = "iconObject_4x1";
        vehicleClass = "signs_Small";
        destrType = "DestructWall";
        hiddenSelections[] = {"board"};
    };

    class TTT_Sign_Small_Blue : TTT_Sign_Small_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = QUOTE(TTT Schild Blau (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_blau_co.paa)};
    };

    class TTT_Sign_Small_Bronze : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Bronze (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_bronze_co.paa)};
    };

    class TTT_Sign_Small_Brown : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Braun (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_braun_co.paa)};
    };

    class TTT_Sign_Small_Yellow : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Gelb (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gelb_co.paa)};
    };

    class TTT_Sign_Small_Gold : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Gold (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gold_co.paa)};
    };

    class TTT_Sign_Small_Grey : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Grau (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_grau_co.paa)};
    };

    class TTT_Sign_Small_Green : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Grün (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gruen_co.paa)};
    };

    class TTT_Sign_Small_Platinum : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Platin (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_platin_co.paa)};
    };

    class TTT_Sign_Small_Red : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Rot (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_rot_co.paa)};
    };

    class TTT_Sign_Small_Black : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Schwarz (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_schwarz_co.paa)};
    };
    class TTT_Sign_Small_Silver : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Silber (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_silber_co.paa)};
    };

    class TTT_Sign_Small_Violet : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Violett (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_violett_co.paa)};
    };

    class TTT_Sign_Small_White : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Weiss (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_weiss_co.paa)};
    };

    class TTT_Sign_Small_Logo : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Logo (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_sign_co.paa)};
    };

    class TTT_Sign_Small_Orange : TTT_Sign_Small_Blue {
        displayName = QUOTE(TTT Schild Orange (klein));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_orange_co.paa)};
    };

    /*
    #############################################################
    ### Schilder (groß)
    #############################################################
    */
    class TTT_Sign_Large_Base : NonStrategic {
        mapSize = 0.83;
        author = QUOTE(Tactical Training Team);
        scope = 0;
        scopeCurator = 0;
        displayName = QUOTE(TTT Schild Groß Base);
        model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
        icon = "iconObject_4x1";
        vehicleClass = "signs_large";
        destrType = "DestructWall";
        hiddenSelections[] = {"camo"};
    };

    class TTT_Sign_Large_Blue : TTT_Sign_Large_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "ttt_main_ttt";
        displayName = QUOTE(TTT Schild Blau (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_blau_co.paa)};
    };

    class TTT_Sign_Large_Bronze : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Bronze (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_bronze_co.paa)};
    };

    class TTT_Sign_Large_Brown : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Braun (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_braun_co.paa)};
    };

    class TTT_Sign_Large_Yellow : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Gelb (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gelb_co.paa)};
    };

    class TTT_Sign_Large_Gold : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Gold (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gold_co.paa)};
    };

    class TTT_Sign_Large_Grey : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Grau (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_grau_co.paa)};
    };

    class TTT_Sign_Large_Green : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Grün (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_gruen_co.paa)};
    };

    class TTT_Sign_Large_Platinum : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Platin (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_platin_co.paa)};
    };
    class TTT_Sign_Large_Red : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Rot (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_rot_co.paa)};
    };

    class TTT_Sign_Large_Black : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Schwarz (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_schwarz_co.paa)};
    };

    class TTT_Sign_Large_Silver : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Silber (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_silber_co.paa)};
    };

    class TTT_Sign_Large_Violet : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Violett (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_violett_co.paa)};
    };

    class TTT_Sign_Large_White : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Weiss (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_weiss_co.paa)};
    };

    class TTT_Sign_Large_Logo : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Logo (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_sign_co.paa)};
    };

    class TTT_Sign_Large_Orange : TTT_Sign_Large_Blue {
        displayName = QUOTE(TTT Schild Orange (groß));
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_logo_orange_co.paa)};
    };
};