#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        url = ECSTRING(main,URL);
        authors[] = {"Andx"};

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "ace_interact_menu"};
        units[] = {
            QGVAR(module_ammo),
            QGVAR(module_grenades),
            QGVAR(module_at),
            QGVAR(module_explosives),
            QGVAR(module_support),
            QGVAR(module_medical_alpha),
            QGVAR(module_medical_bravo),
            QGVAR(module_medical_charlie)
        };
        weapons[] = {};

        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
