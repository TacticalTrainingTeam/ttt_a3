class Vest_NoCamo_Base;
class VestItem;
class USP_CRYE_CPC: Vest_NoCamo_Base {
    scope = 2;
    model = "\usp_gear_vest\model\crye_cpc.p3d";
    class ItemInfo: VestItem {
        uniformModel = "\usp_gear_vest\model\crye_cpc.p3d";
        mass = 100;
        containerClass = "Supply220";
        class HitpointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 20;
                passThrough = 0.2;
            };
            class Diaphragm {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.2;
            };
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.2;
            };
            class Body {
                hitpointName = "HitBody";
                passThrough = 0.2;
            };
        };
    };
};
