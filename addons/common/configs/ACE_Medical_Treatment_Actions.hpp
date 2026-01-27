class ACE_medical_treatment_actions {
    class PersonalAidKit;
    class TTT_PersonalAidKit: PersonalAidKit {
        displayName = "TTT PAK Nutzen";//ToDo Localize
        displayNameProgress = "TTT PAK wird benutzt";//ToDo Localize
        condition = "true";//QUOTE(_patient call EFUNC(medical_status,isInStableCondition));
        items[] = {"TTT_personalAidKit"};
    };
};
