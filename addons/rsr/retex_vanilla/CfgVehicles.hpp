class CfgVehicles {
    class I_MRAP_03_F;

    class rsr_fennek_transport_flecktarn: I_MRAP_03_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(fennek_flecktarn);
        typicalCargo[] = {"B_Soldier_F","B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\fennek\previews\rsr_fennek_transport_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(retex_vanilla\data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_fennek_transport_tropentarn: rsr_fennek_transport_flecktarn {
        displayName = SUBCSTRING(fennek_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\fennek\previews\rsr_fennek_transport_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(retex_vanilla\data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };    
    
    class I_MRAP_03_hmg_F;

    class rsr_fennek_hmg_flecktarn: I_MRAP_03_hmg_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(fennek_hmg_flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\fennek\previews\rsr_fennek_hmg_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[]= {
            QPATHTOF(retex_vanilla\data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(retex_vanilla\data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_fennek_hmg_tropentarn: rsr_fennek_hmg_flecktarn {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(fennek_hmg_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\fennek\previews\rsr_fennek_hmg_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(retex_vanilla\data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class I_MRAP_03_gmg_F;

    class rsr_fennek_gmg_flecktarn: I_MRAP_03_gmg_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(fennek_gmg_flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\fennek\previews\rsr_fennek_gmg_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\fennek\fennek_flecktarn_ext_co.paa),
            QPATHTOF(retex_vanilla\data\fennek\fennek_flecktarn_turret_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_fennek_gmg_tropentarn: rsr_fennek_gmg_flecktarn {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(fennek_gmg_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\fennek\previews\rsr_fennek_gmg_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\fennek\fennek_tropentarn_ext_co.paa),
            QPATHTOF(retex_vanilla\data\fennek\fennek_tropentarn_turret_co.paa)
        };
    };

    class B_APC_Tracked_01_CRV_F;
    class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(bergepanzer_flecktarn);
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
        side = 1;
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\bergepanzer\previews\rsr_bergepanzer_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Tanks";
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_crv_co.paa),
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_mbt_co.paa),
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_flecktarn_turret_co.paa),
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_flecktarn_crv_co.paa)
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };

        transportRepair = 0;
        transportAmmo = 0;
        transportFuel = 0;
        ace_rearm_defaultSupply = 1200;
        ace_repair_canRepair = 1; // Make repair vehicle
        ace_refuel_fuelCargo = 3000; // Maximum fuel cargo amount (in liters)
        ace_repair_spareTracks = 4;
        ace_cargo_space = 10; // To accomodate the tracks
    };

    class rsr_bergepanzer_tropentarn: rsr_bergepanzer_flecktarn {
        displayName = SUBCSTRING(bergepanzer_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\bergepanzer\previews\rsr_bergepanzer_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_crv_co.paa),
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_mbt_co.paa),
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_tropentarn_turret_co.paa),
            QPATHTOF(retex_vanilla\data\bergepanzer\bergepanzer_tropentarn_crv_co.paa)
        };
    };
    
    class O_Truck_03_transport_F;

    class rsr_wisent_transport_flecktarn: O_Truck_03_transport_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_offen_flecktarn);
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_transport_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa)
                };
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
    };

    class rsr_wisent_transport_tropentarn: rsr_wisent_transport_flecktarn {
        displayName = SUBCSTRING(wisent_offen_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_transport_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayNam = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa)
                };
            };
        };
    };

    class O_Truck_03_covered_F;

    class rsr_wisent_covered_flecktarn: O_Truck_03_covered_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_plane_flecktarn);
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_covered_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cover_co.paa)
                };
            };
        };

        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
    };

    class rsr_wisent_covered_tropentarn: rsr_wisent_covered_flecktarn {
        displayName = SUBCSTRING(wisent_plane_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_covered_tropentarn_preview.jpg);
        hiddenSelectionsTextures[]= {
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cover_co.paa)
                };
            };
        };
    };

    class O_Truck_03_repair_F;

    class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_reparatur_flecktarn);
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_repair_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";

        transportRepair = 0;
        ace_repair_canRepair = 1; // Make repair vehicle
        ace_repair_spareWheels = 4;
        ace_repair_spareTracks = 4;
        ace_cargo_space = 14; // To accomodate the wheels and tracks

        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ammo_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ammo_co.paa)
                };
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
    };

    class rsr_wisent_repair_tropentarn: rsr_wisent_repair_flecktarn    {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_reparatur_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_repair_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ammo_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ammo_co.paa)
                };
            };
        };
    };

    class O_Truck_03_ammo_F;

    class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_munition_flecktarn);
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_ammo_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";

        transportAmmo = 0;
        ace_rearm_defaultSupply = 1200;

        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_containers_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_containers_co.paa)
                };
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
    };

    class rsr_wisent_ammo_tropentarn: rsr_wisent_ammo_flecktarn {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_munition_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_ammo_tropentarn_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_containers_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_containers_co.paa)
                };
            };
        };
    };

    class O_Truck_03_fuel_F;

    class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_treibstoff_flecktarn);
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\rsr_wisent_fuel_flecktarn_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_fuel_co.paa)
        };

        transportFuel = 0;
        ace_refuel_fuelCargo = 10000; // Maximum fuel cargo amount (in liters)

        class TextureSources {
            class wisent_flecktarn {
                displayName = "Wisent (Flecktarn)";
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_fuel_co.paa)
                };
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_wisent_fuel_tropentarn: rsr_wisent_fuel_flecktarn {
        displayName = SUBCSTRING(wisent_treibstoff_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\wisent_tropentarn_fuel_co_preview.jpg);
        hiddenSelectionsTextures[]= {
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_fuel_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName =QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_fuel_co.paa)
                };
            };
        };
    };

    class O_Truck_03_medical_F;

    class rsr_wisent_medical_flecktarn: O_Truck_03_medical_F {
        author = ECSTRING(rsr,rsr);
        displayName = SUBCSTRING(wisent_sanitat_flecktarn);
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
        crew = "B_Soldier_F";
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\wisent_flecktarn_medical_co_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";

        attendant = 1; //is ACE Medical Vehicle

        hiddenSelectionsTextures[] = {
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_flecktarn {
                displayName = QUOTE(Wisent (Flecktarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cargo_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_flecktarn_cover_co.paa)
                };
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_wisent_medical_tropentarn: rsr_wisent_medical_flecktarn {
        displayName = SUBCSTRING(wisent_sanitat_tropentarn);
        editorPreview = QPATHTOF(retex_vanilla\data\wisent\previews\wisent_tropentarn_medical_co_preview.jpg);
        hiddenSelectionsTextures[]= {
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa),
            QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cover_co.paa)
        };
        class TextureSources {
            class wisent_tropentarn {
                displayName = QUOTE(Wisent (Tropentarn));
                author = "Redd";
                textures[] = {
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext01_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_ext02_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cargo_co.paa),
                    QPATHTOF(retex_vanilla\data\wisent\wisent_tropentarn_cover_co.paa)
                };
            };
        };
    };
};