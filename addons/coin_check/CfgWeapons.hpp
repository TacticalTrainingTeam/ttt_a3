class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(coin_base): ACE_ItemCore {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = CSTRING(coin_displayName);
        descriptionShort = CSTRING(coin_description);
        picture = QPATHTOF(ui\ttt_coin.paa);
        model = QPATHTOF(data\ttt_coin.p3d);
        uid = "";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };

    #include "db.hpp"
};
