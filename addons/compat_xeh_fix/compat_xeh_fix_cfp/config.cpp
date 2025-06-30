#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        // Use meta information from specified addon. Used to avoid repeated declarations.
        addonRootClass = QUOTE(ADDON);
        
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "CFP_I_WAGNER",
            "CFP_I_WAGNER_WDL",
            "CFP_I_WAGNER_WIN",
            "CFP_O_WAGNER",
            "CFP_O_WAGNER_WDL",
            "CFP_O_WAGNER_WIN",
            "CFP_O_SDARMY",
            "CFP_O_RUARMY_DES",
            "CFP_O_BOKOHARAM"
        };
        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;   
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
