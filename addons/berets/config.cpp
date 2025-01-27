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
        requiredAddons[] = {"ttt_common",  "A3_Characters_F", "A3_Weapons_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            "ttt_Beret_Item_Blue",
            "ttt_Beret_Item_Brown",
            "ttt_Beret_Item_Bronze",
            "ttt_Beret_Item_Yellow",
            "ttt_Beret_Item_Gold",
            "ttt_Beret_Item_Grey",
            "ttt_Beret_Item_Green",
            "ttt_Beret_Item_Logo",
            "ttt_Beret_Item_Platinum",
            "ttt_Beret_Item_Red",
            "ttt_Beret_Item_Black",
            "ttt_Beret_Item_Silver",
            "ttt_Beret_Item_Violet",
            "ttt_Beret_Item_White",
            "ttt_Beret_Item_Orange"
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            "ttt_Beret_Blue",
            "ttt_Beret_Brown",
            "ttt_Beret_Bronze",
            "ttt_Beret_Yellow",
            "ttt_Beret_Gold",
            "ttt_Beret_Grey",
            "ttt_Beret_Green",
            "ttt_Beret_Logo",
            "ttt_Beret_Platinum",
            "ttt_Beret_Red",
            "ttt_Beret_Black",
            "ttt_Beret_Silver",
            "ttt_Beret_Violet",
            "ttt_Beret_White",
            "ttt_Beret_Orange"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"