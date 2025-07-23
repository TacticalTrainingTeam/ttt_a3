class CfgVehicles {
    class ace_flags_carrier_weiß;
    class GVAR(carrier_weiß): ace_flags_carrier_weiß {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = CSTRING(weiß); // Item/Flag name
        editorPreview = QPATHTOF(data\editorpreviews\weiß.jpg); // Preview picture shown in editor
    };
    class GVAR(carrier_silber): GVAR(carrier_weiß) {
        displayName = CSTRING(silver);
        editorPreview = QPATHTOF(data\editorpreviews\silber.jpg);
    };
    class GVAR(carrier_platin): GVAR(carrier_weiß) {
        displayName = CSTRING(platinum);
        editorPreview = QPATHTOF(data\editorpreviews\platin.jpg);
    };
    class GVAR(carrier_grau): GVAR(carrier_weiß) {
        displayName = CSTRING(grau);
        editorPreview = QPATHTOF(data\editorpreviews\grau.jpg);
    };
    class GVAR(carrier_logo): GVAR(carrier_weiß) {
        displayName = CSTRING(logo);
        editorPreview = QPATHTOF(data\editorpreviews\logo.jpg);
    };
    class GVAR(carrier_schwarz): GVAR(carrier_weiß) {
        displayName = CSTRING(black);
        editorPreview = QPATHTOF(data\editorpreviews\schwarz.jpg);
    };
    class GVAR(carrier_blau): GVAR(carrier_weiß) {
        displayName = CSTRING(blue);
        editorPreview = QPATHTOF(data\editorpreviews\blau.jpg);
    };
    class GVAR(carrier_rot): GVAR(carrier_weiß) {
        displayName = CSTRING(red);
        editorPreview = QPATHTOF(data\editorpreviews\rot.jpg);
    };
    class GVAR(carrier_braun): GVAR(carrier_weiß) {
        displayName = CSTRING(brown);
        editorPreview = QPATHTOF(data\editorpreviews\braun.jpg);
    };
    class GVAR(carrier_orange): GVAR(carrier_weiß) {
        displayName = CSTRING(orange);
        editorPreview = QPATHTOF(data\editorpreviews\orange.jpg);
    };
    class GVAR(carrier_gelb): GVAR(carrier_weiß) {
        displayName = CSTRING(yellow);
        editorPreview = QPATHTOF(data\editorpreviews\gelb.jpg);
    };
    class GVAR(carrier_grün): GVAR(carrier_weiß) {
        displayName = CSTRING(green);
        editorPreview = QPATHTOF(data\editorpreviews\grün.jpg);
    };
    class GVAR(carrier_violett): GVAR(carrier_weiß) {
        displayName = CSTRING(purple);
        editorPreview = QPATHTOF(data\editorpreviews\violett.jpg);
    };
    class GVAR(carrier_bronze): GVAR(carrier_weiß) {
        displayName = CSTRING(bronze);
        editorPreview = QPATHTOF(data\editorpreviews\bronze.jpg);
    };
    class GVAR(carrier_gold): GVAR(carrier_weiß) {
        displayName = CSTRING(gold);
        editorPreview = QPATHTOF(data\editorpreviews\gold.jpg);
    };

};
