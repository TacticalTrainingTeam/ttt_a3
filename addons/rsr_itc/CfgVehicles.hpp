class CfgVehicles {

    class itc_land_I_StriderRV;
    class itc_land_I_StriderRV_HMG;
    class itc_land_I_StriderRV_GMG;

    class rsr_fennek_transport_RV_flecktarn: itc_land_I_StriderRV {
        displayName = CSTRING(Fennek_RV_Flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = QPATHTOF(data\fennek\previews\rsr_fennek_transport_RV_flecktarn_preview.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_fennek_transport_RV_tropentarn: rsr_fennek_transport_RV_flecktarn {
        displayName = CSTRING(Fennek_RV_Tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class rsr_fennek_hmg_RV_flecktarn: itc_land_I_StriderRV_HMG {
        displayName = CSTRING(Fennek_RV_HMG_Flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = QPATHTOF(data\fennek\previews\rsr_fennek_hmg_RV_flecktarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_fennek_hmg_RV_tropentarn: rsr_fennek_hmg_RV_flecktarn {
        displayName = CSTRING(Fennek_RV_HMG_Tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class rsr_fennek_gmg_RV_flecktarn: itc_land_I_StriderRV_GMG {
        displayName = CSTRING(Fennek_RV_GMW_Flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = QPATHTOF(data\fennek\previews\rsr_fennek_gmg_RV_flecktarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_fennek_gmg_RV_tropentarn: rsr_fennek_gmg_RV_flecktarn {
        displayName = CSTRING(Fennek_RV_GMW_Tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOEF(rsr_vanilla,data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
};