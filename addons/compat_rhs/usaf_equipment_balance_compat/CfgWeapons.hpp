class CfgWeapons {
    //UNIFORMS
    class UniformItem;
    class Uniform_Base;
    class rhs_uniform_g3_mc: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_g3_m81: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_g3_aor2: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_g3_tan: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_g3_rgr: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_g3_blk: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ocp: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ucp: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ocp_1stcav: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ucp_1stcav: rhs_uniform_cu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ocp_82nd: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ucp_82nd: rhs_uniform_cu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ocp_101st: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ucp_101st: rhs_uniform_cu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ocp_10th: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ucp_10th: rhs_uniform_cu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ucp_patchless: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_cu_ocp_patchless: rhs_uniform_cu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_FROG01_d: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_FROG01_wd: rhs_uniform_FROG01_d {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_FROG01_m81: rhs_uniform_g3_m81 {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_acu_ucp: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_acu_ucp2: rhs_uniform_acu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_acu_ucpd: rhs_uniform_acu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_acu_oefcp: rhs_uniform_acu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_acu_ocp: rhs_uniform_acu_ucp {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_abu: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };
    class rhs_uniform_bdu_erdl: Uniform_Base {
        class ItemInfo: UniformItem {
            UNIFORM_ITEMINFO("Supply40",40);
        };
    };

    //HEADGEAR
    class ItemCore;

    class HeadgearItem;
    class H_HelmetB: ItemCore {
        class ItemInfo;
    };
    class rhsusf_patrolcap_ocp: H_HelmetB {
        class ItemInfo: HeadgearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhs_xmas_antlers: ItemCore {
        class ItemInfo: HeadgearItem {
            HEADGEAR_ARMOR(40,8,8);
        };
    };
    class rhs_Booniehat_ocp: ItemCore {
        class ItemInfo: HeadgearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhs_booniehat2_marpatd: ItemCore {
        class ItemInfo: HeadgearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhs_8point_marpatd: ItemCore {
        class ItemInfo: HeadgearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhsusf_ach_helmet_ocp: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(15,4);
        };
    };
    class rhsusf_opscore_01: rhsusf_ach_helmet_ocp {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_opscore_cover: rhsusf_opscore_01 {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_opscore_mar_01: rhsusf_ach_helmet_ocp {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_cvc_helmet: rhsusf_opscore_01 {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_hgu56p: rhsusf_opscore_01 {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(40,8,8);
        };
    };
    class rhsusf_mich_helmet_marpatwd: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare: rhsusf_mich_helmet_marpatwd {
        class ItemInfo;
    };
    class rhsusf_mich_bare_headset: rhsusf_mich_bare {
        class ItemInfo;
    };
    class rhsusf_mich_bare_alt: rhsusf_mich_bare {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_norotos: rhsusf_mich_bare_headset {
        class ItemInfo;
    };
    class rhsusf_mich_bare_norotos_headset: rhsusf_mich_bare_headset {
        class ItemInfo;
    };
    class rhsusf_mich_bare_norotos_alt: rhsusf_mich_bare_norotos {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_norotos_alt_headset: rhsusf_mich_bare_norotos_headset {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };

    class rhsusf_mich_bare_tan_headset: rhsusf_mich_bare_headset {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_norotos_arc_tan_headset;
    class rhsusf_mich_bare_norotos_arc: rhsusf_mich_bare_norotos_arc_tan_headset {
        class ItemInfo;
    };
    class rhsusf_mich_bare_norotos_arc_headset: rhsusf_mich_bare_headset {
        class ItemInfo;
    };
    class rhsusf_mich_bare_norotos_arc_alt: rhsusf_mich_bare_norotos_arc {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_norotos_arc_alt_headset: rhsusf_mich_bare_norotos_arc_headset {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_tan: rhsusf_mich_bare {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_semi: rhsusf_mich_bare {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_semi_headset: rhsusf_mich_bare_headset {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_norotos_semi: rhsusf_mich_bare_semi {
        class ItemInfo;
    };
    class rhsusf_mich_bare_norotos_semi_headset: rhsusf_mich_bare_semi_headset {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_mich_bare_norotos_alt_semi: rhsusf_mich_bare_norotos_semi {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_lwh_helmet_marpatd: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
        };
    };
    class rhsusf_Bowman: ItemCore {
        class ItemInfo: HeadgearItem {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class rhsusf_bowman_cap: rhsusf_Bowman {
        class ItemInfo: ItemInfo {
            HEADGEAR_NO_PROTECTION(5);
        };
    };
    class RHS_jetpilot_usaf: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(40,8,8);
        };
    };
    class rhsusf_ihadss: rhsusf_opscore_01 {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR(40,8,8);
        };
    };
    class rhsusf_protech_helmet: H_HelmetB {
        class ItemInfo: ItemInfo {
            HEADGEAR_ARMOR_FACE_EXPOSED(15,4);
        };
    };

    //VESTS
    class Vest_Camo_Base: ItemCore {
        class ItemInfo;
    };
    class rhsusf_iotv_ocp_base: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_Grenadier: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_Medic: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_Repair: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_Rifleman: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_SAW: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_Squadleader: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ocp_Teamleader: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_base: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp: rhsusf_iotv_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_Grenadier: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_Medic: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_Repair: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_Rifleman: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_SAW: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_rifleman: rhsusf_spc {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_Squadleader: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_iar: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_iotv_ucp_Teamleader: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_corpsman: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_crewman: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_light: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_marksman: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_mg: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_sniper: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_squadleader: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_teamleader: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_patchless: rhsusf_spc_light {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spc_patchless_radio: rhsusf_spc_squadleader {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_squadleader: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_teamleader: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_teamleader_alt: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_saw: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_grenadier: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_rifleman: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_rifleman_alt: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            containerClass = "Supply220";
            mass = 50;
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 0;
                    passThrough = 1;
                    simulation = "";
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 0;
                    passThrough = 1;
                    simulation = "";
                };
                class Diaphragm                {
                    hitpointName = "HitDiaphragm";
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Pelvis                {
                    hitpointName = "HitPelvis";
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Body                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                    simulation = "";
                };
            };
        };
    };
    class rhsusf_spcs_ocp_medic: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            containerClass = "Supply220";
            mass = 50;
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 0;
                    passThrough = 1;
                    simulation = "";
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.4;
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
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Pelvis                {
                    hitpointName = "HitPelvis";
                    armor = 12;
                    passThrough = 0.4;
                    simulation = "";
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                    simulation = "";
                };
            };
        };
    };
    class rhsusf_spcs_ocp_crewman: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_machinegunner: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ocp_sniper: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp: rhsusf_spcs_ocp {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_squadleader: rhsusf_spcs_ocp_squadleader {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_teamleader: rhsusf_spcs_ocp_teamleader {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_teamleader_alt: rhsusf_spcs_ocp_teamleader_alt {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_saw: rhsusf_spcs_ocp_saw {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_grenadier: rhsusf_spcs_ocp_grenadier {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_rifleman: rhsusf_spcs_ocp_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_rifleman_alt: rhsusf_spcs_ocp_rifleman_alt {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_medic: rhsusf_spcs_ocp_medic {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_crewman: rhsusf_spcs_ocp_crewman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_machinegunner: rhsusf_spcs_ocp_machinegunner {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_spcs_ucp_sniper: rhsusf_spcs_ocp_sniper {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_mbav: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_mbav_light: rhsusf_mbav {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_mbav_rifleman: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_mbav_mg: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_mbav_grenadier: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_mbav_medic: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_light: rhsusf_plateframe_sapi {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_teamleader: rhsusf_plateframe_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_grenadier: rhsusf_plateframe_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_machinegunner: rhsusf_plateframe_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_marksman: rhsusf_plateframe_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
    class rhsusf_plateframe_medic: rhsusf_plateframe_rifleman {
        class ItemInfo: ItemInfo {
            VEST_PROTECTION("Supply220",50);
        };
    };
};
