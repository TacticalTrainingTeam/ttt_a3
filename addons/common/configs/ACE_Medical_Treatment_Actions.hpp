class ACE_medical_treatment_actions {
    class PersonalAidKit;
    class TTT_PersonalAidKit: PersonalAidKit {
        displayName = CSTRING(PersonalAidKit_DisplayName);
        displayNameProgress = CSTRING(PersonalAidKit_Progress);
        condition = "true";
        items[] = {"TTT_personalAidKit"};
        treatmentTime = 60;
    };
};
