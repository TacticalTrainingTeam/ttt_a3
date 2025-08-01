class CfgMagazines {
    class 12Rnd_230mm_rockets;
    class itc_land_m230hex_12rnd: 12Rnd_230mm_rockets {
        author = "Yax";
        initSpeed = 600;
        ammo = "itc_land_230mm_he";
        displayName = SUBCSTRING(M230_HE_NAME);
        displayNameShort = SUBCSTRING(M230_HE_SHORTNAME);
        itc_land_fuze = "mof35_mod2";
        itc_land_submunition = "itc_land_230mm_helper";
        itc_land_btabListFile = "itc_land_ballistics\tables\b_230\list.sqf";
    };
    class itc_land_m230pgm_12rnd: itc_land_m230hex_12rnd {
        itc_land_guidance[] = {"gps_inertial","itc_land_guidance_fnc_pgm230"};
        displayName = SUBCSTRING(M230_PGM_NAME);
        displayNameShort = SUBCSTRING(M230_PGM_SHORTNAME);
    };
};
