#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(moduleAddVHS)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common"};
        authors[] = {"Miller"};
        author = "Gruppe W";
        url = "https://www.gruppe-w.de/";
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
