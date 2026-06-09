#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Lemonberries", "Mishkar", "Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Redd_Marder_1A5"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
