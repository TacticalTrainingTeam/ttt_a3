class CfgWeapons {
    class H_Beret_02;

    class GVAR(Blue): H_Beret_02 {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen"};
        displayName = CSTRING(blue);
        picture = QPATHTOF(data\previews\berets_blau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_blau_co.paa)};
    };

    class GVAR(Brown): GVAR(Blue) {
        displayName = CSTRING(brown);
        picture = QPATHTOF(data\previews\berets_braun_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_braun_co.paa)};
    };

    class GVAR(Bronze): GVAR(Blue) {
        displayName = CSTRING(bronze);
        picture = QPATHTOF(data\previews\berets_bronze_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_bronze_co.paa)};
    };

    class GVAR(Yellow): GVAR(Blue) {
        displayName = CSTRING(yellow);
        picture = QPATHTOF(data\previews\berets_gelb_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_gelb_co.paa)};
    };

    class GVAR(Gold): GVAR(Blue) {
        displayName = CSTRING(gold);
        picture = QPATHTOF(data\previews\berets_gold_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_gold_co.paa)};
    };

    class GVAR(Grey): GVAR(Blue) {
        displayName = CSTRING(grey);
        picture = QPATHTOF(data\previews\berets_grau_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_grau_co.paa)};
    };

    class GVAR(Green): GVAR(Blue) {
        displayName = CSTRING(green);
        picture =QPATHTOF(data\previews\berets_gruen_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_gruen_co.paa)};
    };

    class GVAR(Logo): GVAR(Blue) {
        displayName = CSTRING(logo);
        picture = QPATHTOF(data\previews\berets_logo_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_logo_co.paa)};
    };

    class GVAR(Platinum): GVAR(Blue) {
        displayName = CSTRING(platinum);
        picture = QPATHTOF(data\previews\berets_platin_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_platin_co.paa)};
    };

    class GVAR(Red): GVAR(Blue) {
        displayName = CSTRING(red);
        picture = QPATHTOF(data\previews\berets_rot_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_rot_co.paa)};
    };

    class GVAR(Black): GVAR(Blue) {
        displayName = CSTRING(black);
        picture = QPATHTOF(data\previews\berets_schwarz_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_schwarz_co.paa)};
    };

    class GVAR(Silver): GVAR(Blue) {
        displayName = CSTRING(silver);
        picture = QPATHTOF(data\previews\berets_silber_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_silber_co.paa)};
    };

    class GVAR(Violet): GVAR(Blue) {
        displayName = CSTRING(violet);
        picture = QPATHTOF(data\previews\berets_violett_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_violett_co.paa)};
    };

    class GVAR(White): GVAR(Blue) {
        displayName = CSTRING(white);
        picture = QPATHTOF(data\previews\berets_weiss_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_weiss_co.paa)};
    };

    class GVAR(Orange): GVAR(Blue) {
        displayName = CSTRING(orange);
        picture = QPATHTOF(data\previews\berets_orange_icon_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\berets_orange_co.paa)};
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/loadouts referencing
    //them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Beret_Blue: GVAR(Blue) { scope = 1; };
    class ttt_Beret_Brown: GVAR(Brown) { scope = 1; };
    class ttt_Beret_Bronze: GVAR(Bronze) { scope = 1; };
    class ttt_Beret_Yellow: GVAR(Yellow) { scope = 1; };
    class ttt_Beret_Gold: GVAR(Gold) { scope = 1; };
    class ttt_Beret_Grey: GVAR(Grey) { scope = 1; };
    class ttt_Beret_Green: GVAR(Green) { scope = 1; };
    class ttt_Beret_Logo: GVAR(Logo) { scope = 1; };
    class ttt_Beret_Platinum: GVAR(Platinum) { scope = 1; };
    class ttt_Beret_Red: GVAR(Red) { scope = 1; };
    class ttt_Beret_Black: GVAR(Black) { scope = 1; };
    class ttt_Beret_Silver: GVAR(Silver) { scope = 1; };
    class ttt_Beret_Violet: GVAR(Violet) { scope = 1; };
    class ttt_Beret_White: GVAR(White) { scope = 1; };
    class ttt_Beret_Orange: GVAR(Orange) { scope = 1; };
};
