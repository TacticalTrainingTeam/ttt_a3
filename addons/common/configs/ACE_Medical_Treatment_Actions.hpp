class ACE_medical_treatment_actions {
    class PersonalAidKit;
    class TTT_PersonalAidKit: PersonalAidKit {
        displayName = CSTRING(PersonalAidKit_Action_DisplayName);
        displayNameProgress = CSTRING(PersonalAidKit_Action_Progress);
        condition = "true";
        items[] = {"TTT_personalAidKit"};
        treatmentTime = 60;
    };
};
