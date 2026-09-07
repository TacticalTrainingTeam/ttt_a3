#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        // Every coin classname from db.hpp must be listed here too, or the engine won't
        // recognize it as real content (see the note at the top of db.hpp).
        weapons[] = {
            QGVAR(coin_1),
            QGVAR(coin_2),
            QGVAR(coin_3),
            QGVAR(coin_4),
            QGVAR(coin_5),
            QGVAR(coin_6),
            QGVAR(coin_7),
            QGVAR(coin_8),
            QGVAR(coin_9),
            QGVAR(coin_10),
            QGVAR(coin_11),
            QGVAR(coin_12),
            QGVAR(coin_13),
            QGVAR(coin_14),
            QGVAR(coin_15),
            QGVAR(coin_16),
            QGVAR(coin_17),
            QGVAR(coin_18),
            QGVAR(coin_19),
            QGVAR(coin_20)
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
