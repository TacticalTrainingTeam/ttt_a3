class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(coin_base): ACE_ItemCore {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = CSTRING(coin_displayName);
        descriptionShort = CSTRING(coin_description);
        picture = "\A3\ui_f\data\igui\Cfg\Simpleitems\mag_universal_ca.paa";
        uid = "";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };

    #include "db.hpp"
};
