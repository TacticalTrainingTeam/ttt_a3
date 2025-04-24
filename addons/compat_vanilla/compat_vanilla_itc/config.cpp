#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {    
            "itc_land_cup_m270_ba_wood_he",
            "itc_land_cup_m270_ba_wood_pgm",
            "itc_land_cup_m270_ba_des_he",
            "itc_land_cup_m270_ba_des_pgm",
            "itc_land_cup_m270_hil_he",
            "itc_land_cup_m270_hil_pgm",
            "itc_land_cup_m270_usa_he",
            "itc_land_cup_m270_usa_pgm",
            "itc_land_cup_m270_usmc_he",
            "itc_land_cup_m270_usmc_pgm",
            "itc_land_cup_m270_aaf_he",
            "itc_land_cup_m270_aaf_pgm",
            "itc_land_cup_m270_racs_he",
            "itc_land_cup_m270_racs_pgm"
         };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"", "", "itc_land_common"};
        authors[] = {"Addi"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1; // Skip this addon if the required addons are not present
    };
};

#include "CfgITCLandBalistics.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"