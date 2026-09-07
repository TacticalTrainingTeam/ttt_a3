class CfgMagazines {
    class CA_Magazine;

    // class GVAR(battery): CA_Magazine {
    //     author = "Synixe Contractors";
    //     displayName = "AR-2 Battery";
    //     count = 100;
    //     initSpeed = 0;
    //     tracersEvery = 0;
    //     lastRoundsTracer = 0;
    //     mass = 20;
    //     model = "\z\ace\addons\logistics_uavbatter\data\ace_battery.p3d";
    //     picture = "\z\ace\addons\logistics_uavbatter\ui\UAV_battery_ca.paa";
    // };

    class GVAR(base): CA_Magazine {
        author = "Synixe Contractors";
        count = 1;
        mass = 70; // An assault pack holds 2
        ACE_isUnique = 1;

        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        hiddenSelections[] = {"Camo","Camo2"};
        hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa"};
        editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_PlasticCase_01_small_black_F.jpg";
        picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\Map_UAV_01_CA.paa";
    };

    // class CLASS(UAV_01_CASE): GVAR(base) {
    //     scope = 2;
    //     scopeCurator = 2;
    //     displayName = "AR-2 Case";
    //     descriptionShort = "Contains an AR-2 Darter drone. Batteries not included.";
    //     picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\Map_UAV_01_CA.paa";

    //     GVAR(drone) = "B_UAV_01_F";
    // };

    class CLASS(B_Crocus_AT_CASE): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(at_case_displayName);
        descriptionShort = CSTRING(at_case_description);

        GVAR(drone) = "B_Crocus_AT";
    };

    class CLASS(B_Crocus_AT_TI_CASE): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(at_ti_case_displayName);
        descriptionShort = CSTRING(at_ti_case_description);

        GVAR(drone) = "B_Crocus_AT_TI";
    };

    class CLASS(B_Crocus_AP_CASE): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(ap_case_displayName);
        descriptionShort = CSTRING(ap_case_description);

        GVAR(drone) = "B_Crocus_AP";
    };

    class CLASS(B_Crocus_AP_TI_CASE): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(ap_ti_case_displayName);
        descriptionShort = CSTRING(ap_ti_case_description);

        GVAR(drone) = "B_Crocus_AP_TI";
    };
};
