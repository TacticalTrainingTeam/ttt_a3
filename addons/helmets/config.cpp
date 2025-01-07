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
        requiredAddons[] = {"ttt_main",  "A3_Characters_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            "ttt_Helmet_Item_bw_fleck_1",
            "ttt_Helmet_Item_bw_fleck_2",
            "ttt_Helmet_Item_bw_fleck_3",
            "ttt_Helmet_Item_bw_fleck_4",
            "ttt_Helmet_Item_bw_fleck_5",
            "ttt_Helmet_Item_bw_fleck_6",
            "ttt_Helmet_Item_bw_fleck_7",
            "ttt_Helmet_Item_bw_fleck_8",
            "ttt_Helmet_Item_bw_fleck_9",
            "ttt_Helmet_Item_bw_fleck_10",
            "ttt_Helmet_Item_bw_fleck_11",

            "ttt_Helmet_Item_bw_tropen_1",
            "ttt_Helmet_Item_bw_tropen_2",
            "ttt_Helmet_Item_bw_tropen_3",
            "ttt_Helmet_Item_bw_tropen_4",
            "ttt_Helmet_Item_bw_tropen_5",
            "ttt_Helmet_Item_bw_tropen_6",
            "ttt_Helmet_Item_bw_tropen_7",
            "ttt_Helmet_Item_bw_tropen_8",
            "ttt_Helmet_Item_bw_tropen_9",
            "ttt_Helmet_Item_bw_tropen_10",
            "ttt_Helmet_Item_bw_tropen_11",

            "ttt_Helmet_Item_us_desert_1",
            "ttt_Helmet_Item_us_desert_2",
            "ttt_Helmet_Item_us_desert_3",
            "ttt_Helmet_Item_us_desert_4",
            "ttt_Helmet_Item_us_desert_5",
            "ttt_Helmet_Item_us_desert_6",
            "ttt_Helmet_Item_us_desert_7",
            "ttt_Helmet_Item_us_desert_8",
            "ttt_Helmet_Item_us_desert_9",
            "ttt_Helmet_Item_us_desert_10",
            "ttt_Helmet_Item_us_desert_11"
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
            "ttt_Helmet_1_US_Flecktarn",
            "ttt_Helmet_2_US_Flecktarn",
            "ttt_Helmet_3_US_Flecktarn",
            "ttt_Helmet_4_US_Flecktarn",
            "ttt_Helmet_5_US_Flecktarn",
            "ttt_Helmet_6_US_Flecktarn",
            "ttt_Helmet_7_US_Flecktarn",
            "ttt_Helmet_8_US_Flecktarn",
            "ttt_Helmet_9_US_Flecktarn",
            "ttt_Helmet_10_US_Flecktarn",
            "ttt_Helmet_11_US_Flecktarn",
            "ttt_Helmet_1_US_Tropentarn",
            "ttt_Helmet_2_US_Tropentarn",
            "ttt_Helmet_3_US_Tropentarn",
            "ttt_Helmet_4_US_Tropentarn",
            "ttt_Helmet_5_US_Tropentarn",
            "ttt_Helmet_6_US_Tropentarn",
            "ttt_Helmet_7_US_Tropentarn",
            "ttt_Helmet_8_US_Tropentarn",
            "ttt_Helmet_9_US_Tropentarn",
            "ttt_Helmet_10_US_Tropentarn",
            "ttt_Helmet_11_US_Tropentarn",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"