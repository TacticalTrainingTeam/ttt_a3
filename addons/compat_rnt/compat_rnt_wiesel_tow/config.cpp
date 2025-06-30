#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Lemonberries", "Mishkar", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Redd_Tank_Wiesel_1A2_TOW"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
