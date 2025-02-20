#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen", "Andx"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_common", "A3_Characters_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            "ttt_Vest_Item_Crew_Bronze",
            "ttt_Vest_Item_Crew_Silver",
            "ttt_Vest_Item_Crew_White",

            "ttt_Vest_Item_Heavy_Yellow_US_Desert",
            "ttt_Vest_Item_Lite_Yellow_US_Desert",
            "ttt_Vest_Item_Heavy_Green_US_Desert",
            "ttt_Vest_Item_Lite_Green_US_Desert",
            "ttt_Vest_Item_Heavy_Brown_US_Desert",
            "ttt_Vest_Item_Lite_Brown_US_Desert",
            "ttt_Vest_Item_Heavy_Blue_US_Desert",
            "ttt_Vest_Item_Lite_Blue_US_Desert",
            "ttt_Vest_Item_Heavy_Red_US_Desert",
            "ttt_Vest_Item_Lite_Red_US_Desert",
            "ttt_Vest_Item_Heavy_Black_US_Desert",
            "ttt_Vest_Item_Lite_Black_US_Desert",
            "ttt_Vest_Item_Heavy_Violet_US_Desert",
            "ttt_Vest_Item_Lite_Violet_US_Desert",
            "ttt_Vest_Item_Heavy_Gold_US_Desert",
            "ttt_Vest_Item_Lite_Gold_US_Desert",
            "ttt_Vest_Item_Heavy_Grey_US_Desert",
            "ttt_Vest_Item_Lite_Grey_US_Desert",
            "ttt_Vest_Item_Heavy_Orange_US_Desert",
            "ttt_Vest_Item_Lite_Orange_US_Desert",
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            "ttt_Vest_Crew_Bronze",
            "ttt_Vest_Crew_Silver",
            "ttt_Vest_Crew_White",

            "ttt_Vest_Heavy_Yellow_US_Desert",
            "ttt_Vest_Lite_Yellow_US_Desert",
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Vest_Lite_Green_US_Desert",
            "ttt_Vest_Heavy_Brown_US_Desert",
            "ttt_Vest_Lite_Brown_US_Desert",
            "ttt_Vest_Heavy_Blue_US_Desert",
            "ttt_Vest_Lite_Blue_US_Desert",
            "ttt_Vest_Heavy_Red_US_Desert",
            "ttt_Vest_Lite_Red_US_Desert",
            "ttt_Vest_Heavy_Black_US_Desert",
            "ttt_Vest_Lite_Black_US_Desert",
            "ttt_Vest_Heavy_Violet_US_Desert",
            "ttt_Vest_Lite_Violet_US_Desert",
            "ttt_Vest_Heavy_Gold_US_Desert",
            "ttt_Vest_Lite_Gold_US_Desert",
            "ttt_Vest_Heavy_Grey_US_Desert",
            "ttt_Vest_Lite_Grey_US_Desert",
            "ttt_Vest_Heavy_Orange_US_Desert",
            "ttt_Vest_Lite_Orange_US_Desert",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"