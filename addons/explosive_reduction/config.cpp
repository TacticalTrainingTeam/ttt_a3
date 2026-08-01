#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        url = ECSTRING(main,URL);
        authors[] = {"Andx"};

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "ace_interact_menu"};
        units[] = {};
        weapons[] = {};

        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
