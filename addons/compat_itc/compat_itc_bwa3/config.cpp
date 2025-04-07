#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {"itc_land_bwa3_pzh2000d","itc_land_bwa3_pzh2000" };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"bwa3_common"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1; // Skip this addon if the required addons are not present
    };
};

#include "CfgMagazines.hpp"
#include "CfgITCLandBallistics.hpp"
#include "CfgVehicles.hpp"
#include "CfgXEH.hpp"
#include "CfgWeapons.hpp"