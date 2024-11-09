#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_402_common",
            "ttt_402_rnt_main",
            "redd_marder_1a5",
            "Redd_Bags",
            "ace_common"
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Lemonberries", "Mishkar", "Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"