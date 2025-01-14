#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_main"
        };
        author = "ArmaForces";
        authors[] = {"jonpas", "veteran29", "3Mydlo3", "Andx"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"