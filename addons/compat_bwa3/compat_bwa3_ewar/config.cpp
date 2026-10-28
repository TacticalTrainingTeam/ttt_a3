#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"crowsEW_main", "bwa3_dingo2"};
        authors[] = {"Andx"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1; // Skip this addon if the required addons are not present
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
