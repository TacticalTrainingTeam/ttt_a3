#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "rnt_gmw_static",
            "rnt_ace_compatibility"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
