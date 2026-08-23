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
            QGVAR(Item_Black_BW_Tropentarn),
            QGVAR(Item_Green_alt_BW_Tropentarn),
            QGVAR(Item_Yellow_BW_Tropentarn),
            QGVAR(Item_Grey_BW_Tropentarn),
            QGVAR(Item_Gold_BW_Tropentarn),
            QGVAR(Item_Green_BW_Tropentarn),
            QGVAR(Item_Brown_BW_Tropentarn),
            QGVAR(Item_Red_BW_Tropentarn),
            QGVAR(Item_Bronze_BW_Tropentarn),
            QGVAR(Item_Blue_BW_Tropentarn),
            QGVAR(Item_Violet_BW_Tropentarn),
            QGVAR(Item_White_BW_Tropentarn),
            QGVAR(Item_Silver_BW_Tropentarn),
            QGVAR(Item_Orange_BW_Tropentarn),
            QGVAR(Item_Platinum_BW_Tropentarn),
            QGVAR(Item_Orange_BW_Flecktarn),
            QGVAR(Item_Yellow_BW_Flecktarn),
            QGVAR(Item_Grey_BW_Flecktarn),
            QGVAR(Item_Gold_BW_Flecktarn),
            QGVAR(Item_Green_BW_Flecktarn),
            QGVAR(Item_Green_alt_BW_Flecktarn),
            QGVAR(Item_Brown_BW_Flecktarn),
            QGVAR(Item_Black_BW_Flecktarn),
            QGVAR(Item_Red_BW_Flecktarn),
            QGVAR(Item_Bronze_BW_Flecktarn),
            QGVAR(Item_Blue_BW_Flecktarn),
            QGVAR(Item_Violet_BW_Flecktarn),
            QGVAR(Item_White_BW_Flecktarn),
            QGVAR(Item_Silver_BW_Flecktarn),
            QGVAR(Item_Silver_US_Desert),
            QGVAR(Item_Yellow_US_Desert),
            QGVAR(Item_Grey_US_Desert),
            QGVAR(Item_Gold_US_Desert),
            QGVAR(Item_Green_US_Desert),
            QGVAR(Item_Brown_US_Desert),
            QGVAR(Item_Black_US_Desert),
            QGVAR(Item_Red_US_Desert),
            QGVAR(Item_Bronze_US_Desert),
            QGVAR(Item_Blue_US_Desert),
            QGVAR(Item_Violet_US_Desert),
            QGVAR(Item_White_US_Desert),
            QGVAR(Item_Orange_US_Desert),
            QGVAR(Item_Platinum_US_Desert),
            QGVAR(Item_Platinum_Pilot)
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            QGVAR(Yellow_US_Desert_item),
            QGVAR(Grey_US_Desert_item),
            QGVAR(Gold_US_Desert_item),
            QGVAR(Silver_US_Desert_item),
            QGVAR(Green_US_Desert_item),
            QGVAR(Brown_US_Desert_item),
            QGVAR(Black_US_Desert_item),
            QGVAR(Red_US_Desert_item),
            QGVAR(Bronze_US_Desert_item),
            QGVAR(Blue_US_Desert_item),
            QGVAR(Violet_US_Desert_item),
            QGVAR(White_US_Desert_item),
            QGVAR(Orange_US_Desert_item),
            QGVAR(Platinum_US_Desert_item),

            QGVAR(Yellow_BW_Flecktarn_item),
            QGVAR(Grey_BW_Flecktarn_item),
            QGVAR(Orange_BW_Flecktarn_item),
            QGVAR(Gold_BW_Flecktarn_item),
            QGVAR(Green_BW_Flecktarn_item),
            QGVAR(Green_alt_BW_Flecktarn_item),
            QGVAR(Brown_BW_Flecktarn_item),
            QGVAR(Black_BW_Flecktarn_item),
            QGVAR(Red_BW_Flecktarn_item),
            QGVAR(Bronze_BW_Flecktarn_item),
            QGVAR(Blue_BW_Flecktarn_item),
            QGVAR(Violet_BW_Flecktarn_item),
            QGVAR(White_BW_Flecktarn_item),
            QGVAR(Silver_BW_Flecktarn_item),

            QGVAR(Platinum_Pilot_item),
            QGVAR(plain_BW_Flecktarn_item),
            QGVAR(plain_US_Desert_item),

            QGVAR(Yellow_BW_Tropentarn_item),
            QGVAR(Grey_BW_Tropentarn_item),
            QGVAR(Orange_BW_Tropentarn_item),
            QGVAR(Gold_BW_Tropentarn_item),
            QGVAR(Green_BW_Tropentarn_item),
            QGVAR(Green_alt_BW_Tropentarn_item),
            QGVAR(Brown_BW_Tropentarn_item),
            QGVAR(Black_BW_Tropentarn_item),
            QGVAR(Red_BW_Tropentarn_item),
            QGVAR(Bronze_BW_Tropentarn_item),
            QGVAR(Blue_BW_Tropentarn_item),
            QGVAR(Silver_BW_Tropentarn_item),
            QGVAR(Platinum_BW_Tropentarn_item),
            QGVAR(Violet_BW_Tropentarn_item),
            QGVAR(White_BW_Tropentarn_item)
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
