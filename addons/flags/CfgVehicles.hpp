class CfgVehicles {
    class ace_flags_carrier_white;
    class GVAR(carrier_weiss): ace_flags_carrier_white {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(weiss); // Item/Flag name
        editorPreview = QPATHTOF(data\editorpreviews\weiss.jpg); // Preview picture shown in editor
    };
    class GVAR(carrier_silber): GVAR(carrier_weiss) {
        displayName = CSTRING(silber);
        editorPreview = QPATHTOF(data\editorpreviews\silber.jpg);
    };
    class GVAR(carrier_platin): GVAR(carrier_weiss) {
        displayName = CSTRING(platin);
        editorPreview = QPATHTOF(data\editorpreviews\platin.jpg);
    };
    class GVAR(carrier_grau): GVAR(carrier_weiss) {
        displayName = CSTRING(grau);
        editorPreview = QPATHTOF(data\editorpreviews\grau.jpg);
    };
    class GVAR(carrier_logo): GVAR(carrier_weiss) {
        displayName = CSTRING(logo);
        editorPreview = QPATHTOF(data\editorpreviews\logo.jpg);
    };
    class GVAR(carrier_schwarz): GVAR(carrier_weiss) {
        displayName = CSTRING(schwarz);
        editorPreview = QPATHTOF(data\editorpreviews\schwarz.jpg);
    };
    class GVAR(carrier_blau): GVAR(carrier_weiss) {
        displayName = CSTRING(blau);
        editorPreview = QPATHTOF(data\editorpreviews\blau.jpg);
    };
    class GVAR(carrier_rot): GVAR(carrier_weiss) {
        displayName = CSTRING(rot);
        editorPreview = QPATHTOF(data\editorpreviews\rot.jpg);
    };
    class GVAR(carrier_braun): GVAR(carrier_weiss) {
        displayName = CSTRING(braun);
        editorPreview = QPATHTOF(data\editorpreviews\braun.jpg);
    };
    class GVAR(carrier_orange): GVAR(carrier_weiss) {
        displayName = CSTRING(orange);
        editorPreview = QPATHTOF(data\editorpreviews\orange.jpg);
    };
    class GVAR(carrier_gelb): GVAR(carrier_weiss) {
        displayName = CSTRING(gelb);
        editorPreview = QPATHTOF(data\editorpreviews\gelb.jpg);
    };
    class GVAR(carrier_grun): GVAR(carrier_weiss) {
        displayName = CSTRING(grun);
        editorPreview = QPATHTOF(data\editorpreviews\grun.jpg);
    };
    class GVAR(carrier_violett): GVAR(carrier_weiss) {
        displayName = CSTRING(violett);
        editorPreview = QPATHTOF(data\editorpreviews\violett.jpg);
    };
    class GVAR(carrier_bronze): GVAR(carrier_weiss) {
        displayName = CSTRING(bronze);
        editorPreview = QPATHTOF(data\editorpreviews\bronze.jpg);
    };
    class GVAR(carrier_gold): GVAR(carrier_weiss) {
        displayName = CSTRING(gold);
        editorPreview = QPATHTOF(data\editorpreviews\gold.jpg);
    };

};
