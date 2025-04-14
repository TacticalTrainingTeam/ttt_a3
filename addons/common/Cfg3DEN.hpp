class Cfg3DEN {
    class Compositions {
        class TTT_basisModule {                                  // one class per composition
            path = "compositions\TTT-basisModule";              // pbo path to a folder containing header.sqe/composition.sqe files
            side = 8;                                            // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
            //editorCategory = QGVAR(TacticalTrainingTeam);      // link to CfgEditorCategories
            //editorSubcategory = QGVAR(TacticalTrainingTeam);     // link to CfgEditorSubcategories
            //displayName = "$STR_Composition_Armored01";
            icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";    // left side icon in groups list
            useSideColorOnIcon = 1;                              // 1 == icon is always colored in faction color
        };
    };
};