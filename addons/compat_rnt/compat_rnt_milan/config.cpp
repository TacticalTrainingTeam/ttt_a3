#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Lemonberries", "Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Redd_Milan_Static",
            "Redd_Bags"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"