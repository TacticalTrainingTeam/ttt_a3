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
            QGVAR(Item_Blue),
            QGVAR(Item_Brown),
            QGVAR(Item_Bronze),
            QGVAR(Item_Yellow),
            QGVAR(Item_Gold),
            QGVAR(Item_Grey),
            QGVAR(Item_Green),
            QGVAR(Item_Logo),
            QGVAR(Item_Platinum),
            QGVAR(Item_Red),
            QGVAR(Item_Black),
            QGVAR(Item_Silver),
            QGVAR(Item_Violet),
            QGVAR(Item_White),
            QGVAR(Item_Orange)
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            QGVAR(Blue),
            QGVAR(Brown),
            QGVAR(Bronze),
            QGVAR(Yellow),
            QGVAR(Gold),
            QGVAR(Grey),
            QGVAR(Green),
            QGVAR(Logo),
            QGVAR(Platinum),
            QGVAR(Red),
            QGVAR(Black),
            QGVAR(Silver),
            QGVAR(Violet),
            QGVAR(White),
            QGVAR(Orange)
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
