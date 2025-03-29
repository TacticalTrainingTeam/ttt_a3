#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Zumi", "Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_csw",
            "Redd_Bags",
            "rnt_mg3_static",
            "rnt_ace_compatibility"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgMagazineGroups.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"