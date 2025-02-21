#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "Gruppe W";
        authors[] = {"[W] Miller", "Andx"};
        authorUrl = "https://www.gruppe-w.de/";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_common"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "Cfg3DEN.hpp"
