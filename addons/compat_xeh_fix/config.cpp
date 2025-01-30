#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_main"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
