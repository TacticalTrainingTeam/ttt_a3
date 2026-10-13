#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        url = ECSTRING(main,URL);
        authors[] = {"Timi007", "Andx"};

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common"};
        units[] = {};
        weapons[] = {};

        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "SmokeAmmoDisplay.hpp"
