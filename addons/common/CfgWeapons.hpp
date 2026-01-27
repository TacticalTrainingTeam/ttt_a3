class CfgWeapons {
    class ACE_SpraypaintYellow;
    class GVAR(spraypaintMemes): ACE_SpraypaintYellow {
        author = "Andx";
        displayname = CSTRING(spraypaintMemes_displayName);
    };

    class ACE_personalAidKit;
    class TTT_personalAidKit: ACE_personalAidKit {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(personalAidKit_displayName);
    };
};
