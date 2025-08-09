#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen", "Andx", "G.Wagner"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_common",  "A3_Characters_F", "A3_Weapons_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            "ttt_backpack_radio_coyote",
            "ttt_backpack_radio_olive",
            "ttt_backpack_radio_brown_us_desert",
            "ttt_backpack_radio_bronze_us_desert",
            "ttt_backpack_radio_green_us_desert",
            "ttt_backpack_radio_grey_us_desert",
            "ttt_backpack_radio_gold_us_desert",
            "ttt_backpack_radio_platinum_us_desert",
            "ttt_backpack_radio_silver_us_desert",
            "ttt_backpack_radio_white_us_desert",
            "ttt_backpack_radio_yellow_us_desert",
            "ttt_backpack_medic_tan_01",
            "ttt_backpack_medic_tan_02",
            "ttt_backpack_medic_tan_03",
            "ttt_backpack_medic_rgr_01",
            "ttt_backpack_medic_rgr_02",
            "ttt_backpack_medic_rgr_03"
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
