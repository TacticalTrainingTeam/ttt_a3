#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"[W] Miller", "Andx"};
        url = ECSTRING(main,url);
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
