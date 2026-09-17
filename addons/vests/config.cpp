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
            QGVAR(Item_Crew_Bronze),
            QGVAR(Item_Crew_Silver),
            QGVAR(Item_Crew_White),

            QGVAR(Item_heavy_Yellow_US_Desert),
            QGVAR(Item_Lite_Yellow_US_Desert),
            QGVAR(Item_heavy_Green_US_Desert),
            QGVAR(Item_Lite_Green_US_Desert),
            QGVAR(Item_heavy_Brown_US_Desert),
            QGVAR(Item_Lite_Brown_US_Desert),
            QGVAR(Item_heavy_blue_US_Desert),
            QGVAR(Item_Lite_blue_US_Desert),
            QGVAR(Item_heavy_Red_US_Desert),
            QGVAR(Item_Lite_Red_US_Desert),
            QGVAR(Item_heavy_Black_US_Desert),
            QGVAR(Item_Lite_Black_US_Desert),
            QGVAR(Item_heavy_Violet_US_Desert),
            QGVAR(Item_Lite_Violet_US_Desert),
            QGVAR(Item_heavy_Gold_US_Desert),
            QGVAR(Item_Lite_Gold_US_Desert),
            QGVAR(Item_heavy_Grey_US_Desert),
            QGVAR(Item_Lite_Grey_US_Desert),
            QGVAR(Item_heavy_Orange_US_Desert),
            QGVAR(Item_Lite_Orange_US_Desert),
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            QGVAR(Crew_Bronze),
            QGVAR(Crew_Silver),
            QGVAR(Crew_White),

            QGVAR(Heavy_Yellow_US_Desert),
            QGVAR(Lite_Yellow_US_Desert),
            QGVAR(Heavy_Green_US_Desert),
            QGVAR(Lite_Green_US_Desert),
            QGVAR(Heavy_Brown_US_Desert),
            QGVAR(Lite_Brown_US_Desert),
            QGVAR(Heavy_Blue_US_Desert),
            QGVAR(Lite_Blue_US_Desert),
            QGVAR(Heavy_Red_US_Desert),
            QGVAR(Lite_Red_US_Desert),
            QGVAR(Heavy_Black_US_Desert),
            QGVAR(Lite_Black_US_Desert),
            QGVAR(Heavy_Violet_US_Desert),
            QGVAR(Lite_Violet_US_Desert),
            QGVAR(Heavy_Gold_US_Desert),
            QGVAR(Lite_Gold_US_Desert),
            QGVAR(Heavy_Grey_US_Desert),
            QGVAR(Lite_Grey_US_Desert),
            QGVAR(Heavy_Orange_US_Desert),
            QGVAR(Lite_Orange_US_Desert),
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
