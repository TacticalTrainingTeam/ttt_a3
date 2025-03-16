class CfgWeapons {
    
    class ACE_flags_white;
    class ttt_signs_flags_logo: ACE_flags_white {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(flag_logo_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_sign_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_logo);
    };

    class ttt_signs_flags_white: ACE_flags_white {
        displayName = CSTRING(flag_white_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_weiss_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_white);
    };

    class ttt_signs_flags_silver: ACE_flags_white {
        displayName = CSTRING(flag_silver_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_silber_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_silver);
    };

    class ttt_signs_flags_plantium: ACE_flags_white {
        displayName = CSTRING(flag_platinum_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_platin_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_platinum);
    };

    class ACE_flags_blue;
    class ttt_signs_flags_blue: ACE_flags_blue {
        displayName = CSTRING(flag_blue_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_blau_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_blue);
    };


    class ACE_flags_orange;
    class ttt_signs_flags_bronze: ACE_flags_orange {
        displayName = CSTRING(flag_bronze_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_bronze_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_bronze);
    };
    class ttt_signs_flags_orange: ACE_flags_orange {
        displayName = CSTRING(flag_orange_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_orange_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_orange);
    };

    class ttt_signs_flags_gold: ACE_flags_orange {
        displayName = CSTRING(flag_gold_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_gold_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_gold);
    };

    class ACE_flags_yellow;
    class ttt_signs_flags_yellow: ACE_flags_yellow {
        displayName = CSTRING(flag_yellow_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_gelb_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_yellow);
    };

    class ACE_flags_black;
    class ttt_signs_flags_black: ACE_flags_black {
        displayName = CSTRING(flag_black_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_schwarz_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_black);
    };
    class ttt_signs_flags_grey: ACE_flags_black {
        displayName = CSTRING(flag_grey_displayName);
        //picture = QPATHTOF(data\pictures\grey_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_grau_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_grey);
    };

    class ACE_flags_red;
    class ttt_signs_flags_red: ACE_flags_red {
        displayName = CSTRING(flag_red_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_rot_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_red);
    };

    class ACE_flags_purple;
    class ttt_signs_flags_violet: ACE_flags_purple {
        displayName = CSTRING(flag_violet_displayName);
        //picture = QPATHTOF(data\pictures\orange_item.paa);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_violet_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_violet);
    };

    class ACE_flags_green;
    class ttt_signs_flags_green: ACE_flags_green {
        displayName = CSTRING(flag_green_displayName);

        ACE_flags_texture = QPATHTOEF(common,data\ttt_logo_gruen_co.paa);
        ACE_flags_carrier = QGVAR(flags_carrier_green);
    };
};