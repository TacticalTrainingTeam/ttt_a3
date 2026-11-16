// FPV_UA defines its drone items with picture = "", which makes the engine fall back to the
// nonexistent equip\m\m_<classname>.paa ("Picture ... not found" in the RPT on every inventory
// open). Give them the pictures the mod already ships for its drone vehicles. Payload, battery and
// fiber spool items are left alone - the mod has no fitting picture for them.
// Every class sets picture = "" itself, so subclasses have to be patched one by one.
class CfgMagazines {
    class Laserbatteries;

    class UA_Item_EMPTY: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_NET: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_RPG18: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_AKS74: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_PG7VL_AT: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_OG7V_AP: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_TBG7L_HE: Laserbatteries {
        picture = PICTURE_FPV;
    };
    class UA_Item_IED_AP: Laserbatteries {
        picture = PICTURE_FPV;
    };

    class UA_Item_FIBER: Laserbatteries {
        picture = PICTURE_FPV_FIBER;
    };
    class UA_Item_FIBER_15KM: UA_Item_FIBER {
        picture = PICTURE_FPV_FIBER;
    };
    class UA_Item_FIBER_20KM: UA_Item_FIBER {
        picture = PICTURE_FPV_FIBER;
    };
    class UA_Item_FIBER_AT: UA_Item_FIBER {
        picture = PICTURE_FPV_FIBER;
    };
    class UA_Item_FIBER_AT_15KM: UA_Item_FIBER_AT {
        picture = PICTURE_FPV_FIBER;
    };
    class UA_Item_FIBER_AT_20KM: UA_Item_FIBER_AT {
        picture = PICTURE_FPV_FIBER;
    };
};
