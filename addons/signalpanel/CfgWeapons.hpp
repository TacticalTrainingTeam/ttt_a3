class CfgWeapons {
    class ItemCore;

    class GVAR(tarp_Black): ItemCore {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 2;
        displayName = CSTRING(tarp_black_displayName);
        descriptionShort = CSTRING(tarp_description);
    };

    class GVAR(tarp_Green): GVAR(tarp_Black) {
        displayName = CSTRING(tarp_green_displayName);
    };

    class GVAR(tarp_Red): GVAR(tarp_Black) {
        displayName = CSTRING(tarp_red_displayName);
    };

    class GVAR(tarp_Yellow): GVAR(tarp_Black) {
        displayName = CSTRING(tarp_yellow_displayName);
    };
};
