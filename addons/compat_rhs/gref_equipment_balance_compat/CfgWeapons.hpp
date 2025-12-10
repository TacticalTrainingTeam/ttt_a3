class cfgWeapons {
    //HEADWEAR
    class ItemCore;
    class HeadGearItem;
    class H_HelmetB: ItemCore {
        class ItemInfo;
    };
    class rhs_fieldcap_digi2;
    class rhsgref_un_beret: ItemCore {
        class ItemInfo: HeadGearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhsgref_Booniehat_alpen: ItemCore {
        class ItemInfo: HeadGearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhsgref_patrolcap_specter: rhs_fieldcap_digi2 {
        class ItemInfo: HeadGearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhsgref_fieldcap: H_HelmetB {
        class ItemInfo: HeadGearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhsgref_ssh68: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    class rhsgref_M56: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    class rhsgref_6b27m: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    class rhsgref_helmet_M1_bare: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(15,4,0);
        };
    };
    class rhsgref_helmet_M1_liner: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(15,4,0);
        };
    };
    class rhsgref_helmet_M1_mit: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(15,4,0);
        };
    };
    class rhsgref_helmet_M1_erdl: rhsgref_helmet_M1_mit {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(15,4,0);
        };
    };
    class rhsgref_helmet_M1_des: rhsgref_helmet_M1_mit {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(15,4,0);
        };
    };
    class rhsgref_hat_M1951: H_HelmetB {
        class ItemInfo: ItemInfo {
            ace_hearing_protection = 1;
            ace_hearing_lowerVolume = 0.0;
            mass = 5;
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName ="HitHead";
                    armor = 0;
                    passThrough = 1;
                };
                class Face {
                    hitpointName ="HitFace";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    };
    class rhsgref_helmet_pasgt_erdl: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    class rhsgref_helmet_pasgt_erdl_rhino: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    class rhsgref_helmet_pasgt_woodland_rhino: rhsgref_helmet_pasgt_erdl_rhino {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    class rhsgref_helmet_pasgt_3color_desert_rhino: rhsgref_helmet_pasgt_erdl_rhino {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(20,6,0);
        };
    };
    //VESTS
    class Vest_Camo_Base;
    class rhs_6b23: Vest_Camo_Base {
        class ItemInfo;
    };
    class rhsgref_6b23_khaki: rhs_6b23 {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_khaki_rifleman: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_khaki_sniper: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_khaki_officer: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_khaki_nco: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_khaki_medic: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_forest: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_forest_rifleman: rhsgref_6b23_khaki_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_mountain: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_mountain_rifleman: rhsgref_6b23_khaki_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_mountain_sniper: rhsgref_6b23_khaki_sniper {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_mountain_officer: rhsgref_6b23_khaki_officer {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_mountain_nco: rhsgref_6b23_khaki_nco {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_mountain_medic: rhsgref_6b23_khaki_medic {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_digi: rhsgref_6b23_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_digi_rifleman: rhsgref_6b23_khaki_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_digi_sniper: rhsgref_6b23_khaki_sniper {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_digi_officer: rhsgref_6b23_khaki_officer {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_digi_nco: rhsgref_6b23_khaki_nco {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_6b23_ttsko_digi_medic: rhsgref_6b23_khaki_medic {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_otv_khaki: rhsgref_6b23_khaki_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_otv_digi: rhsgref_otv_khaki {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsgref_TacVest_ERDL: rhsgref_6b23_khaki_rifleman {
        class ItemInfo: ItemInfo {
            containerClass = "Supply220";
            mass = 25;
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 0;
                    passThrough = 1;
                    simulation = "";
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                    simulation = "";
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 0;
                    passThrough = 1;
                    simulation = "";
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                    simulation = "";
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                    simulation = "";
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 0;
                    passThrough = 1;
                    simulation = "";
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                    simulation = "";
                };
            };
        };
    };
    class rhsgref_alice_webbing: rhs_6b23 {
        class ItemInfo: ItemInfo {
            VEST_NO_PROTECTION("Supply220",10);
        };
    };
    class rhsgref_chestrig: rhs_6b23 {
        class ItemInfo: ItemInfo {
            VEST_NO_PROTECTION("Supply220",10);
        };
    };
    class rhsgref_chicom: rhsgref_chestrig {
        class ItemInfo: ItemInfo {
            VEST_NO_PROTECTION("Supply220",10);
        };
    };
    class rhsgref_chicom_m88: rhsgref_chicom {
        class ItemInfo: ItemInfo {
            VEST_NO_PROTECTION("Supply220",10);
        };
    };
    //UNIFORMS
    class UniformItem;
    class Uniform_Base;
    class rhsgref_uniform_ttsko_forest: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_ttsko_mountain: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_ttsko_urban: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_vsr: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_para_ttsko_oxblood: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_para_ttsko_mountain: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_para_ttsko_urban: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_specter: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_reed: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_alpenflage: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_flecktarn: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_flecktarn_full: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_tigerstripe: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_woodland: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_woodland_olive: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_ERDL: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_og107: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_og107_erdl: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_altis_lizard: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_olive: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_altis_lizard_olive: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_dpm: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_dpm_olive: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_3color_desert: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_gorka_1_f: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class U_IG_leader: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_TLA_1: U_IG_leader {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
    class rhsgref_uniform_TLA_2: U_IG_leader {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply70",25);
        };
    };
};
