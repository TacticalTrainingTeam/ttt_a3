class CfgUnitInsignia {
    class TTT_Blue {
        displayName = CSTRING(blue_large_displayName);
        author = "Andx";
        texture = QPATHTOEF(common,data\ttt_logo_blau_co.paa);
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
    };
    class TTT_Brown: TTT_Blue {
        displayName = CSTRING(brown_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_braun_co.paa);
    };
    class TTT_Yellow: TTT_Blue {
        displayName = CSTRING(yellow_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_gelb_co.paa);
    };
    class TTT_Red: TTT_Blue {
        displayName = CSTRING(red_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_rot_co.paa);
    };
    class TTT_Green: TTT_Blue {
        displayName = CSTRING(green_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_gruen_co.paa);
    };
    class TTT_Black: TTT_Blue {
        displayName = CSTRING(black_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_schwarz_co.paa);
    };
    class TTT_Orange: TTT_Blue {
        displayName = CSTRING(orange_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_orange_co.paa);
    };
    class TTT_Logo: TTT_Blue {
        displayName = CSTRING(logo_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_sign_co.paa);
    };
    class TTT_Platinum: TTT_Blue {
        displayName = CSTRING(platinum_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_platin_co.paa);
    };
    class TTT_White: TTT_Blue {
        displayName = CSTRING(white_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_weiss_co.paa);
    };
    class TTT_Silver: TTT_Blue {
        displayName = CSTRING(silver_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_silber_co.paa);
    };
    class TTT_Bronze: TTT_Blue {
        displayName = CSTRING(bronze_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_bronze_co.paa);
    };
    class TTT_Violet: TTT_Blue {
        displayName = CSTRING(violet_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_violet_co.paa);
    };
    class TTT_Grau: TTT_Blue {
        displayName = CSTRING(grau_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_grau_co.paa);
    };
    class TTT_Gold: TTT_Blue {
        displayName = CSTRING(gold_large_displayName);
        texture = QPATHTOEF(common,data\ttt_logo_gold_co.paa);
    };

    //Other
    class TTT_red_crystal_dark {
        displayName = CSTRING(red_crystal_displayName);
        author = "Andx";
        texture = QPATHTOF(data\red_crystal_dark.paa);
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
    };

    class TTT_EOD: TTT_red_crystal_dark {
        displayName = CSTRING(eod_displayName);
        texture = QPATHTOF(data\eod_kontur.paa);
    };


    //Emblems
    class TTT_blue_emblem {
        displayName = CSTRING(blue_emblem_displayName);
        author = "Andx";
        texture = QPATHTOF(data\blau.paa);
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
    };
    class TTT_white_emblem: TTT_blue_emblem {
        displayName = CSTRING(white_emblem_displayName);
        texture = QPATHTOF(data\weiss.paa);
    };
    class TTT_platinum_emblem: TTT_blue_emblem {
        displayName = CSTRING(platinum_emblem_displayName);
        texture = QPATHTOF(data\platinum.paa);
    };
    class TTT_black_emblem: TTT_blue_emblem {
        displayName = CSTRING(black_emblem_displayName);
        texture = QPATHTOF(data\schwarz.paa);
    };
    class TTT_silver_emblem: TTT_blue_emblem {
        displayName = CSTRING(silver_emblem_displayName);
        texture = QPATHTOF(data\silber.paa);
    };
    class TTT_violet_emblem: TTT_blue_emblem {
        displayName = CSTRING(violet_emblem_displayName);
        author = "Andx";
        texture = QPATHTOF(data\violet.paa);
    };
    class TTT_brown_emblem: TTT_blue_emblem {
        displayName = CSTRING(brown_emblem_displayName);
        texture = QPATHTOF(data\braun.paa);
    };
    class TTT_yellow_emblem: TTT_blue_emblem {
        displayName = CSTRING(yellow_emblem_displayName);
        texture = QPATHTOF(data\gelb.paa);
    };
    class TTT_red_emblem: TTT_blue_emblem {
        displayName = CSTRING(red_emblem_displayName);
        texture = QPATHTOF(data\rot.paa);
    };
    class TTT_green_emblem: TTT_blue_emblem {
        displayName = CSTRING(green_emblem_displayName);
        texture = QPATHTOF(data\gruen.paa);
    };
    class TTT_orange_emblem: TTT_blue_emblem {
        displayName = CSTRING(orange_emblem_displayName);
        texture = QPATHTOF(data\orange.paa);
    };
    class TTT_bronze_emblem: TTT_blue_emblem {
        displayName = CSTRING(bronze_emblem_displayName);
        texture = QPATHTOF(data\bronze.paa);
    };
    class TTT_grau_emblem: TTT_blue_emblem {
        displayName = CSTRING(grau_emblem_displayName);
        texture = QPATHTOF(data\grau.paa);
    };
    class TTT_gold_emblem: TTT_blue_emblem {
        displayName = CSTRING(gold_emblem_displayName);
        texture = QPATHTOF(data\gold.paa);
    };
};