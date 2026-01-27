class ACE_medical_treatment_actions {
    class BasicBandage;
    class TTT_PersonalAidKit: BasicBandage {
        displayName = "TTT PAK Nutzen";//ToDo Localize
        displayNameProgress = "TTT PAK wird benutzt";//ToDo Localize
        icon = "";
        category = "advanced";
        condition = "true";//QUOTE(_patient call EFUNC(medical_status,isInStableCondition));
        items[] = {"TTT_personalAidKit"};
        treatmentLocations = QUOTE(ACE_medical_treatment_locationPAK);
        allowSelfTreatment = QUOTE(ACE_medical_treatment_allowSelfPAK);
        medicRequired = QUOTE(ACE_medical_treatment_medicPAK);
        treatmentTime = QUOTE(ACEFUNC(medical_treatment,getHealTime));
        callbackSuccess = QUOTE(ACEFUNC(medical_treatment,fullHeal));
        consumeItem = QUOTE(ACE_medical_treatment_consumePAK);
        animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "";
        animationMedicSelfProne = "";
        litter[] = {
            {"ACE_MedicalLitter_gloves"},
            {"ACE_MedicalLitter_clean"},
            {
                {"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"},
                {"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}
            }
        };
    };
};
