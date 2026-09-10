#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleAddBftJammer)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "A3_Modules_F", "crowsEW_main", "crowsEW_spectrum", "cTab_core", "cTab_main"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andy"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
