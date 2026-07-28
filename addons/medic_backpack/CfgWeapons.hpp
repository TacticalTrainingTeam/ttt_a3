class CfgWeapons {
    class ItemCore;

    class GVAR(tarp_Dark): ItemCore {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 2;
        displayName = CSTRING(tarp_dark_displayName);
        descriptionShort = CSTRING(tarp_description);
        picture = QPATHTOEF(common,data\ttt_tarp_black.paa);
    };

    class GVAR(tarp_Light): GVAR(tarp_Dark) {
        displayName = CSTRING(tarp_light_displayName);
    };
};
