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
            QGVAR(zeusAmmo),
            QGVAR(zeusGrenades),
            QGVAR(zeusAt),
            QGVAR(zeusExplosives),
            QGVAR(zeusSupport),
            QGVAR(zeusMedAlpha),
            QGVAR(zeusMedBravo),
            QGVAR(zeusMedCharlie)
        };
        weapons[] = {};

        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
