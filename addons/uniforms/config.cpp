#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = "Tactical Training Team";
        authors[] = {"Reimchen","Andx"};
        url = "https://tacticalteam.de";

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_main",  "A3_Characters_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            "TTT_Uniform_Yellow_US_Desert",
            "TTT_Uniform_Green_US_Desert",
            "TTT_Uniform_Brown_US_Desert",
            "TTT_Uniform_Red_US_Desert",
            "TTT_Uniform_Black_US_Desert",
            "TTT_Uniform_Violet_US_Desert",
            "TTT_Uniform_White_US_Desert",
            "TTT_Uniform_Blue_US_Desert",
            "TTT_Uniform_Grey_US_Desert",
            "TTT_Uniform_Gold_US_Desert",
            //"TTT_Uniform_Silver_US_Desert", //.paa fehlt
            "TTT_Uniform_Orange_US_Desert",
            "TTT_Uniform_Platinum_US_Desert",

            "TTT_Uniform_Yellow_BW_Tropentarn",
            "TTT_Uniform_Green_BW_Tropentarn",
            "TTT_Uniform_Brown_BW_Tropentarn",
            "TTT_Uniform_Red_BW_Tropentarn",
            "TTT_Uniform_Black_BW_Tropentarn",
            "TTT_Uniform_Violet_BW_Tropentarn",
            "TTT_Uniform_White_BW_Tropentarn",
            "TTT_Uniform_Blue_BW_Tropentarn",
            "TTT_Uniform_Grey_BW_Tropentarn",
            "TTT_Uniform_Gold_BW_Tropentarn",
            "TTT_Uniform_Silver_BW_Tropentarn",
            "TTT_Uniform_Orange_BW_Tropentarn",
            
            "TTT_Uniform_Yellow_BW_Flecktarn",
            "TTT_Uniform_Green_BW_Flecktarn",
            "TTT_Uniform_Brown_BW_Flecktarn",
            "TTT_Uniform_Red_BW_Flecktarn",
            "TTT_Uniform_Black_BW_Flecktarn",
            "TTT_Uniform_Blue_BW_Flecktarn",
            "TTT_Uniform_Violet_BW_Flecktarn",
            "TTT_Uniform_White_BW_Flecktarn",
            "TTT_Uniform_Grey_BW_Flecktarn",
            "TTT_Uniform_Gold_BW_Flecktarn",
            //"TTT_Uniform_Silver_BW_Flecktarn", //.paa fehlt
            "TTT_Uniform_Orange_BW_Flecktarn",

            "TTT_Uniform_Platinum_Pilot",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"