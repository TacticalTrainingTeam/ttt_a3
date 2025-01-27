#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Redd", "Stura", "Reimchen", "Andx"}; //Last Guy made Advanced Towing, used in the Bergepanzer
        url = ECSTRING(main,URL);
        
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_common", "ttt_rsr_core", "A3_Soft_F_Beta_MRAP_03", "A3_Armor_F_Beta_APC_Tracked_01", "A3_Soft_F_EPC_Truck_03", "ace_repair", "ace_refuel", "ace_rearm"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            "rsr_fennek_transport_flecktarn",
            "rsr_fennek_hmg_flecktarn",
            "rsr_fennek_gmg_flecktarn",

            "rsr_fennek_transport_tropentarn",
            "rsr_fennek_hmg_tropentarn",
            "rsr_fennek_gmg_tropentarn",

            "rsr_bergepanzer_tropentarn",
            "rsr_bergepanzer_flecktarn",

            "rsr_wisent_transport_flecktarn",
            "rsr_wisent_covered_flecktarn",
            "rsr_wisent_repair_flecktarn",
            "rsr_wisent_ammo_flecktarn",
            "rsr_wisent_fuel_flecktarn",
            "rsr_wisent_medical_flecktarn",
            
            "rsr_wisent_transport_tropentarn",
            "rsr_wisent_covered_tropentarn",
            "rsr_wisent_repair_tropentarn",
            "rsr_wisent_ammo_tropentarn",
            "rsr_wisent_fuel_tropentarn",
            "rsr_wisent_medical_tropentarn"
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
#include "CfgDigVehicles.hpp"
#include "CfgFunctions.hpp"