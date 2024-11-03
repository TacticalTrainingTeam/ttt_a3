class CfgVehicles {
    class I_MRAP_03_F;
    class I_MRAP_03_hmg_F;
    class I_MRAP_03_gmg_F;
    class rsr_fennek_transport_flecktarn: I_MRAP_03_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_flecktarn);
        typicalCargo[] = {"B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 1;
            };
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_fennek_transport_tropentarn: rsr_fennek_transport_flecktarn {
        displayName = CSTRING(fennek_tropentarn);
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
    class rsr_fennek_hmg_flecktarn: I_MRAP_03_hmg_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_hmg_flecktarn);
        typicalCargo[] = {"B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 1;
            };
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_fennek_hmg_tropentarn: rsr_fennek_hmg_flecktarn {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_hmg_tropentarn);
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
    class rsr_fennek_gmg_flecktarn: I_MRAP_03_gmg_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_gmg_flecktarn);
        typicalCargo[] = {"B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 1;
            };
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_fennek_gmg_tropentarn: rsr_fennek_gmg_flecktarn {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_gmg_tropentarn);
        editorPreview = "";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class B_APC_Tracked_01_CRV_F;
    class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(bergepanzer_flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Tanks";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_body_crv_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_body_mbt_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_turret_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_crv_co.paa)
        };
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        class UserActions {
            class Towing {
                displayName="Nehme Abschleppseil";
                onlyforplayer=1;
                position="mirrors_control";
                radius=2;
                showWindow=0;
                condition="";
                statement="_this call fn_advancedTowingInit;";
            };
        };
    };

    class rsr_bergepanzer_tropentarn: rsr_bergepanzer_flecktarn {
        displayName = CSTRING(bergepanzer_tropentarn);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_body_crv_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_body_mbt_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_turret_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_crv_co.paa)
        };
    };
    
    class O_Truck_03_transport_F;

    class rsr_wisent_transport_flecktarn: O_Truck_03_transport_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent offen (Flecktarn));
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        class TransportItems { };
        class TransportWeapons { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa)
                };
            };
        };
    };
    class rsr_wisent_transport_tropentarn: rsr_wisent_transport_flecktarn {
        displayName = QUOTE(Wisent offen (Tropentarn));
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayNam = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa)
                };
            };
        };
    };

    class O_Truck_03_covered_F;

    class rsr_wisent_covered_flecktarn: O_Truck_03_covered_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Plane (Flecktarn));
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                textures[] = {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
                };
            };
        };
    };

    class rsr_wisent_covered_tropentarn: rsr_wisent_covered_flecktarn {
        displayName = QUOTE(Wisent Plane (Tropentarn));
        editorPreview = "";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
                };
            };
        };
    };

    class O_Truck_03_repair_F;

    class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Reparatur (Flecktarn));
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ammo_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ammo_co.paa)
                };
            };
        };
        class UserActions {
            class Towing {
                displayName = "Nehme Abschleppseil";
                onlyforplayer = 1;
                position = "mirrors_control";
                radius = 2;
                showWindow = 0;
                condition = "";
                statement = "[(_this select 1)] call fn_advancedTowingInit;";
            };
        };
    };

    class rsr_wisent_repair_tropentarn: rsr_wisent_repair_flecktarn    {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Reparatur (Tropentarn));
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ammo_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ammo_co.paa)
                };
            };
        };
    };

    class O_Truck_03_ammo_F;

    class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Munition (Flecktarn));
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_containers_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_containers_co.paa)
                };
            };
        };
    };

    class rsr_wisent_ammo_tropentarn: rsr_wisent_ammo_flecktarn {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Munition (Tropentarn));
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_containers_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_containers_co.paa)
                };
            };
        };
    };

    class O_Truck_03_fuel_F;

    class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Treibstoff (Flecktarn));
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_fuel_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = "Wisent (Flecktarn)";
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_fuel_co.paa)
                };
            };
        };
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_wisent_fuel_tropentarn: rsr_wisent_fuel_flecktarn {
        displayName = QUOTE(Wisent Treibstoff (Tropentarn));
        editorPreview = "";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_fuel_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName =QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_fuel_co.paa)
                };
            };
        };
    };

    class O_Truck_03_medical_F;

    class rsr_wisent_medical_flecktarn: O_Truck_03_medical_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = QUOTE(Wisent Sanität (Flecktarn));
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = "";
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
                };
            };
        };
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_wisent_medical_tropentarn: rsr_wisent_medical_flecktarn {
        displayName = QUOTE(Wisent Sanität (Tropentarn));
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
                };
            };
        };
    };
};