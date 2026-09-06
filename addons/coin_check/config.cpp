#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        // Every coin classname from db.hpp must be listed here too, or the engine won't
        // recognize it as real content (see the note at the top of db.hpp).
        weapons[] = {
            QGVAR(coin_1)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "cba_main", "ace_interact_menu", "ace_common"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
