#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam); 
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_common", "A3_Data_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {            
            "ttt_Flag_Logo",
            "ttt_Flag_Blue",
            "ttt_Flag_Brown",
            "ttt_Flag_Bronze",
            "ttt_Flag_Yellow",
            "ttt_Flag_Gold",
            "ttt_Flag_Green",
            "ttt_Flag_Red",
            "ttt_Flag_Black",
            "ttt_Flag_Silver",
            "ttt_Flag_Platinum",
            "ttt_Flag_Violet",
            "ttt_Flag_White",
            "ttt_Flag_Orange",
            "ttt_Sign_Small_Blue",
            "ttt_Sign_Small_Bronze",
            "ttt_Sign_Small_Brown",
            "ttt_Sign_Small_Yellow",
            "ttt_Sign_Small_Gold",
            "ttt_Sign_Small_Grey",
            "ttt_Sign_Small_Green",
            "ttt_Sign_Small_Red",
            "ttt_Sign_Small_Black",
            "ttt_Sign_Small_Silver",
            "ttt_Sign_Small_Platinum",
            "ttt_Sign_Small_Violet",
            "ttt_Sign_Small_White",
            "ttt_Sign_Small_Logo",
            "ttt_Sign_Small_Orange",
            "ttt_Sign_Large_Blue",
            "ttt_Sign_Large_Bronze",
            "ttt_Sign_Large_Brown",
            "ttt_Sign_Large_Yellow",
            "ttt_Sign_Large_Gold",
            "ttt_Sign_Large_Grey",
            "ttt_Sign_Large_Green",
            "ttt_Sign_Large_Red",
            "ttt_Sign_Large_Black",
            "ttt_Sign_Large_Silver",
            "ttt_Sign_Large_Platinum",
            "ttt_Sign_Large_Violet",
            "ttt_Sign_Large_White",
            "ttt_Sign_Large_Logo",
            "ttt_Sign_Large_Orange"
            };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"