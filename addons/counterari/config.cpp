#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(registerEnemyAriModule),
            QGVAR(registerFriendlyAriModule)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "A3_Modules_F"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Redd", "Andx", "EinStein"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"