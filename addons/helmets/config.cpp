#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen","Andx"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_common",  "A3_Characters_F", "A3_Weapons_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            QGVAR(Item_bw_fleck_1),
            QGVAR(Item_bw_fleck_2),
            QGVAR(Item_bw_fleck_3),
            QGVAR(Item_bw_fleck_4),
            QGVAR(Item_bw_fleck_5),
            QGVAR(Item_bw_fleck_6),
            QGVAR(Item_bw_fleck_7),
            QGVAR(Item_bw_fleck_8),
            QGVAR(Item_bw_fleck_9),
            QGVAR(Item_bw_fleck_10),
            QGVAR(Item_bw_fleck_11),

            QGVAR(Item_bw_tropen_1),
            QGVAR(Item_bw_tropen_2),
            QGVAR(Item_bw_tropen_3),
            QGVAR(Item_bw_tropen_4),
            QGVAR(Item_bw_tropen_5),
            QGVAR(Item_bw_tropen_6),
            QGVAR(Item_bw_tropen_7),
            QGVAR(Item_bw_tropen_8),
            QGVAR(Item_bw_tropen_9),
            QGVAR(Item_bw_tropen_10),
            QGVAR(Item_bw_tropen_11),

            QGVAR(Item_us_desert_1),
            QGVAR(Item_us_desert_2),
            QGVAR(Item_us_desert_3),
            QGVAR(Item_us_desert_4),
            QGVAR(Item_us_desert_5),
            QGVAR(Item_us_desert_6),
            QGVAR(Item_us_desert_7),
            QGVAR(Item_us_desert_8),
            QGVAR(Item_us_desert_9),
            QGVAR(Item_us_desert_10),
            QGVAR(Item_us_desert_11),

            QGVAR(item_Buzzard),
            QGVAR(item_Buzzard_NVG),
            QGVAR(item_Eagle),
            QGVAR(item_Eagle_NVG),
            QGVAR(item_hawk),
            QGVAR(item_Hawk_NVG),
            QGVAR(item_Falcon),
            QGVAR(item_Falcon_NVG),

            QGVAR(item_crew_yellow),
            QGVAR(item_crew_bronze),
            QGVAR(item_crew_grey),
            QGVAR(item_crew_silver),
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {
            QGVAR(Buzzard),
            QGVAR(Buzzard_NVG),
            QGVAR(Hawk),
            QGVAR(Hawk_NVG),
            QGVAR(Falcon),
            QGVAR(Falcon_NVG),
            QGVAR(Eagle),
            QGVAR(Eagle_NVG),

            QGVAR(Bronze_Vehiclecrew),
            QGVAR(Grey_Vehiclecrew),
            QGVAR(Silver_Vehiclecrew),
            QGVAR(Yellow_Vehiclecrew),

            QGVAR(1_US_Desert),
            QGVAR(2_US_Desert),
            QGVAR(3_US_Desert),
            QGVAR(4_US_Desert),
            QGVAR(5_US_Desert),
            QGVAR(6_US_Desert),
            QGVAR(7_US_Desert),
            QGVAR(8_US_Desert),
            QGVAR(9_US_Desert),
            QGVAR(10_US_Desert),
            QGVAR(11_US_Desert),

            QGVAR(1_BW_Flecktarn),
            QGVAR(2_BW_Flecktarn),
            QGVAR(3_BW_Flecktarn),
            QGVAR(4_BW_Flecktarn),
            QGVAR(5_BW_Flecktarn),
            QGVAR(6_BW_Flecktarn),
            QGVAR(7_BW_Flecktarn),
            QGVAR(8_BW_Flecktarn),
            QGVAR(9_BW_Flecktarn),
            QGVAR(10_BW_Flecktarn),
            QGVAR(11_BW_Flecktarn),

            QGVAR(1_BW_Tropentarn),
            QGVAR(2_BW_Tropentarn),
            QGVAR(3_BW_Tropentarn),
            QGVAR(4_BW_Tropentarn),
            QGVAR(5_BW_Tropentarn),
            QGVAR(6_BW_Tropentarn),
            QGVAR(7_BW_Tropentarn),
            QGVAR(8_BW_Tropentarn),
            QGVAR(9_BW_Tropentarn),
            QGVAR(10_BW_Tropentarn),
            QGVAR(11_BW_Tropentarn),
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        //skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
