/*
    #############################################################
    ### Desert Rucksaecke
    #############################################################
*/

//Truppfuehrer Rucksack
class TTT_Backpack_Teamleader_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT Truppfuehrer Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_TF
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_TF
    };
};

//Grenadier Rucksack
class TTT_Backpack_Grenadier_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT Grenadier Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_GL
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_GL
    };
};

//MG-Assistent Rucksack
class TTT_Backpack_Assistant_MG_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT MG-Assistent Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_MG_ASSIST
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_MG_ASSIST
    };
};

//MG-Schuetze Rucksack
class TTT_Backpack_Soldier_MG_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT MG-Schuetze Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_MG
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_MG
    };

};

//LMG-Schuetze Rucksack
class TTT_Backpack_Soldier_LMG_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT LMG-Schuetze Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_LMG
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_LMG
    };
};

//AT-Schuetze Rucksack
class TTT_Backpack_Soldier_AT_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT AT-Schuetze Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_AT
    };
};

//Schuetze Rucksack
class TTT_Backpack_Soldier_US_Desert : B_AssaultPack_cbr {
    displayName = "TTT Schuetze Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_RIFLEMAN
    };
};

//Funker/FAC Rucksack
class TTT_Backpack_Operator_Radio_US_Desert : TFAR_rt1523g_big_rhs {
    displayName = "TTT Funker/FAC Rucksack (US Desert)";
    tf_range = 50000;
    class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_FAC
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_FAC
    };
};

//Pionier Rucksack
class TTT_Backpack_Pioneer_US_Desert : B_Carryall_cbr {
    displayName = "TTT Pionier Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_ENGINEER
    };
    class TransportMagazines {
        TRANSPORT_MAGAZINES_ENGINEER
    };
};

//Gefechtssanitaeter Rucksack
class TTT_Backpack_Medic_Combat_US_Desert : B_Kitbag_cbr {
    displayName = "TTT Gefechtssanitaeter Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_MEDIC
    };
};

//Feldarzt Rucksack
class TTT_Backpack_Medic_Doctor_US_Desert : B_Kitbag_cbr {
    displayName = "TTT Feldarzt Rucksack (US Desert)";
        class TransportItems {
        TRANSPORT_ITEMS_DOCTOR
    };
};

//Pilot Rucksack
class TTT_Backpack_Pilot_US_Desert : TFAR_rt1523g_big_rhs {
    displayName = "TTT Pilot Rucksack (US Desert)";
    tf_range = 50000;
    class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_PILOT
    };
};

//OPL Rucksack
class TTT_Backpack_Commander_US_Desert : TFAR_rt1523g_big_rhs {
    displayName = "TTT OPL Rucksack (US Desert)";
    tf_range = 50000;
    class TransportItems {
        TRANSPORT_ITEMS_MEDIC_STUFF
        TRANSPORT_ITEMS_CO
    };
};