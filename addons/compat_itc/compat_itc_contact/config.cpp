#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON); // This is the name of the parent addon, used to group all sub-addons together in the config
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"a3_contact"};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1; // Skip this addon if the required addons are not present
    };
};

#include "CfgVehicles.hpp"