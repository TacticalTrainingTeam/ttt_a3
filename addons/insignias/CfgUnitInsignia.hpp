class CfgUnitInsignia {
    class TTT_Black {
        author = "Andx";
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
        displayName = CSTRING(black_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_schwarz_co.paa);
    };
    class TTT_Blue: TTT_Black {
        displayName = CSTRING(blue_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_blau_co.paa);
    };
    class TTT_Bronze: TTT_Black {
        displayName = CSTRING(bronze_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_bronze_co.paa);
    };
    class TTT_Brown: TTT_Black {
        displayName = CSTRING(brown_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_braun_co.paa);
    };
    class TTT_Gold: TTT_Black {
        displayName = CSTRING(gold_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_gold_co.paa);
    };
    class TTT_Grau: TTT_Black {
        displayName = CSTRING(grau_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_grau_co.paa);
    };
    class TTT_Green: TTT_Black {
        displayName = CSTRING(green_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_gruen_co.paa);
    };
    class TTT_Logo: TTT_Black {
        displayName = CSTRING(logo_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_sign_co.paa);
    };
    class TTT_Orange: TTT_Black {
        displayName = CSTRING(orange_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_orange_co.paa);
    };
    class TTT_Platinum: TTT_Black {
        displayName = CSTRING(platinum_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_platin_co.paa);
    };
    class TTT_Red: TTT_Black {
        displayName = CSTRING(red_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_rot_co.paa);
    };
    class TTT_Silver: TTT_Black {
        displayName = CSTRING(silver_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_silber_co.paa);
    };
    class TTT_Violet: TTT_Black {
        displayName = CSTRING(violet_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_violet_co.paa);
    };
    class TTT_White: TTT_Black {
        displayName = CSTRING(white_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_weiss_co.paa);
    };
    class TTT_Yellow: TTT_Black {
        displayName = CSTRING(yellow_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_gelb_co.paa);
    };
    
    //Emblems
    class TTT_black_emblem {
        author = "Andx";
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
        displayName = CSTRING(black_emblem_displayName);
        texture = QPATHTOF(data\schwarz_ca.paa);
    };
    class TTT_blue_emblem: TTT_black_emblem {
        displayName = CSTRING(blue_emblem_displayName);
        texture = QPATHTOF(data\blau_ca.paa);
    };
    class TTT_bronze_emblem: TTT_black_emblem {
        displayName = CSTRING(bronze_emblem_displayName);
        texture = QPATHTOF(data\bronze_ca.paa);
    };
    class TTT_brown_emblem: TTT_black_emblem {
        displayName = CSTRING(brown_emblem_displayName);
        texture = QPATHTOF(data\braun_ca.paa);
    };
    class TTT_green_emblem: TTT_black_emblem {
        displayName = CSTRING(green_emblem_displayName);
        texture = QPATHTOF(data\gruen_ca.paa);
    };
    class TTT_grau_emblem: TTT_black_emblem {
        displayName = CSTRING(grau_emblem_displayName);
        texture = QPATHTOF(data\grau_ca.paa);
    };
    class TTT_orange_emblem: TTT_black_emblem {
        displayName = CSTRING(orange_emblem_displayName);
        texture = QPATHTOF(data\orange_ca.paa);
    };
    class TTT_platinum_emblem: TTT_black_emblem {
        displayName = CSTRING(platinum_emblem_displayName);
        texture = QPATHTOF(data\platinum_ca.paa);
    };
    class TTT_red_emblem: TTT_black_emblem {
        displayName = CSTRING(red_emblem_displayName);
        texture = QPATHTOF(data\rot_ca.paa);
    };
    class TTT_silver_emblem: TTT_black_emblem {
        displayName = CSTRING(silver_emblem_displayName);
        texture = QPATHTOF(data\silber_ca.paa);
    };
    class TTT_violet_emblem: TTT_black_emblem {
        displayName = CSTRING(violet_emblem_displayName);
        texture = QPATHTOF(data\violet_ca.paa);
    };
    class TTT_white_emblem: TTT_black_emblem {
        displayName = CSTRING(white_emblem_displayName);
        texture = QPATHTOF(data\weiss_ca.paa);
    };
    class TTT_yellow_emblem: TTT_black_emblem {
        displayName = CSTRING(yellow_emblem_displayName);
        texture = QPATHTOF(data\gelb_ca.paa);
    };

    //Other
    class TTT_EOD {
        displayName = CSTRING(eod_displayName);
        texture = QPATHTOF(data\eod_kontur_ca.paa);
    };
    class TTT_red_crystal_dark: TTT_EOD {
        displayName = CSTRING(red_crystal_displayName);
        texture = QPATHTOF(data\red_crystal_dark_co.paa);
    };
};