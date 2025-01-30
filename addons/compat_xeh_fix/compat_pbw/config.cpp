#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PBW_German_Chests"};
        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;   
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"