#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {
            "itc_land_ldf_mlrs_zamak_pgm",
            "itc_land_ldf_mlrs_zamak_he"
         };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F", "itc_land_common"};
        authors[] = {"Addi", "Andx"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1; // Skip this addon if the required addons are not present
    };
};

#include "CfgVehicles.hpp"
