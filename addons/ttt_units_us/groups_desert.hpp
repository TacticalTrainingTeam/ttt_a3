/*
#############################################################
### US Desert
#############################################################
*/
class TTT_Groups_US_Desert {
    name = "Desert";

    //Trupp Gelb
    class TTT_Gelb_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Gelb US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Colonel;
            side = 1;
            vehicle = "TTT_Yellow_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Major;
            vehicle = "TTT_Yellow_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Captain;
            vehicle = "TTT_Yellow_3_US_Desert";
        };
    };

    //Trupp Grau
    class TTT_Grau_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Grau US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Grey_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Grey_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Grey_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Grey_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Grey_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Grey_6_US_Desert";
        };
    };

    //Trupp Gold
    class TTT_Gold_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Gold US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Gold_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Gold_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Gold_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Gold_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Gold_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Gold_6_US_Desert";
        };
    };

    //Trupp Gruen
    class TTT_Gruen_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Gruen US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Green_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Green_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Green_3_US_Desert";
        };
    };

    //Trupp Braun
    class TTT_Braun_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Braun US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Brown_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Brown_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Brown_3_US_Desert";
        };
    };

    //Trupp Schwarz
    class TTT_Schwarz_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Schwarz US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Black_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Black_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Black_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Black_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Black_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Black_6_US_Desert";
        };
    };

    //Trupp Rot
    class TTT_Rot_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Rot US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Red_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Red_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Red_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Red_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Red_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Red_6_US_Desert";
        };
    };

    //Trupp Bronze
    class TTT_Bronze_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Bronze US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Bronze_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Bronze_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Bronze_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Bronze_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Bronze_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Bronze_6_US_Desert";
        };
    };

    //Trupp Blau
    class TTT_Blau_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Blau US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Blue_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Blue_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Blue_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Blue_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Blue_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Blue_6_US_Desert";
        };
    };

    //Trupp Violett
    class TTT_Violett_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Violett US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Violet_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Violet_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Violet_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Violet_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Violet_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Violet_6_US_Desert";
        };
    };

    //Trupp Weiss
    class TTT_Weiss_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Weiss US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_White_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_White_2_US_Desert";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_White_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_White_4_US_Desert";
        };
    };

    //Trupp Platin
    class TTT_Platin_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Platin US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Platinum_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Platinum_2_US_Desert";
        };
    };

    //Trupp Silber
    class TTT_Silber_US_Desert {
        faction = "TTT_faction_us";
        name = "Trupp Silber US Desert";
        icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Silver_1_US_Desert";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Silver_2_US_Desert";
        };
        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Silver_3_US_Desert";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Silver_4_US_Desert";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Silver_5_US_Desert";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Silver_6_US_Desert";
        };
    };
};