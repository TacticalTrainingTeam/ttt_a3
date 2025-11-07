#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx", "Shiloh"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when laknching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {
            "rhsgref_main",
            "rhsgref_c_weapons",
            "rhs_c_troops",
            "rhsgref_c_troops",
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        vehicles[] = {
            //PACKS
            "rhsgref_cdf_backpack_mg",
            "rhsgref_cdf_backpack_mg2",
            "rhsgref_cdf_backpack_mg3",
            "rhsgref_cdf_backpack_engineer",
            "rhsgref_cdf_backpack_medic",
            "rhsgref_nat_backpack_mg",
            "rhsgref_nat_backpack_mg42",
            "rhsgref_nat_backpack_engineer",
            "rhsgref_nat_backpack_medic",
            "rhsgref_nat_backpack_explosives",
            "rhsgref_ins_pack",
            "rhsgref_ins_pack_GR",
            "rhsgref_ins_packMG",
            "rhsgref_tortila_specter",
            "rhsgref_hidf_alicepack",
            "rhsgref_wdl_alicepack",
            "rhsgref_ttsko_alicepack",
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            //HEADWEAR
            "rhsgref_un_beret",
            "rhsgref_Booniehat_alpen",
            "rhsgref_bcap_specter",
            "rhsgref_patrolcap_specter",
            "rhsgref_fieldcap",
            "rhsgref_ssh68",
            "rhsgref_M56",
            "rhsgref_6b27m",
            "rhsgref_helmet_M1_bare",
            "rhsgref_helmet_M1_liner",
            "rhsgref_helmet_M1_mit",
            "rhsgref_helmet_M1_erdl",
            "rhsgref_helmet_M1_des",
            "rhsgref_hat_M1951",
            "rhsgref_hat_m1941cap",
            "rhsgref_helmet_pasgt_erdl",
            "rhsgref_helmet_pasgt_erdl_rhino",
            "rhsgref_helmet_pasgt_woodland_rhino",
            "rhsgref_helmet_pasgt_3color_desert_rhino",
            "rhsgref_helmet_m1940",
            "rhsgref_helmet_m1940_winter",
            "rhsgref_helmet_m1942",
            "rhsgref_helmet_m1942_camo01",
            "rhsgref_helmet_m1942_winter",
            "rhsgref_helmet_m1942_heermarshcover",
            //VESTS
            "rhs_6b23",
            "rhsgref_6b23_khaki",
            "rhsgref_6b23_khaki_rifleman",
            "rhsgref_6b23_khaki_sniper",
            "rhsgref_6b23_khaki_officer",
            "rhsgref_6b23_khaki_nco",
            "rhsgref_6b23_khaki_medic",
            "rhsgref_6b23_ttsko_forest",
            "rhsgref_6b23_ttsko_forest_rifleman",
            "rhsgref_6b23_ttsko_forest_sniper",
            "rhsgref_6b23_ttsko_mountain",
            "rhsgref_6b23_ttsko_mountain_rifleman",
            "rhsgref_6b23_ttsko_mountain_sniper",
            "rhsgref_6b23_ttsko_mountain_officer",
            "rhsgref_6b23_ttsko_mountain_nco",
            "rhsgref_6b23_ttsko_mountain_medic",
            "rhsgref_6b23_ttsko_urban",
            "rhsgref_6b23_ttsko_urban_rifleman",
            "rhsgref_6b23_ttsko_urban_sniper",
            "rhsgref_6b23_ttsko_urban_officer",
            "rhsgref_6b23_ttsko_urban_nco",
            "rhsgref_6b23_ttsko_urban_medic",
            "rhsgref_6b23_ttsko_digi",
            "rhsgref_6b23_ttsko_digi_rifleman",
            "rhsgref_6b23_ttsko_digi_sniper",
            "rhsgref_6b23_ttsko_digi_officer",
            "rhsgref_6b23_ttsko_digi_nco",
            "rhsgref_6b23_ttsko_digi_medic",
            "rhsgref_otv_khaki",
            "rhsgref_otv_digi",
            "rhsgref_TacVest_ERDL",
            "rhsgref_alice_webbing",
            "rhsgref_chestrig",
            "rhsgref_chicom",
            "rhsgref_chicom_m88",
            //UNIFORMS
            "rhsgref_uniform_ttsko_forest",
            "rhsgref_uniform_ttsko_mountain",
            "rhsgref_uniform_ttsko_urban",
            "rhsgref_uniform_vsr",
            "rhsgref_uniform_para_ttsko_oxblood",
            "rhsgref_uniform_para_ttsko_mountain",
            "rhsgref_uniform_para_ttsko_urban",
            "rhsgref_uniform_specter",
            "rhsgref_uniform_reed",
            "rhsgref_uniform_alpenflage",
            "rhsgref_uniform_flecktarn",
            "rhsgref_uniform_flecktarn_full",
            "rhsgref_uniform_tigerstripe",
            "rhsgref_uniform_woodland",
            "rhsgref_uniform_woodland_olive",
            "rhsgref_uniform_ERDL",
            "rhsgref_uniform_og107",
            "rhsgref_uniform_og107_erdl",
            "rhsgref_uniform_altis_lizard",
            "rhsgref_uniform_olive",
            "rhsgref_uniform_altis_lizard_olive",
            "rhsgref_uniform_dpm",
            "rhsgref_uniform_dpm_olive",
            "rhsgref_uniform_3color_desert",
            "rhsgref_uniform_gorka_1_f",
            "U_IG_leader",
            "rhsgref_uniform_TLA_1",
            "rhsgref_uniform_TLA_2",
        };


        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
