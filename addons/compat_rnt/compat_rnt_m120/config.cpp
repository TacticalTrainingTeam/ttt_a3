#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Redd_Tank_M120_Tampella",
            "rnt_ace_compatibility"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"