#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ttt_common_vba_crate",
            "ttt_common_vbt_crate",
            "ttt_common_explosives_crate",
            "ttt_common_pio_crate",
            "ttt_common_eod_crate",
            "ttt_common_eod_ugv_crate"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_main"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx","Reimchen","EinStein"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionsClasses.hpp"
#include "Dialog.hpp"
#include "CfgVehicles.hpp"