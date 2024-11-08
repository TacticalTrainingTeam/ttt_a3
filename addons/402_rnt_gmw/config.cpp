#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_402_common", "ttt_402_RnT_Main", "rnt_gmw_static"};
        author = ECSTRING(402_common,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(402_common,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"