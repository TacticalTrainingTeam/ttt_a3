class CfgWeapons {
    class H_Beret_blk;
    class H_Beret_02: H_Beret_blk {
        class ItemInfo;
    };

    class ttt_Beret_Blue : H_Beret_02 {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen"};
        displayName = CSTRING(blue);
        picture = QPATHTOF(data\ui\berets_blau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_blau_co.paa)};

        class ItemInfo : ItemInfo {
        };
    };
 
    class ttt_Beret_Brown : ttt_Beret_Blue {
        displayName = CSTRING(brown);
        picture = QPATHTOF(data\ui\berets_braun_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_braun_co.paa)};
    };

    class ttt_Beret_Bronze : ttt_Beret_Blue {
        displayName = CSTRING(bronze);
        picture = QPATHTOF(data\ui\berets_bronze_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_bronze_co.paa)};
    };

    class ttt_Beret_Yellow : ttt_Beret_Blue {
        displayName = CSTRING(yellow);
        picture = QPATHTOF(data\ui\berets_gelb_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gelb_co.paa)};
    };

    class ttt_Beret_Gold : ttt_Beret_Blue {
        displayName = CSTRING(gold);
        picture = QPATHTOF(data\ui\berets_gold_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gold_co.paa)};
    };

    class ttt_Beret_Grey : ttt_Beret_Blue {
        displayName = CSTRING(grey);
        picture = QPATHTOF(data\ui\berets_grau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_grau_co.paa)};
    };

    class ttt_Beret_Green : ttt_Beret_Blue {
        displayName = CSTRING(green);
        picture =QPATHTOF(data\ui\berets_gruen_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gruen_co.paa)};
    };

    class ttt_Beret_Logo : ttt_Beret_Blue {
        displayName = CSTRING(logo);
        picture = QPATHTOF(data\ui\berets_logo_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_logo_co.paa)};
    };

    class ttt_Beret_Platinum : ttt_Beret_Blue {
        displayName = CSTRING(platinum);
        picture = QPATHTOF(data\ui\berets_platin_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_platin_co.paa)};
    };

    class ttt_Beret_Red : ttt_Beret_Blue {
        displayName = CSTRING(red);
        picture = QPATHTOF(data\ui\berets_rot_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_rot_co.paa)};
    };

    class ttt_Beret_Black : ttt_Beret_Blue {
        displayName = CSTRING(black);
        picture = QPATHTOF(data\ui\berets_schwarz_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_schwarz_co.paa)};
    };

    class ttt_Beret_Silver : ttt_Beret_Blue {
        displayName = CSTRING(silver);
        picture = QPATHTOF(data\ui\berets_silber_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_silber_co.paa)};
    };

    class ttt_Beret_Violet : ttt_Beret_Blue {
        displayName = CSTRING(violet);
        picture = QPATHTOF(data\ui\berets_violett_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_violett_co.paa)};
    };

    class ttt_Beret_White : ttt_Beret_Blue {
        displayName = CSTRING(white);
        picture = QPATHTOF(data\ui\berets_weiss_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_weiss_co.paa)};
    };

    class ttt_Beret_Orange : ttt_Beret_Blue {
        displayName = CSTRING(orange);
        picture = QPATHTOF(data\ui\berets_orange_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_orange_co.paa)};
    };   
};