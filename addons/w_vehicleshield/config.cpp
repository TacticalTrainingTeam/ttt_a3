#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"[W] Miller"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_main"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
