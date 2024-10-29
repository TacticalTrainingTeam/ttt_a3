class CfgWeapons
{
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class optic_SOS: ItemCore
    {
        descriptionShort="Marksman Optical Sights<br />Magnification: 2,5x-5x<br/>NightVision";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_DMS: ItemCore
    {
        descriptionShort="Burris XTR II<br />magnification: 2x-4x<br/>NightVision";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_LRPS: ItemCore
    {
        descriptionShort="Nightforce NXS<br />Magnification: 5,6x-22,7x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_AMS_base: ItemCore
    {
        descriptionShort="US Optics MR 10<br />Magnification:2,9x-8,8x<br />NightVision";
        DLC="Mark";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class AMS
                {
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class optic_KHS_base: ItemCore
    {
        descriptionShort="KAHLES Helia<br />Magnification: 4,2x-9,6x<br/>NightVision";
        DLC="Mark";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class KHS
                {
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
};