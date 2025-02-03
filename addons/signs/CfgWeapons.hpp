class CfgWeapons {
    
    class ACE_flags_white;
    class ttt_signs_flags_logo: ACE_flags_white {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(flag_logo_displayName);
        picture = QPATHTOF(data\pictures\logo_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_sign_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_logo);
    };

    class ttt_signs_flags_white: ttt_signs_flags_logo {
        displayName = CSTRING(flag_white_displayName);
        picture = QPATHTOF(data\pictures\white_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_weiss_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_white);
    };

    class ttt_signs_flags_blue: ttt_signs_flags_logo {
        displayName = CSTRING(flag_blue_displayName);
        picture = QPATHTOF(data\pictures\blue_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_blau_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_blue);
    };

    class ttt_signs_flags_silver: ttt_signs_flags_logo {
        displayName = CSTRING(flag_silver_displayName);
        picture = QPATHTOF(data\pictures\silver_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_silber_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_silver);
    };

    class ttt_signs_flags_bronze: ttt_signs_flags_logo {
        displayName = CSTRING(flag_bronze_displayName);
        picture = QPATHTOF(data\pictures\silver_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_bronze_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_bronze);
    };

    class ttt_signs_flags_gold: ttt_signs_flags_logo {
        displayName = CSTRING(flag_gold_displayName);
        picture = QPATHTOF(data\pictures\gold_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_gold_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_gold);
    };

    class ttt_signs_flags_yellow: ttt_signs_flags_logo {
        displayName = CSTRING(flag_yellow_displayName);
        picture = QPATHTOF(data\pictures\yellow_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_gelb_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_yellow);
    };

    class ttt_signs_flags_black: ttt_signs_flags_logo {
        displayName = CSTRING(flag_black_displayName);
        picture = QPATHTOF(data\pictures\black_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_schwarz_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_black);
    };

    class ttt_signs_flags_red: ttt_signs_flags_logo {
        displayName = CSTRING(flag_red_displayName);
        picture = QPATHTOF(data\pictures\red_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_rot_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_red);
    };

    class ttt_signs_flags_green: ttt_signs_flags_logo {
        displayName = CSTRING(flag_green_displayName);
        picture = QPATHTOF(data\pictures\green_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_gruen_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_green);
    };

    class ttt_signs_flags_orange: ttt_signs_flags_logo {
        displayName = CSTRING(flag_orange_displayName);
        picture = QPATHTOF(data\pictures\orange_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_orange_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_orange);
    };

    class ttt_signs_flags_violet: ttt_signs_flags_logo {
        displayName = CSTRING(flag_violet_displayName);
        picture = QPATHTOF(data\pictures\orange_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_violet_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_violet);
    };

    class ttt_signs_flags_grey: ttt_signs_flags_logo {
        displayName = CSTRING(flag_grey_displayName);
        picture = QPATHTOF(data\pictures\grau_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_grey_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_grey);
    };
};