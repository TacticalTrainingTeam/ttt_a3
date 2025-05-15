#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(moduleAddVHS)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common"};
        authors[] = {"Miller"};
        author = ECSTRING(main,author);
        authorUrl = ECSTRING(main,url);
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
