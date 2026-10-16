#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_common",
            "ace_hunterkiller",
            "bwa3_puma"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        // Only the turret rotation of the MUSS needs ACE Hunterkiller, everything else of the component works without it
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
