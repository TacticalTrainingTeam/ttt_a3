#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "Gruppe W";
        authors[] = {"[W] Miller"};
        url = "https://www.gruppe-w.de/";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
