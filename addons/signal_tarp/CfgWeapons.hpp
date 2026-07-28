class CfgWeapons {
    class ACE_ItemCore;

    class GVAR(tarp_Black): ACE_ItemCore {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 2;
        displayName = CSTRING(tarp_black_displayName);
        descriptionShort = CSTRING(tarp_description);
        picture = QPATHTOEF(tarps,data\ttt_tarp_black.paa);
    };

    class GVAR(tarp_Green): GVAR(tarp_Black) {
        displayName = CSTRING(tarp_green_displayName);
        picture = QPATHTOEF(tarps,data\ttt_tarp_green.paa);
    };

    class GVAR(tarp_Red): GVAR(tarp_Black) {
        displayName = CSTRING(tarp_red_displayName);
        picture = QPATHTOEF(tarps,data\ttt_tarp_red.paa);
    };

    class GVAR(tarp_Yellow): GVAR(tarp_Black) {
        displayName = CSTRING(tarp_yellow_displayName);
        picture = QPATHTOEF(tarps,data\ttt_tarp_yellow.paa);
    };
};
