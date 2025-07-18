#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Lemonberries", "Mishkar", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "redd_tank_wiesel_1a4_mk20"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
