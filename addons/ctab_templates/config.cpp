#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ctab_core", "ttt_common"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
