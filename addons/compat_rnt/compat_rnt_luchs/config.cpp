#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Mishkar", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "rnt_sppz_2a2_luchs"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
