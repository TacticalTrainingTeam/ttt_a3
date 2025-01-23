class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class optic_SOS: ItemCore {
        descriptionShort = CSTRING(mosDescriptionShort);
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[]= {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_DMS: ItemCore {
        descriptionShort = CSTRING(burrisDescriptionShort);
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[]= {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_LRPS: ItemCore {
        descriptionShort = CSTRING(nightforceDescriptionShort);
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[]= {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_AMS_base: ItemCore {
        descriptionShort = CSTRING(usOpticsDescriptionShort);
        DLC="Mark";
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[]= {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_KHS_base: ItemCore {
        descriptionShort = CSTRING(kahlesDescriptionShort);
        DLC="Mark";
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[]= {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
};