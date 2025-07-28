class CfgHints {
    class GVAR(base) {
        tip = ECSTRING(main,url);
        //arguments[] = {};
        //image = "\z\ace\addons\common\data\logo_ace3_ca.paa";
    };

    class GVAR(handbuch) {
        category = "ttt_fieldmanual";

        class GVAR(example) {
            displayName = CSTRING(example_displayName);
            displayNameShort = CSTRING(example_displayNameShort);
            description = CSTRING(example_description);
            tip = CSTRING(example_tip);
            arguments[] = {};
            image = "";
        };
    };
};
