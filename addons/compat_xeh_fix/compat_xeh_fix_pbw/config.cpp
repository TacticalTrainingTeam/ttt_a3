#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        // Use meta information from specified addon. Used to avoid repeated declarations.
        addonRootClass = QUOTE(ADDON);
        
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PBW_German_Chests"};
        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;   
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"