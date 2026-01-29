class CfgVehicles {

    #include "configs\crates_medic.hpp"
    #include "configs\crates_engineer.hpp"
    #include "configs\crates_other.hpp"

    class ACE_personalAidKitItem;
    class TTT_personalAidKitItem: ACE_personalAidKitItem {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(personalAidKit_displayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(TTT_personalAidKit,1);
        };
    };
};
