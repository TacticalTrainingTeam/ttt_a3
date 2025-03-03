//Custom Medical Supply Crates
class ACE_medicalSupplyCrate;
class Box_B_UAV_06_medical_F;

class GVAR(vba_crate): ACE_medicalSupplyCrate {
    displayName = CSTRING(vba);
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,100);
        MACRO_ADDITEM(ACE_quikclot,50);
        MACRO_ADDITEM(ACE_packingBandage,100);
        MACRO_ADDITEM(ACE_tourniquet,50);

        MACRO_ADDITEM(ACE_morphine,50);
        MACRO_ADDITEM(ACE_epinephrine,50);
        MACRO_ADDITEM(ACE_painkillers,10);

        MACRO_ADDITEM(ACE_SalineIV,30);
        MACRO_ADDITEM(ACE_SalineIV_500,15);
        MACRO_ADDITEM(ACE_SalineIV_250,15);

        MACRO_ADDITEM(ACE_personalAidKit,3);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_suture,40);
        MACRO_ADDITEM(ACE_bodyBag,3);
    };
};

class GVAR(vbt_crate): Box_B_UAV_06_medical_F {
    displayName = CSTRING(vbt);
    editorCategory = "EdCat_Supplies";
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;
    
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,50);
        MACRO_ADDITEM(ACE_packingBandage,50);
        MACRO_ADDITEM(ACE_tourniquet,12);

        MACRO_ADDITEM(ACE_painkillers,10);
    };
};