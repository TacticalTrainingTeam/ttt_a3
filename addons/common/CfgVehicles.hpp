class CfgVehicles {

    //Custom Units
    //Used for Unit-based Loadoutsystems like poppy or grad-loadout
    class B_Officer_F;
    class B_Medic_F;
    class B_Crew_F;
    class B_soldier_mine_F;
    class B_Soldier_Repair_F;
    class B_engineer_F;

    class TTT_B_Commanding_Officer_F : B_Officer_F {
        displayName = CSTRING(CO);
    };
    class TTT_B_Executive_Officer_F : B_Officer_F {
        displayName = CSTRING(XO);
    };
    class TTT_B_JTAC_F : B_Officer_F {
        displayName = CSTRING(JTAC);
    };
    class TTT_B_FO_F : B_Officer_F {
        displayName = CSTRING(FO);
    };
    class TTT_B_RadioOperator_F : B_Officer_F {
        displayName = CSTRING(RadioOperator);
    };

    class TTT_B_Soldier_Repair_TL_F : B_Soldier_Repair_F {
        displayName = CSTRING(LogTL);
    };

    class TTT_B_Medic_Doctor_F : B_Medic_F {
        displayName = CSTRING(Doc);
    };
    class TTT_B_Medic_CM_F : B_Medic_F {
        displayName = CSTRING(CM);
    };

    class TTT_B_engineer_TL_F: B_engineer_F{
        displayName = CSTRING(EngTL);
    };

    class TTT_B_Crew_TL_F : B_Crew_F {
        displayName = CSTRING(CrewTL);
    };

    class TTT_B_EOD_F: B_soldier_mine_F{
        displayName = CSTRING(EOD);
    };
    class TTT_B_EOD_TL_F: TTT_B_EOD_F{
        displayName = CSTRING(EODTL);
    };
};

