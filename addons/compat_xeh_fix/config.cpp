#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PBW_German_Chests","FIR_PilotCrewPack_US","Redd_Tank_M120_Tampella","m120_comp_ace","rnt_ace_compatibility","rnt_gmw_static","rnt_mg3_static","FIR_AirWeaponSystem_US","A3_Static_F_Sams_Radar_System_01","A3_Static_F_Sams_Radar_System_02","FIR_DDGLibertyUpgrade_F","bwa3_mrs120","bwa3_comp_ace","tsp_breach_frame","tsp_breach_popper","tsp_breach_stick"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"