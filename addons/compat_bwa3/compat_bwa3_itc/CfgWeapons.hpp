class CfgWeapons {
    class CannonCore;
    class BWA3_RH155mm_AMOS: CannonCore {class Single1;};
    class itc_land_bwa3_weap_RH155: BWA3_RH155mm_AMOS {
        scope = 1;
        displayName = SUBCSTRING(RH155_52);
        autoReload = 0;
        modes[] = {"Single"};
        reloadTime = 1;
        magazineReloadTime = 6;    
        #include "CfgWeapons_Magazines.hpp"
        class Single: Single1 {
            displayName = "";
            artilleryCharge = 1;
            reloadTime = 6;            
        };
        class EventHandlers {
                class itc_land_veh_weapons {
                        fired = "call itc_land_veh_weapons_fnc_fired;";
                };
        };
    };
        

};