class CfgVehicles {

    class itc_land_I_StriderRV;
    class itc_land_I_StriderRV_HMG;
    class itc_land_I_StriderRV_GMG;

    class rsr_fennek_transport_RV_flecktarn : itc_land_I_StriderRV {
        displayName = "Fennek Aufklärung (Flecktarn)";
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_turret_co.paa)
        };
    };

    class rsr_fennek_transport_RV_tropentarn : rsr_fennek_transport_RV_flecktarn {
        displayName = "Fennek Aufklärung (Tropenktarn)";
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class rsr_fennek_hmg_RV_flecktarn : itc_land_I_StriderRV_HMG {
        displayName = "Fennek Aufklärung HMG (Flecktarn)";
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_turret_co.paa)
        };
    };

    class rsr_fennek_hmg_RV_tropentarn : rsr_fennek_hmg_RV_flecktarn {
        displayName = "Fennek Aufklärung HMG (Tropentarn)";
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class rsr_fennek_gmg_RV_flecktarn : itc_land_I_StriderRV_GMG {
        displayName = "Fennek Aufklärung GMW (Flecktarn)";
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_turret_co.paa)
        };
    };

    class rsr_fennek_gmg_RV_tropentarn : rsr_fennek_gmg_RV_flecktarn {
        displayName = "Fennek Aufklärung GMW (Flecktarn)";
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
};