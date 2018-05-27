class TTT_Sign_Base : NonStrategic {
    mapSize = 0.83;
    author = "$STR_Tactical_Training_Team";
    scope = 0;
    scopeCurator = 0;
    displayName = "TTT Schild Base";
    model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
    icon = "iconObject_4x1";
    vehicleClass = "ttt_signs";
    destrType = "DestructWall";
    hiddenSelections[] = {"camo"};
};

class TTT_Sign_Blue : TTT_Sign_Base {
    scope = 2;
    scopeCurator = 2;
    displayName = "TTT Schild Blau";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_blau_co.paa"};
};

class TTT_Sign_Bronze : TTT_Sign_Blue {
    displayName = "TTT Schild Bronze";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_bronze_co.paa"};
};

class TTT_Sign_Brown : TTT_Sign_Blue {
    displayName = "TTT Schild Braun";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_braun_co.paa"};
};

class TTT_Sign_Yellow : TTT_Sign_Blue {
    displayName = "TTT Schild Gelb";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_gelb_co.paa"};
};

class TTT_Sign_Gold : TTT_Sign_Blue {
    displayName = "TTT Schild Gold";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_gold_co.paa"};
};

class TTT_Sign_Grey : TTT_Sign_Blue {
    displayName = "TTT Schild Grau";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_grau_co.paa"};
};

class TTT_Sign_Green : TTT_Sign_Blue {
    displayName = "TTT Schild Gruen";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_gruen_co.paa"};
};

class TTT_Sign_Platinum : TTT_Sign_Blue {
    displayName = "TTT Schild Platin";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_platin_co.paa"};
};

class TTT_Sign_Red : TTT_Sign_Blue {
    displayName = "TTT Schild Rot";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_rot_co.paa"};
};

class TTT_Sign_Black : TTT_Sign_Blue {
    displayName = "TTT Schild Schwarz";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_schwarz_co.paa"};
};

class TTT_Sign_Silver : TTT_Sign_Blue {
    displayName = "TTT Schild Silber";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_silber_co.paa"};
};

class TTT_Sign_Violet : TTT_Sign_Blue {
    displayName = "TTT Schild Violett";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_violett_co.paa"};
};

class TTT_Sign_White : TTT_Sign_Blue {
    displayName = "TTT Schild Weiss";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_weiss_co.paa"};
};

class TTT_Sign_Logo : TTT_Sign_Blue {
    displayName = "TTT Schild Logo";
    hiddenSelectionsTextures[] = {"\ttt_a3\addons\ttt_signs\data\ttt_logo_sign_co.paa"};
};