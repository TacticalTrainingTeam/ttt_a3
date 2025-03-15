class CfgVehicles {

    class itc_land_I_StriderRV;
    class itc_land_I_StriderRV_HMG;
    class itc_land_I_StriderRV_GMG;

    class rsr_fennek_transport_RV_flecktarn: itc_land_I_StriderRV {
        displayName = SUBCSTRING(Fennek_RV_Flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = QPATHTOF(rsr_retex_itc\data\fennek\previews\rsr_fennek_transport_RV_flecktarn_preview.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_fennek_transport_RV_tropentarn: rsr_fennek_transport_RV_flecktarn {
        displayName = SUBCSTRING(Fennek_RV_Tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class rsr_fennek_hmg_RV_flecktarn: itc_land_I_StriderRV_HMG {
        displayName = SUBCSTRING(Fennek_RV_HMG_Flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = QPATHTOF(rsr_retex_itc\data\fennek\previews\rsr_fennek_hmg_RV_flecktarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_fennek_hmg_RV_tropentarn: rsr_fennek_hmg_RV_flecktarn {
        displayName = SUBCSTRING(Fennek_RV_HMG_Tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class rsr_fennek_gmg_RV_flecktarn: itc_land_I_StriderRV_GMG {
        displayName = SUBCSTRING(Fennek_RV_GMW_Flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        crew = "B_Soldier_F";
        side = 1;
        faction = "RsR";
        editorPreview = QPATHTOF(rsr_retex_itc\data\fennek\previews\rsr_fennek_gmg_RV_flecktarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_fennek_gmg_RV_tropentarn: rsr_fennek_gmg_RV_flecktarn {
        displayName = SUBCSTRING(Fennek_RV_GMW_Tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(rsr_retex_vanilla\data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
};