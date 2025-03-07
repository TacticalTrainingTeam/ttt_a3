//Custom Engineer Crates
class Box_NATO_AmmoOrd_F;

class GVAR(explosives_crate): Box_NATO_AmmoOrd_F {
    displayName = CSTRING(spreng);
    editorCategory = "EdCat_Supplies";
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportMagazines {
        //Explosives
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,12);
        MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,3);
    };

    class TransportItems {
        //Tools
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
};

class GVAR(pio_crate): Box_NATO_AmmoOrd_F {
    displayName = CSTRING(pio);
    editorCategory = "EdCat_Supplies";
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportMagazines {
        //Explosives
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,12);
        MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,3);
        MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,6);
        MACRO_ADDMAGAZINE(SLAMDirectionalMine_Wire_Mag,3);
    };

    class TransportItems {
        //Tools
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
        MACRO_ADDITEM(ACE_Wirecutter,1);
        MACRO_ADDITEM(ACE_VMH3,1);
        MACRO_ADDITEM(mts_cutter_folding_saw,1);
        //Marking
        MACRO_ADDITEM(mts_items_marker_mines,10);
        MACRO_ADDITEM(mts_items_marker_yellow,20);
        MACRO_ADDITEM(ACE_SpraypaintRed,1);
        MACRO_ADDITEM(ACE_SpraypaintGreen,1);
    };
};

class GVAR(eod_crate): Box_NATO_AmmoOrd_F {
    displayName = CSTRING(eod);
    editorCategory = "EdCat_Supplies";
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportMagazines {
        //Explosives
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,9);
    };

    class TransportItems {
        //Marking
        MACRO_ADDITEM(ace_marker_flags_orange,20);
        //Tools
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_VMH3,1);
        MACRO_ADDITEM(iedd_item_notebook,1);
    };
};

class GVAR(eod_ugv_crate): GVAR(eod_crate) {
    displayName = CSTRING(eod_ugv);

    class TransportItems {
        //Marking
        MACRO_ADDITEM(ace_marker_flags_orange,20);
        //Tools
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_VMH3,1);
        MACRO_ADDITEM(iedd_item_notebook,1);
        //UGV
        MACRO_ADDITEM(B_UavTerminal,1); 
        MACRO_ADDITEM(ACE_UAVBattery,10);     
    };

    class TransportBackpacks {
        MACRO_ADDBACKPACK(B_UGV_02_Demining_backpack_F,1);
    };
};