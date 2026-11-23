class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class GVAR(handbook): CBA_MiscItem {
        scope = 2;
        scopeArsenal = 2;
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(handbook_displayName);
        descriptionShort = CSTRING(handbook_description);
        picture = QPATHTOF(data\handbook\handbook_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
};
