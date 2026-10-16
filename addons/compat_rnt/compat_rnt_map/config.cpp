#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Mishkar", "Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_common",
            "mts_map",
            "Redd_Marder_1A5",
            "Redd_Tank_Fuchs_1A4",
            "Redd_Tank_LKW_leicht_gl"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        // Only the map action needs Metis Enhanced, everything else of the component works without it
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
