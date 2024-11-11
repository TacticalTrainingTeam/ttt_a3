#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen","Andx"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_main",  "A3_Characters_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
    
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            "ttt_Helmet_Buzzard",
            "ttt_Helmet_Hawk",
            "ttt_Helmet_Falcon",
            "ttt_Helmet_Eagle",
            "ttt_Helmet_Bronze_Vehiclecrew",
            "ttt_Helmet_Grey_Vehiclecrew",
            "ttt_Helmet_Silver_Vehiclecrew",
            "ttt_Helmet_Yellow_Vehiclecrew",
            "ttt_Helmet_1_US_Desert",
            "ttt_Helmet_2_US_Desert",
            "ttt_Helmet_3_US_Desert",
            "ttt_Helmet_4_US_Desert",
            "ttt_Helmet_5_US_Desert",
            "ttt_Helmet_6_US_Desert",
            "ttt_Helmet_7_US_Desert",
            "ttt_Helmet_8_US_Desert",
            "ttt_Helmet_9_US_Desert",
            "ttt_Helmet_10_US_Desert",
            "ttt_Helmet_11_US_Desert",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"