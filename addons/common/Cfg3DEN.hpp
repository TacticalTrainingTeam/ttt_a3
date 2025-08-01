class Cfg3DEN {
    class Compositions {
        class TTT_basisModule {                                  // one class per composition
            path = "z\ttt\addons\common\compositions\basisModule";              // pbo path to a folder containing header.sqe/composition.sqe files
            side = 8;                                            // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
            editorCategory = "EdCat_Default";      // link to CfgEditorCategories
            editorSubcategory = QEGVAR(main,TTT);     // link to CfgEditorSubcategories
            displayName = "TTT-Basismodule";
            icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";    // left side icon in groups list
            useSideColorOnIcon = 1;                              // 1 == icon is always colored in faction color
        };
    };
};
