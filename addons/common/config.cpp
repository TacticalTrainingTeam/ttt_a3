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
            "ttt_common_eod_ugv_crate",
            "ttt_common_uav_crate",
            "ttt_common_mark_crate",
            "ttt_common_paradrop_crate",
            QGVAR(sana_crate),
            QGVAR(sanb_crate),
            QGVAR(sanc_crate),
            "TTT_personalAidKitItem"
        };
        weapons[] = {
            QGVAR(spraypaintMemes),
            "TTT_personalAidKit"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_main", "zen_main", "ace_medical_treatment"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx","Reimchen","EinStein"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionsClasses.hpp"
#include "Cfg3DEN.hpp"
#include "Dialog.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "configs\ACE_Fortify.hpp"
#include "configs\ACE_Tags.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"
