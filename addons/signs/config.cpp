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
            QGVAR(Flag_Logo),
            QGVAR(Flag_Blue),
            QGVAR(Flag_Brown),
            QGVAR(Flag_Bronze),
            QGVAR(Flag_Yellow),
            QGVAR(Flag_Gold),
            QGVAR(Flag_Green),
            QGVAR(Flag_Grey),
            QGVAR(Flag_Red),
            QGVAR(Flag_Black),
            QGVAR(Flag_Silver),
            QGVAR(Flag_Platinum),
            QGVAR(Flag_Violet),
            QGVAR(Flag_White),
            QGVAR(Flag_Orange),
            QGVAR(Small_Blue),
            QGVAR(Small_Bronze),
            QGVAR(Small_Brown),
            QGVAR(Small_Yellow),
            QGVAR(Small_Gold),
            QGVAR(Small_Grey),
            QGVAR(Small_Green),
            QGVAR(Small_Red),
            QGVAR(Small_Black),
            QGVAR(Small_Silver),
            QGVAR(Small_Platinum),
            QGVAR(Small_Violet),
            QGVAR(Small_White),
            QGVAR(Small_Logo),
            QGVAR(Small_Orange),
            QGVAR(Large_Blue),
            QGVAR(Large_Bronze),
            QGVAR(Large_Brown),
            QGVAR(Large_Yellow),
            QGVAR(Large_Gold),
            QGVAR(Large_Grey),
            QGVAR(Large_Green),
            QGVAR(Large_Red),
            QGVAR(Large_Black),
            QGVAR(Large_Silver),
            QGVAR(Large_Platinum),
            QGVAR(Large_Violet),
            QGVAR(Large_White),
            QGVAR(Large_Logo),
            QGVAR(Large_Orange)
            };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
