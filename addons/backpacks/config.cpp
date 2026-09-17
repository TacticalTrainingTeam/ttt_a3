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
        requiredAddons[] = {"ttt_common", "A3_Supplies_F_Enoch_Bags", "A3_Weapons_F_Ammoboxes"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            QGVAR(radio_coyote),
            QGVAR(radio_olive),
            QGVAR(radio_brown_us_desert),
            QGVAR(radio_bronze_us_desert),
            QGVAR(radio_green_us_desert),
            QGVAR(radio_grey_us_desert),
            QGVAR(radio_gold_us_desert),
            QGVAR(radio_platinum_us_desert),
            QGVAR(radio_silver_us_desert),
            QGVAR(radio_white_us_desert),
            QGVAR(radio_yellow_us_desert),
            QGVAR(medic_tan_01),
            QGVAR(medic_tan_02),
            QGVAR(medic_tan_03),
            QGVAR(medic_rgr_01),
            QGVAR(medic_rgr_02),
            QGVAR(medic_rgr_03)
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
