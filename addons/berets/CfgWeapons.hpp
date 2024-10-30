class CfgWeapons {
    class InventoryItem_Base_F; 
    class ItemCore;
    class HeadgearItem : InventoryItem_Base_F {};
    class HelmetBase : ItemCore {
        class ItemInfo : HeadgearItem {};
    };

    class TTT_Beret_Blue : HelmetBase {
        author = "Reimchen";
        scope = 2;
        displayName = CSTRING(STR_TTT_berets_blue);
        model = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
        picture = QPATHTOF(data\ui\berets_blau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_blau_co.paa)};
    
        class ItemInfo : ItemInfo {
            mass = 6;
            allowedSlots[] = {801, 901, 701}; //allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
            uniformModel = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
            modelSides[] = {6};
        };
    };
    

    class TTT_Beret_Brown : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Braun);
        picture = QPATHTOF(data\ui\berets_braun_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_braun_co.paa)};
    };

    class TTT_Beret_Bronze : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Bronze);
        picture = QPATHTOF(data\ui\berets_bronze_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_bronze_co.paa)};
    };

    class TTT_Beret_Yellow : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Gelb);
        picture = QPATHTOF(data\ui\berets_gelb_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gelb_co.paa)};
    };

    class TTT_Beret_Gold : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Gold);
        picture = QPATHTOF(data\ui\berets_gold_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gold_co.paa)};
    };

    class TTT_Beret_Grey : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Grau);
        picture = QPATHTOF(data\ui\berets_grau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ccommon\berets_grau_co.paa)};
    };

    class TTT_Beret_Green : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Grün);
        picture =QPATHTOF(data\ui\berets_gruen_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_gruen_co.paa)};
    };

    class TTT_Beret_Logo : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Logo);
        picture = QPATHTOF(data\ui\berets_logo_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_logo_co.paa)};
    };

    class TTT_Beret_Platinum : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Platin);
        picture = QPATHTOF(data\ui\berets_platin_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_platin_co.paa)};
    };

    class TTT_Beret_Red : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Rot);
        picture = QPATHTOF(data\ui\berets_rot_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_rot_co.paa)};
    };

    class TTT_Beret_Black : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Schwarz);
        picture = QPATHTOF(data\ui\berets_schwarz_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_schwarz_co.paa)};
    };

    class TTT_Beret_Silver : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Silber);
        picture = QPATHTOF(data\ui\berets_silber_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_silber_co.paa)};
    };

    class TTT_Beret_Violet : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Violett);
        picture = QPATHTOF(data\ui\berets_violett_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_violett_co.paa)};
    };

    class TTT_Beret_White : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Weiss);
        picture = QPATHTOF(data\ui\berets_weiss_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_weiss_co.paa)};
    };

    class TTT_Beret_Orange : TTT_Beret_Blue {
        displayName = QUOTE(TTT Barett Orange);
        picture = QPATHTOF(data\ui\berets_orange_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\common\berets_orange_co.paa)};
    };
    
};