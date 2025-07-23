class CfgWeapons {
    class ace_flags_white;
    class GVAR(weiss): ace_flags_white {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(weiss); // Item/Flag name

        ace_flags_texture = QPATHTOF(data\ace_flags_weiss_ca.paa); // Path to the flag texture
        ace_flags_carrier = QGVAR(carrier_weiss); // Classname of the corresponding vehicle that gets placed.
    };
    class GVAR(silber): GVAR(weiss) {
        displayName = CSTRING(silber);
        ace_flags_texture = QPATHTOF(data\ace_flags_silber_ca.paa);
        ace_flags_carrier = QGVAR(carrier_silber);
    };
    class GVAR(platin): GVAR(weiss) {
        displayName = CSTRING(platin);
        ace_flags_texture = QPATHTOF(data\ace_flags_platin_ca.paa);
        ace_flags_carrier = QGVAR(carrier_platin);
    };
    class GVAR(logo): GVAR(weiss) {
        displayName = CSTRING(logo);
        ace_flags_texture = QPATHTOF(data\ace_flags_logo_ca.paa);
        ace_flags_carrier = QGVAR(carrier_logo);
    };
    class GVAR(grau): GVAR(weiss) {
        displayName = CSTRING(grau);
        ace_flags_texture = QPATHTOF(data\ace_flags_grau_ca.paa);
        ace_flags_carrier = QGVAR(carrier_grau);
    };

    class ace_flags_black;
    class GVAR(schwarz): ace_flags_black {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(schwarz);

        ace_flags_texture = QPATHTOF(data\ace_flags_schwarz_ca.paa);
        ace_flags_carrier = QGVAR(carrier_schwarz);
    };

    class ace_flags_blue;
    class GVAR(blau): ace_flags_blue {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(blau);

        ace_flags_texture = QPATHTOF(data\ace_flags_blau_ca.paa);
        ace_flags_carrier = QGVAR(carrier_blau);
    };

    class ace_flags_red;
    class GVAR(rot): ace_flags_red {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(rot);

        ace_flags_texture = QPATHTOF(data\ace_flags_rot_ca.paa);
        ace_flags_carrier = QGVAR(carrier_rot);
    };
    class GVAR(braun): GVAR(rot) {
        displayName = CSTRING(braun);

        ace_flags_texture = QPATHTOF(data\ace_flags_braun_ca.paa);
        ace_flags_carrier = QGVAR(carrier_braun);
    };

    class ace_flags_green;
    class GVAR(grun): ace_flags_green {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(grun);

        ace_flags_texture = QPATHTOF(data\ace_flags_grun_ca.paa);
        ace_flags_carrier = QGVAR(carrier_grun);
    };

    class ace_flags_yellow;
    class GVAR(gelb): ace_flags_yellow {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(gelb);

        ace_flags_texture = QPATHTOF(data\ace_flags_gelb_ca.paa);
        ace_flags_carrier = QGVAR(carrier_gelb);
    };

    class ace_flags_purple;
    class GVAR(violett): ace_flags_purple {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(violett);

        ace_flags_texture = QPATHTOF(data\ace_flags_violett_ca.paa);
        ace_flags_carrier = QGVAR(carrier_violett);
    };

    class ace_flags_orange;
    class GVAR(orange): ace_flags_orange {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(orange);

        ace_flags_texture = QPATHTOF(data\ace_flags_orange_ca.paa);
        ace_flags_carrier = QGVAR(carrier_orange);
    };
    class GVAR(gold): GVAR(orange) {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(gold);

        ace_flags_texture = QPATHTOF(data\ace_flags_gold_ca.paa);
        ace_flags_carrier = QGVAR(carrier_gold);
    };

};
