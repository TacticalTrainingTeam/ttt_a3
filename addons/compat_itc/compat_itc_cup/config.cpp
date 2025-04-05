#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CUP_Vehicles_LoadOrder"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1; // Skip this addon if the required addons are not present
    };
};

#include "CfgVehicles.hpp"