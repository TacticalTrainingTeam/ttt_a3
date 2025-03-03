class B_Officer_F;
class B_Engineer_F;
class B_Medic_F;
class B_Crew_F;
class B_soldier_mine_F;
class B_Soldier_Repair_F;

class TTT_B_Commanding_Officer_F : B_Officer_F {
    displayName = "Commanding Officer";
};
class TTT_B_Executive_Officer_F : B_Officer_F {
    displayName = "Executive Officer";
};
class TTT_B_JTAC_F : B_Officer_F {
    displayName = "JTAC";
};
class TTT_B_FO_F : B_Officer_F {
    displayName = "Forward Observer";
};
class TTT_B_RadioOperator_F : B_Officer_F {
    displayName = "Funker";
};

class TTT_B_Soldier_Repair_TL_F : B_Soldier_Repair_F {
    displayName = "Logistik Teamlead";
};

class TTT_B_Medic_Doctor_F : B_Medic_F {
    displayName = "Doktor";
};
class TTT_B_Medic_CM_F : B_Medic_F {
    displayName = "Combat Medic";
};

class TTT_B_Crew_TL_F : B_Crew_F {
    displayName = "Panzerkommandant";
};

class TTT_B_EOD_F: B_soldier_mine_F{
    displayName = "EOD";
};
class TTT_B_EOD_TL_F: TTT_B_EOD_F{
    displayName = "EOD Teamleader";
};
