//Custom Medical Supply Crates
class ACE_medicalSupplyCrate;
class Box_B_UAV_06_medical_F;

class GVAR(vbt_crate): ACE_medicalSupplyCrate {
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    displayName = CSTRING(vbt);
    hiddenSelectionTextures[] = {}; //ToDo Texture

    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,100);
        MACRO_ADDITEM(ACE_packingBandage,80);
        MACRO_ADDITEM(ACE_quikclot,15);
        MACRO_ADDITEM(ACE_tourniquet,12);

        MACRO_ADDITEM(ACE_painkillers,10);
    };
};

class GVAR(vbs_crate): GVAR(vbt_crate) {
    displayName = CSTRING(vbs);
    hiddenSelectionTextures[] = {}; //ToDo Texture

    //ToDo Items
};

class GVAR(vba_crate): GVAR(vbs_crate) {
    displayName = CSTRING(vba);
    hiddenSelectionTextures[] = {}; //ToDo Texture

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
        MACRO_ADDITEM(ACE_suture,50);
        MACRO_ADDITEM(ACE_bodyBag,3);

        MACRO_ADDITEM(ace_flags_blue,1);
    };
};
