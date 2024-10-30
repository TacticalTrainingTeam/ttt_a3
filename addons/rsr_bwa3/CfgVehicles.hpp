class CfgVehicles {
    
    class bwa3_eagle_fleck;
    class rsr_eagle_fleck: bwa3_eagle_fleck {
        author = CSTRING(RSR);
        attendant = 1;
        displayName="Eagle IV Sanität (Flecktarn)";
        typicalCargo[]= {"B_Soldier_F"};
        crew="B_Soldier_F";
        side=1;
        editorPreview="";
        faction="rsr";
        editorSubcategory="EdSubCat_Cars";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=    {
            "z\ttt\addons\rsr_bwa3\data\eagle\bwa3_eagle_fleck_co.paa",
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
        hiddenSelections[]=    {
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
        class TextureSources {
            class eagle_flecktarn {
                displayName="Flecktarn";
                author="V1irus";
                textures[]=    {
                    "\rsr_bwa3\data\eagle\bwa3_eagle_co",
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
                hiddenSelections[]=    {
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
                factions[]=    {"BLU_F"};
            };
            class eagle_flecktarn_lowvis {
                displayName="Flecktarn lowvis";
                author="V1irus";
                textures[]=    {
                    "\rsr_bwa3\data\eagle\bwa3_eagle_co_vis",
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
                hiddenSelections[]=    {
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
                factions[]=    {"BLU_F"};
            };
            class eagle_flecktarn_dia {
                displayName="Flecktarn Diamant";
                author="Addi";
                textures[]=    {
                    "\rsr_bwa3\data\eagle\bwa3_eagle_dia_co",
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
                hiddenSelections[]=    {
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
    class rsr_eagle_fleck_lowvis: rsr_eagle_fleck {
        author = CSTRING(RSR);
        displayName=QUOTE(Eagle IV Sanität lowvis (Flecktarn));
        _generalMacro="I_MRAP_03_F";
        editorPreview="";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=    {
            "z\ttt\addons\rsr_bwa3\data\eagle\bwa3_eagle_fleck_co_vis.paa",
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
        author = CSTRING(RSR);
        displayName = QUOTE(Eagle IV Sanität Diamant (Flecktarn));
        _generalMacro="I_MRAP_03_F";
        editorPreview="";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=    {
            "z\ttt\addons\rsr_bwa3\data\eagle\bwa3_eagle_fleck_dia_co.paa",
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
        displayName = CSTRING(TTT_rsr_bwa3_eagleSan_tropen);
        typicalCargo[]= {"B_Soldier_F"};
        crew="B_Soldier_F";
        side=1;
        editorPreview="";
        faction=QUOTE(rsr);
        editorSubcategory="EdSubCat_Cars";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]= {
            "z\ttt\addons\rsr_bwa3\data\eagle\bwa3_eagle_tropen_co.paa",
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
            class eagle_tropentarn    {
                displayName="Tropentarn";
                author="V1irus";
                textures[]=    {
                    "\rsr_bwa3\data\eagle\bwa3_eagle_tropen_co",
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
                factions[]=    {"BLU_F"};
            };
            class eagle_tropentarn_lowvis {
                displayName="Tropentarn lowvis";
                author="V1irus";
                textures[]=    {
                    "\rsr_bwa3\data\eagle\bwa3_eagle_tropen_co_vis",
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
                factions[]=    {"BLU_F"};
            };
            class eagle_tropentarn_dia {
                displayName="Tropentarn Diamant";
                author="Addi";
                textures[]=    {
                    "\rsr_bwa3\data\eagle\bwa3_eagle_tropen_dia_co",
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
                factions[]=    {"BLU_F"};
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
    class rsr_eagle_tropen_lowvis: rsr_eagle_tropen {
        author = ECSTRING(rsr_core,RSR);
        displayName=CSTRING(TTT_rsr_bwa3_eagleSan_low_vis_tropen);
        _generalMacro="I_MRAP_03_F";
        editorPreview="";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]= {
            "z\ttt\addons\rsr_bwa3\data\eagle\bwa3_eagle_tropen_co_vis",
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
    class rsr_eagle_tropentarn_dia: rsr_eagle_tropen {
        author = CSTRING(RSR);
        displayName = "Eagle IV Sanität Diamant (Tropentarn)";
        _generalMacro="I_MRAP_03_F";
        editorPreview="";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=    {
            "z\ttt\addons\rsr_bwa3\data\eagle\bwa3_eagle_tropen_dia_co.paa",
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
};