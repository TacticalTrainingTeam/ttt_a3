class CfgVehicles {
    class Tank_F;
    class Jbad_CraneCon: Tank_F { XEH_ENABLED; }; // "Contruction Crane" @Jbad

    class PowerLines_Small_base_F;
    class Jbad_Lamps_base_powerline: PowerLines_Small_base_F { XEH_ENABLED; }; // "" @Jbad

    class Land_Jbad_PowLineB: Jbad_Lamps_base_powerline { XEH_ENABLED; }; // "" @Jbad

    class Land_Jbad_PowLines_Conc2L;
    class Land_Jbad_Pole_withlight: Land_Jbad_PowLines_Conc2L { XEH_ENABLED; }; // "" @Jbad
    class Land_Jbad_Pole_Speaker: Land_Jbad_PowLines_Conc2L { XEH_ENABLED; }; // "" @Jbad
    class Land_Jbad_Pole_1: Jbad_Lamps_base_powerline { XEH_ENABLED; }; // "" @Jbad
};

