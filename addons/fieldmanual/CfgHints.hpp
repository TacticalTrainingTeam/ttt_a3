class CfgHints {
    class GVAR(base) {
        tip = ECSTRING(main,url);
        arguments[] = {};
        image = QPATHTOEF(common,data\ttt_logo_co.paa);
    };


    class GVAR(handbuch) {
        displayName = ECSTRING(main,TacticalTrainingTeam);
        category = QGVAR(category);

        class GVAR(medical): GVAR(base) {
            logicalOrder = 1;
            arguments[] = {};
            displayName = CSTRING(medical_displayName);
            displayNameShort = CSTRING(medical_displayNameShort);
            description = CSTRING(medical_description);
            tip = CSTRING(medical_tip);
            image = "";
        };

        class GVAR(logistic): GVAR(base) {
            logicalOrder = 2;
            arguments[] = {};
            displayName = CSTRING(logistic_displayName);
            displayNameShort = CSTRING(logistic_displayNameShort);
            description = CSTRING(logistic_description);
            tip = CSTRING(logistic_tip);
            image = "";
        };

        class GVAR(engineer): GVAR(base) {
            logicalOrder = 3;
            arguments[] = {};
            displayName = CSTRING(engineer_displayName);
            displayNameShort = CSTRING(engineer_displayNameShort);
            description = CSTRING(engineer_description);
            tip = CSTRING(engineer_tip);
            image = "";
        };

        class GVAR(eod): GVAR(base) {
            logicalOrder = 4;
            arguments[] = {};
            displayName = CSTRING(eod_displayName);
            displayNameShort = CSTRING(eod_displayNameShort);
            description = CSTRING(eod_description);
            tip = CSTRING(eod_tip);
            image = "";
        };

        class GVAR(eod_extened): GVAR(base) {
            logicalOrder = 5;
            arguments[] = {};
            displayName = CSTRING(eod_extened_displayName);
            displayNameShort = CSTRING(eod_extened_displayNameShort);
            description = CSTRING(eod_extened_description);
            tip = CSTRING(eod_extened_tip);
            image = "";
        };
    };
};
