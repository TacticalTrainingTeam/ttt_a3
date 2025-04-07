#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TTT_B_Commanding_Officer_F",
            "TTT_B_Executive_Officer_F",
            "TTT_B_JTAC_F",
            "TTT_B_FO_F",
            "TTT_B_RadioOperator_F",
            "TTT_B_Soldier_Repair_TL_F",
            "TTT_B_Crew_TL_F",
            "TTT_B_Medic_CM_F",
            "TTT_B_Medic_Doctor_F",
            "TTT_B_EOD_F",
            "TTT_B_EOD_TL_F",
            "ttt_common_vba_crate",
            "ttt_common_vbt_crate",
            "ttt_common_explosives_crate",
            "ttt_common_pio_crate",
            "ttt_common_eod_crate",
            "ttt_common_eod_ugv_crate",
            "ttt_common_uav_crate",
            "ttt_common_mark_crate"
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
#include "configs\ACE_Fortify.hpp"