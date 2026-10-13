#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        url = ECSTRING(main,URL);
        authors[] = {"Mishkar", "Timi007", "Andx"};

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "ace_tacticalladder", "ace_interaction"};
        units[] = {};
        weapons[] = {};

        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
