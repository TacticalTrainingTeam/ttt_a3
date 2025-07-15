#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen", "Andx"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_common",  "A3_Characters_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            "ttt_uniform_item_plain_BW_Flecktarn",
            "ttt_uniform_item_black_BW_Flecktarn"            
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            "ttt_Uniform_Yellow_US_Desert",
            "ttt_Uniform_Green_US_Desert",
            "ttt_Uniform_Brown_US_Desert",
            "ttt_Uniform_Red_US_Desert",
            "ttt_Uniform_Black_US_Desert",
            "ttt_Uniform_Violet_US_Desert",
            "ttt_Uniform_White_US_Desert",
            "ttt_Uniform_Blue_US_Desert",
            "ttt_Uniform_Grey_US_Desert",
            "ttt_Uniform_Gold_US_Desert",
            "ttt_Uniform_Silver_US_Desert",
            "ttt_Uniform_Orange_US_Desert",
            "ttt_Uniform_Platinum_US_Desert",

            "ttt_Uniform_Yellow_BW_Tropentarn",
            "ttt_Uniform_Green_BW_Tropentarn",
            "ttt_Uniform_Green_alt_BW_Tropentarn",
            "ttt_Uniform_Brown_BW_Tropentarn",
            "ttt_Uniform_Red_BW_Tropentarn",
            "ttt_Uniform_Black_BW_Tropentarn",
            "ttt_Uniform_Violet_BW_Tropentarn",
            "ttt_Uniform_White_BW_Tropentarn",
            "ttt_Uniform_Blue_BW_Tropentarn",
            "ttt_Uniform_Grey_BW_Tropentarn",
            "ttt_Uniform_Gold_BW_Tropentarn",
            "ttt_Uniform_Silver_BW_Tropentarn",
            "ttt_Uniform_Orange_BW_Tropentarn",
            "ttt_Uniform_Platinum_BW_Tropentarn",
            
            "ttt_Uniform_Yellow_BW_Flecktarn",
            "ttt_Uniform_Green_BW_Flecktarn",
            "ttt_Uniform_Green_alt_BW_Flecktarn",
            "ttt_Uniform_Brown_BW_Flecktarn",
            "ttt_Uniform_Red_BW_Flecktarn",
            "ttt_Uniform_Black_BW_Flecktarn",
            "ttt_Uniform_Blue_BW_Flecktarn",
            "ttt_Uniform_Violet_BW_Flecktarn",
            "ttt_Uniform_White_BW_Flecktarn",
            "ttt_Uniform_Grey_BW_Flecktarn",
            "ttt_Uniform_Gold_BW_Flecktarn",
            "ttt_Uniform_Silver_BW_Flecktarn",
            "ttt_Uniform_Orange_BW_Flecktarn",

            "ttt_Uniform_Platinum_Pilot",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
