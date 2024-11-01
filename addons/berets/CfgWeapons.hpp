class CfgWeapons {
    class InventoryItem_Base_F; 
    class HeadgearItem : InventoryItem_Base_F {};

    class ItemCore;
    class HelmetBase : ItemCore {
        class ItemInfo : HeadgearItem {};
    };

    class TTT_Beret_Blue : HelmetBase {
        author = "Reimchen";
        scope = 2;
        displayName = CSTRING(blue);
        picture = QPATHTOF(data\ui\berets_blau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_blau_co.paa)};
    
        class ItemInfo : ItemInfo {
            mass = 6;
            allowedSlots[] = {801, 901, 701}; //allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
            uniformModel = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d"; //this needs to stay here to work
            modelSides[] = {6};
        };
    };
    

    class TTT_Beret_Brown : TTT_Beret_Blue {
        displayName = CSTRING(brown);
        picture = QPATHTOF(data\ui\berets_braun_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_braun_co.paa)};
    };

    class TTT_Beret_Bronze : TTT_Beret_Blue {
        displayName = CSTRING(bronze);
        picture = QPATHTOF(data\ui\berets_bronze_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_bronze_co.paa)};
    };

    class TTT_Beret_Yellow : TTT_Beret_Blue {
        displayName = CSTRING(yellow);
        picture = QPATHTOF(data\ui\berets_gelb_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gelb_co.paa)};
    };

    class TTT_Beret_Gold : TTT_Beret_Blue {
        displayName = CSTRING(gold);
        picture = QPATHTOF(data\ui\berets_gold_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gold_co.paa)};
    };

    class TTT_Beret_Grey : TTT_Beret_Blue {
        displayName = CSTRING(grey);
        picture = QPATHTOF(data\ui\berets_grau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_grau_co.paa)};
    };

    class TTT_Beret_Green : TTT_Beret_Blue {
        displayName = CSTRING(green);
        picture =QPATHTOF(data\ui\berets_gruen_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gruen_co.paa)};
    };

    class TTT_Beret_Logo : TTT_Beret_Blue {
        displayName = CSTRING(logo);
        picture = QPATHTOF(data\ui\berets_logo_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_logo_co.paa)};
    };

    class TTT_Beret_Platinum : TTT_Beret_Blue {
        displayName = CSTRING(platinum);
        picture = QPATHTOF(data\ui\berets_platin_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_platin_co.paa)};
    };

    class TTT_Beret_Red : TTT_Beret_Blue {
        displayName = CSTRING(red);
        picture = QPATHTOF(data\ui\berets_rot_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_rot_co.paa)};
    };

    class TTT_Beret_Black : TTT_Beret_Blue {
        displayName = CSTRING(black);
        picture = QPATHTOF(data\ui\berets_schwarz_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_schwarz_co.paa)};
    };

    class TTT_Beret_Silver : TTT_Beret_Blue {
        displayName = CSTRING(silver);
        picture = QPATHTOF(data\ui\berets_silber_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_silber_co.paa)};
    };

    class TTT_Beret_Violet : TTT_Beret_Blue {
        displayName = CSTRING(violet);
        picture = QPATHTOF(data\ui\berets_violett_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_violett_co.paa)};
    };

    class TTT_Beret_White : TTT_Beret_Blue {
        displayName = CSTRING(white);
        picture = QPATHTOF(data\ui\berets_weiss_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_weiss_co.paa)};
    };

    class TTT_Beret_Orange : TTT_Beret_Blue {
        displayName = CSTRING(orange);
        picture = QPATHTOF(data\ui\berets_orange_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_orange_co.paa)};
    };
    
};