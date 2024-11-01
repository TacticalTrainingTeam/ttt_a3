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
        _generalMacro = "I_MRAP_03_F";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
    class rsr_fennek_hmg_flecktarn: I_MRAP_03_hmg_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_hmg_flecktarn);
        _generalMacro = "I_MRAP_03_F";
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
        _generalMacro = "I_MRAP_03_F";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };
    class rsr_fennek_gmg_flecktarn: I_MRAP_03_gmg_F {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(fennek_gmw_flecktarn);
        _generalMacro ="I_MRAP_03_F";
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
        displayName = CSTRING(fennek_gmw_tropentarn);
        _generalMacro = "I_MRAP_03_F";
        editorPreview = "";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class B_APC_Tracked_01_CRV_F;
    class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F    {
        author="RsR";
        displayName="Bergepanzer (Flecktarn)";
        _generalMacro="B_APC_Tracked_01_CRV_F";
        typicalCargo[]=    {"B_Soldier_F"};
        side=1;
        crew="B_Soldier_F";
        transportRepair=200000000;
        transportFuel=3000;
        transportAmmo=3000;
        supplyRadius=7.5;
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Tanks";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_body_crv_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_body_mbt_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_turret_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_crv_co.paa)
        };
        class TextureSources {
            class bergepanzer_flecktarn {
                displayName="Bergepanzer (Flecktarn)";
                author="Redd";
                textures[]= {
                    QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_body_crv_co.paa),
                    QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_body_mbt_co.paa),
                    QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_turret_co.paa),
                    QPATHTOF(data\bergepanzer\bergepanzer_flecktarn_crv_co.paa)
                };
                factions[]= {"BLU_F"};
            };
            class bergepanzer_tropentarn {
                displayName="Bergepanzer (Tropentarn)";
                author="Redd";
                textures[]= {
                    QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_body_crv_co.paa),
                    QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_body_mbt_co.paa),
                    QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_turret_co.paa),
                    QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_crv_co.paa)
                };
                factions[]= {"BLU_F"};
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=1;
            };
        };
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
        author="RsR";
        displayName="Bergepanzer (Tropentarn)";
        _generalMacro="B_APC_Tracked_01_CRV_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_body_crv_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_body_mbt_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_turret_co.paa),
            QPATHTOF(data\bergepanzer\bergepanzer_tropentarn_crv_co.paa)
        };
    };
    
    class O_Truck_03_transport_F;
    class O_Truck_03_covered_F;
    class O_Truck_03_repair_F;
    class O_Truck_03_ammo_F;
    class O_Truck_03_fuel_F;
    class O_Truck_03_medical_F;
    class rsr_wisent_transport_flecktarn: O_Truck_03_transport_F {
        author="RsR";
        displayName="Wisent offen (Flecktarn)";
        side=1;
        crew="B_Soldier_F";
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        class TransportItems { };
        class TransportWeapons { };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName="Wisent (Flecktarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa)
                };
            };
            class wisent_tropentarn {
                displayName="Wisent (Tropentarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa)
                };
            };
        };
    };
    class rsr_wisent_transport_tropentarn: rsr_wisent_transport_flecktarn {
        author="RsR";
        displayName="Wisent offen (Tropentarn)";
        _generalMacro="O_Truck_03_transport_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa)
        };
    };
    class rsr_wisent_covered_flecktarn: O_Truck_03_covered_F {
        author="RsR";
        displayName="Wisent Plane (Flecktarn)";
        side=1;
        crew="B_Soldier_F";
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName="Wisent (Flecktarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
                };
            };
            class wisent_tropentarn {
                displayName="Wisent (Tropentarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
                };
            };
        };
    };
    class rsr_wisent_covered_tropentarn: rsr_wisent_covered_flecktarn {
        author="RsR";
        displayName="Wisent Plane (Tropentarn)";
        _generalMacro="O_Truck_03_transport_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
        };
    };
    class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F {
        author="RsR";
        displayName="Wisent Reparatur (Flecktarn)";
        side=1;
        crew="B_Soldier_F";
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        transportRepair=200000000;
        supplyRadius=10;
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ammo_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName="Wisent (Flecktarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ammo_co.paa)
                };
            };
            class wisent_tropentarn {
                displayName="Wisent (Tropentarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ammo_co.paa)
                };
            };
        };
        class UserActions {
            class Towing {
                displayName="Nehme Abschleppseil";
                onlyforplayer=1;
                position="mirrors_control";
                radius=2;
                showWindow=0;
                condition="";
                statement="[(_this select 1)] call fn_advancedTowingInit;";
            };
        };
    };
    class rsr_wisent_repair_tropentarn: rsr_wisent_repair_flecktarn    {
        author="RsR";
        displayName="Wisent Reparatur (Tropentarn)";
        _generalMacro="O_Truck_03_transport_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ammo_co.paa)
        };
    };
    class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F {
        author="RsR";
        displayName="Wisent Munition (Flecktarn)";
        side=1;
        crew="B_Soldier_F";
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        transportAmmo=30000;
        supplyRadius=10;
        fuelExplosionPower=10;
        class TransportItems { };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_containers_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName="Wisent (Flecktarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_containers_co.paa)
                };
            };
            class wisent_tropentarn {
                displayName="Wisent (Tropentarn)";
                author="Redd";
                factions[]= {"BLU_F"};
                textures[]= {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_containers_co.paa)
                };
            };
        };
    };
    class rsr_wisent_ammo_tropentarn: rsr_wisent_ammo_flecktarn {
        author="RsR";
        displayName="Wisent Munition (Tropentarn)";
        _generalMacro="O_Truck_03_transport_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_containers_co.paa)
        };
    };
    class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F {
        author="RsR";
        displayName="Wisent Treibstoff (Flecktarn)";
        _generalMacro="O_Truck_03_fuel_F";
        side=1;
        crew="B_Soldier_F";
        transportFuel=8000;
        supplyRadius=10;
        fuelExplosionPower=15;
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_fuel_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName="Wisent (Flecktarn)";
                author="Redd";
                textures[]= {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_fuel_co.paa)
                };
                factions[]= {"BLU_F"};
            };
            class wisent_tropentarn {
                displayName="Wisent (Tropentarn)";
                author="Redd";
                textures[]= {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_fuel_co.paa)
                };
                factions[]= {"BLU_F"};
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=1;
            };
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_wisent_fuel_tropentarn: rsr_wisent_fuel_flecktarn {
        author="RsR";
        displayName="Wisent Treibstoff (Tropentarn)";
        _generalMacro="O_Truck_03_transport_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_fuel_co.paa)
        };
    };
    class rsr_wisent_medical_flecktarn: O_Truck_03_medical_F {
        author="RsR";
        displayName="Wisent Sanität (Flecktarn)";
        _generalMacro="O_Truck_03_medical_F";
        side=1;
        crew="B_Soldier_F";
        supplyRadius=10;
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName="Wisent (Flecktarn)";
                author="Redd";
                textures[]= {
                    QPATHTOF(data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_flecktarn_cover_co.paa)
                };
                factions[]= {"BLU_F"};
            };
            class wisent_tropentarn {
                displayName="Wisent (Tropentarn)";
                author="Redd";
                textures[]= {
                    QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
                };
                factions[]= {"BLU_F"};
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=1;
            };
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_wisent_medical_tropentarn: rsr_wisent_medical_flecktarn {
        author="RsR";
        displayName="Wisent Sanität (Tropentarn)";
        _generalMacro="O_Truck_03_medical_F";
        editorPreview="";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(data\wisent\wisent_tropentarn_cover_co.paa)
        };
    };
};