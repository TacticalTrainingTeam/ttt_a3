class CfgVehicles {
    class bwa3_eagle_fleck;
    class rsr_eagle_fleck: bwa3_eagle_fleck {
        author = ECSTRING(rsr_core,rsr);
        attendant = 1;
        displayName = CSTRING(Eagle_IV_Sanität_Flecktarn);
        editorPreview = QPATHTOF(data\eagle\previews\bwa3_eagle_fleck_co_preview.jpg);
        typicalCargo[] = {"B_medic_F"};
        crew = "B_medic_F";
        side = 1;
        faction = "rsr";
        editorSubcategory = "EdSubCat_Cars";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\eagle\bwa3_eagle_fleck_co.paa),
            "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_common\data\bwa3_normteile_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };

        class TextureSources {
            class eagle_flecktarn {
                displayName = "Flecktarn";
                author = "V1irus";
                factions[] = {"BLU_F"};
                textures[] = {
                    QPATHTOF(data\eagle\bwa3_eagle_co.paa),
                    "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
                    "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
                    "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
                    "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
                    "\bwa3_common\data\bwa3_normteile_co.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
               hiddenSelections[] = {
                    "chassie",
                    "fahrwerk",
                    "interior",
                    "Glass",
                    "mirror_glass",
                    "parts",
                    "backpack_back",
                    "backpack_top",
                    "licenseplate",
                    "takt_a",
                    "takt_b",
                    "takt_c",
                    "takt_d",
                    "y_a",
                    "y_b",
                    "y_c",
                    "y_d",
                    "y_e",
                    "y_f",
                    "insignia"
                };
            };
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };

    class rsr_eagle_fleck_lowvis: rsr_eagle_fleck {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(Eagle_IV_Sanität_lowvis_Flecktarn);
        editorPreview = QPATHTOF(data\eagle\previews\bwa3_eagle_fleck_lowvis_co_preview.jpg);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\eagle\bwa3_eagle_fleck_co_vis.paa),
            "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_common\data\bwa3_normteile_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };
    };
    class rsr_eagle_fleck_dia: rsr_eagle_fleck {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(Eagle_IV_Sanität_Diamant_Flecktarn);
        editorPreview = QPATHTOF(data\eagle\previews\bwa3_eagle_fleck_dia_co_preview.jpg);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\eagle\bwa3_eagle_fleck_dia_co.paa),
            "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_common\data\bwa3_normteile_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };
    };

    class bwa3_eagle_tropen;
    class rsr_eagle_tropen: bwa3_eagle_tropen {
        author = ECSTRING(rsr_core,RSR);
        attendant = 1;
        displayName = CSTRING(Eagle_IV_Sanität_Tropentarn);
        typicalCargo[] = {"B_medic_F"};
        crew = "B_medic_F";
        side = 1;
        editorPreview = QPATHTOF(data\eagle\previews\bwa3_eagle_tropen_co_preview.jpg);
        faction = QUOTE(rsr);
        editorSubcategory = "EdSubCat_Cars";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\eagle\bwa3_eagle_tropen_co.paa),
            "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_common\data\bwa3_normteile_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };

        class TextureSources {
            class eagle_tropentarn {
                displayName = "Tropentarn";
                author = "V1irus";
                textures[] = {
                    QPATHTOF(data\eagle\bwa3_eagle_tropen_co.paa),
                    "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
                    "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
                    "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
                    "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
                    "\bwa3_common\data\bwa3_normteile_co.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {"BLU_F"};
            };
        };
        class TransportItems {
            MACRO_ADDITEM(Toolkit,1);
        };
        class TransportWeapons { };
        class TransportMagazines { };
    };
    class rsr_eagle_tropen_lowvis: rsr_eagle_tropen {
        author = ECSTRING(rsr_core,RSR);
        displayName = CSTRING(Eagle_IV_Sanität_lowvis_Tropentarn);
        editorPreview = QPATHTOF(data\eagle\previews\bwa3_eagle_tropen_lowvis_co_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\eagle\bwa3_eagle_tropen_co_vis.paa),
            "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_common\data\bwa3_normteile_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };
    };

    class rsr_eagle_tropen_dia: rsr_eagle_tropen {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(Eagle_IV_Sanität_Diamant_Tropentarn);
        editorPreview = QPATHTOF(data\eagle\previews\bwa3_eagle_tropen_dia_co_preview.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\eagle\bwa3_eagle_tropen_dia_co.paa),
            "\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "\bwa3_common\data\bwa3_normteile_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };
    };
};