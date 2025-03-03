class CfgVehicles {
    class ACE_medicalSupplyCrate_advanced;
    class ACE_medicalSupplyCrate;
    class Box_B_UAV_06_medical_F;

    class GVAR(vba): ACE_medicalSupplyCrate_advanced {
        displayName = CSTRING(vba);
        author = ECSTRING(main,TacticalTrainingTeam);
        editorSubcategory = QEGVAR(main,ttt);

        class TransportItems {
            MACRO_ADDITEM(ACE_elasticBandage,100);
            MACRO_ADDITEM(ACE_quikclot,50);
            MACRO_ADDITEM(ACE_packingBandage,100);
            MACRO_ADDITEM(ACE_tourniquet,50);

            MACRO_ADDITEM(ACE_morphine,50);
            MACRO_ADDITEM(ACE_epinephrine,50);
            MACRO_ADDITEM(ACE_painkillers,10);

            MACRO_ADDITEM(ACE_SalineIV,20);
            MACRO_ADDITEM(ACE_SalineIV_500,10);
            MACRO_ADDITEM(ACE_SalineIV_250,10);

            MACRO_ADDITEM(ACE_personalAidKit,3);
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_suture,40);
            MACRO_ADDITEM(ACE_bodyBag,3);
        };
    };

    class GVAR(vbs): ACE_medicalSupplyCrate {
        displayName = CSTRING(vbs);
        author = ECSTRING(main,TacticalTrainingTeam);
        editorSubcategory = QEGVAR(main,ttt);

        class TransportItems {
            MACRO_ADDITEM(ACE_elasticBandage,50);
            MACRO_ADDITEM(ACE_quikclot,30);
            MACRO_ADDITEM(ACE_packingBandage,50);
            MACRO_ADDITEM(ACE_tourniquet,18);

            MACRO_ADDITEM(ACE_morphine,25);
            MACRO_ADDITEM(ACE_epinephrine,25);
            MACRO_ADDITEM(ACE_painkillers,10);

            MACRO_ADDITEM(ACE_SalineIV,20);
            MACRO_ADDITEM(ACE_SalineIV_500,10);
            MACRO_ADDITEM(ACE_SalineIV_250,10);

            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_suture,40);
        };
    };

    class GVAR(vbt): ACE_medicalSupplyCrate {
        displayName = CSTRING(vbt);
        author = ECSTRING(main,TacticalTrainingTeam);
        editorSubcategory = QEGVAR(main,ttt);

        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,50);
            MACRO_ADDITEM(ACE_packingBandage,50);
            MACRO_ADDITEM(ACE_tourniquet,12);

            MACRO_ADDITEM(ACE_painkillers,10);
        };
    };
};