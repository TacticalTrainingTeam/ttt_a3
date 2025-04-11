class CfgMagazines {
    class itc_land_g155hex;
    class itc_land_pzh2000hex: itc_land_g155hex {
        author = "Toadball";
        displayName = SUBCSTRING(DM121_Name);
        ammo = "itc_land_155mm";
        displayNameShort = SUBCSTRING(DM121_ShortName);
        itc_land_charge_format = "itc_land_pzh2000hex_chg%1";
        itc_land_btabListFile = QPATHTOEF(compat_bwa3,compat_bwa3_itc\ballistics\tables\pzh2000\list.sqf);
    };
    class itc_land_pzh2000hex_chg1: itc_land_pzh2000hex { initSpeed = 92; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000hex_chg2: itc_land_pzh2000hex { initSpeed = 170; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000hex_chg3: itc_land_pzh2000hex { initSpeed = 255; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000hex_chg4: itc_land_pzh2000hex { initSpeed = 340; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000hex_chg5: itc_land_pzh2000hex { initSpeed = 425; itc_land_CountInAH = 0;  };

    class itc_land_g155smo;
    class itc_land_pzh2000smo: itc_land_g155smo {
        author = "Toadball";
        displayName = SUBCSTRING(DM125_Name);
        displayNameShort = SUBCSTRING(DM125_ShortName);
        itc_land_charge_format = "itc_land_pzh2000smo_chg%1";
        itc_land_timeModifier = -1.5;
        itc_land_btabListFile = QPATHTOEF(compat_bwa3,compat_bwa3_itc\ballistics\tables\pzh2000\list.sqf);
    };
    class itc_land_pzh2000smo_chg1: itc_land_pzh2000smo { initSpeed = 92; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000smo_chg2: itc_land_pzh2000smo { initSpeed = 170; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000smo_chg3: itc_land_pzh2000smo { initSpeed = 255; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000smo_chg4: itc_land_pzh2000smo { initSpeed = 340; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000smo_chg5: itc_land_pzh2000smo { initSpeed = 425; itc_land_CountInAH = 0;  };

    class itc_land_g155mat;
    class itc_land_pzh2000mat: itc_land_g155mat {
        author = "Toadball";
        displayName = SUBCSTRING(M718_Name);
        displayNameShort = SUBCSTRING(M718_ShortName);
        itc_land_charge_format = "itc_land_pzh2000mat_chg%1";
        itc_land_timeModifier = -1.2;
        itc_land_btabListFile = QPATHTOEF(compat_bwa3,compat_bwa3_itc\ballistics\tables\pzh2000\list.sqf);
    };
    class itc_land_pzh2000mat_chg1: itc_land_pzh2000mat { initSpeed = 92; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000mat_chg2: itc_land_pzh2000mat { initSpeed = 170; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000mat_chg3: itc_land_pzh2000mat { initSpeed = 255; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000mat_chg4: itc_land_pzh2000mat { initSpeed = 340; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000mat_chg5: itc_land_pzh2000mat { initSpeed = 425; itc_land_CountInAH = 0;  };

    class itc_land_g155pgm;
    class itc_land_pzh2000pgm: itc_land_g155pgm {
        author = "Toadball";
        displayName = SUBCSTRING(DM702_pgm_Name);
        displayNameShort = SUBCSTRING(DM702_pgm_ShortName);
        itc_land_charge_format = "itc_land_pzh2000pgm_chg%1";
        itc_land_btabListFile = QPATHTOEF(compat_bwa3,compat_bwa3_itc\ballistics\tables\pzh2000\list.sqf);
    };
    class itc_land_pzh2000pgm_chg1: itc_land_pzh2000pgm { initSpeed = 92; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000pgm_chg2: itc_land_pzh2000pgm { initSpeed = 170; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000pgm_chg3: itc_land_pzh2000pgm { initSpeed = 255; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000pgm_chg4: itc_land_pzh2000pgm { initSpeed = 340; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000pgm_chg5: itc_land_pzh2000pgm { initSpeed = 425; itc_land_CountInAH = 0;  };

    class itc_land_g155lgm;
    class itc_land_pzh2000lgm: itc_land_g155lgm {
        author = "Toadball";
        displayName = SUBCSTRING(DM702_lgm_Name);
        displayNameShort = SUBCSTRING(DM702_lgm_ShortName);
        itc_land_charge_format = "itc_land_pzh2000lgm_chg%1";
        itc_land_btabListFile = QPATHTOEF(compat_bwa3,compat_bwa3_itc\ballistics\tables\pzh2000\list.sqf);
    };
    class itc_land_pzh2000lgm_chg1: itc_land_pzh2000lgm { initSpeed = 92; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000lgm_chg2: itc_land_pzh2000lgm { initSpeed = 170; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000lgm_chg3: itc_land_pzh2000lgm { initSpeed = 255; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000lgm_chg4: itc_land_pzh2000lgm { initSpeed = 340; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000lgm_chg5: itc_land_pzh2000lgm { initSpeed = 425; itc_land_CountInAH = 0;  };

    class itc_land_g155ill;
    class itc_land_pzh2000ill: itc_land_g155ill {
        author = "Toadball";
        displayName = SUBCSTRING(DM106_Name);
        displayNameShort = SUBCSTRING(DM106_ShortName);
        itc_land_charge_format = "itc_land_pzh2000ill_chg%1";
        itc_land_btabListFile = QPATHTOEF(compat_bwa3,compat_bwa3_itc\ballistics\tables\pzh2000\list.sqf);
    };
    class itc_land_pzh2000ill_chg1: itc_land_pzh2000ill { initSpeed = 92; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000ill_chg2: itc_land_pzh2000ill { initSpeed = 170; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000ill_chg3: itc_land_pzh2000ill { initSpeed = 255; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000ill_chg4: itc_land_pzh2000ill { initSpeed = 340; itc_land_CountInAH = 0;  };
    class itc_land_pzh2000ill_chg5: itc_land_pzh2000ill { initSpeed = 425; itc_land_CountInAH = 0;  };
};