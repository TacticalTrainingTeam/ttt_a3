/*
#############################################################
### Tropentarn
#############################################################
*/
class TTT_Groups_BW_Tropentarn {
    name = "Tropentarn";

    //Trupp Gelb
    class TTT_Yellow_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Yellow";
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Colonel;
            side = 1;
            vehicle = "TTT_Yellow_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Major;
            vehicle = "TTT_Yellow_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Captain;
            vehicle = "TTT_Yellow_3_BW_Tropentarn";
        };
    };

    //Trupp Grau
    class TTT_Grey_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Grey";
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Grey_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Grey_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Grey_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Grey_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Grey_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Grey_6_BW_Tropentarn";
        };
    };

    //Trupp Gold
    class TTT_Gold_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Gold";
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Gold_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Gold_2_BW_Tropentarn";
        };
        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Gold_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Gold_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Gold_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Gold_6_BW_Tropentarn";
        };
    };

    //Trupp Gruen
    class TTT_Green_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Green";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Green_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Green_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Green_3_BW_Tropentarn";
        };
    };

    //Trupp Braun
    class TTT_Brown_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Brown";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Brown_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Brown_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Brown_3_BW_Tropentarn";
        };
    };

    //Trupp Schwarz
    class TTT_Black_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Black";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Black_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Black_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Black_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Black_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Black_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Black_6_BW_Tropentarn";
        };
    };

    //Trupp Rot
    class TTT_Red_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Red";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Red_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Red_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Red_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Red_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Red_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Red_6_BW_Tropentarn";
        };
    };

    //Trupp Blau
    class TTT_Blue_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Blue";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Blue_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Blue_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Blue_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Blue_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Blue_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Blue_6_BW_Tropentarn";
        };
    };

    //Trupp Violett
    class TTT_Violet_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Violet";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Violet_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Violet_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Violet_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Violet_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Violet_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Violet_6_BW_Tropentarn";
        };
    };

    //Trupp Weiss
    class TTT_White_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_White";
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_White_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_White_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_White_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_White_4_BW_Tropentarn";
        };
    };

    //Trupp Bronze
    class TTT_Bronze_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Bronze";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Bronze_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Bronze_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Bronze_3_BW_Tropentarn";
        };
        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Bronze_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Bronze_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Bronze_6_BW_Tropentarn";
        };
    };

    //Trupp Platin
    class TTT_Platinum_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "STR_TTT_Groups_Platinum";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Platinum_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Platinum_2_BW_Tropentarn";
        };
    };

    //Trupp Silber
    class TTT_Silver_BW_Tropentarn {
        faction = "TTT_faction_BW";
        name = "$STR_TTT_Groups_Silver";
        icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
        side = 1;

        class Unit0 {
            position[] = {0, 0, 0};
            rank = Major;
            side = 1;
            vehicle = "TTT_Silver_1_BW_Tropentarn";
        };

        class Unit1 : Unit0 {
            position[] = {0, -5, 0};
            rank = Captain;
            vehicle = "TTT_Silver_2_BW_Tropentarn";
        };

        class Unit2 : Unit0 {
            position[] = {0, -10, 0};
            rank = Lieutenant;
            vehicle = "TTT_Silver_3_BW_Tropentarn";
        };

        class Unit3 : Unit0 {
            position[] = {0, -15, 0};
            rank = Sergeant;
            vehicle = "TTT_Silver_4_BW_Tropentarn";
        };

        class Unit4 : Unit0 {
            position[] = {0, -20, 0};
            rank = Corporal;
            vehicle = "TTT_Silver_5_BW_Tropentarn";
        };

        class Unit5 : Unit0 {
            position[] = {0, -25, 0};
            rank = Private;
            vehicle = "TTT_Silver_6_BW_Tropentarn";
        };
    };
};