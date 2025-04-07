//Custom UAV Crate
class Box_NATO_Support_F;

//Benötigt ITC+ACE
class GVAR(uav_crate): Box_NATO_Support_F {
    displayName = CSTRING(uav);
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportMagazines {};

    class TransportItems {
        MACRO_ADDITEM(ITC_Land_B_AR2i_Packed,1);
        MACRO_ADDITEM(B_UavTerminal,1); 
        MACRO_ADDITEM(ACE_UAVBattery,10);   
    };
};

class GVAR(mark_crate): Box_NATO_Support_F {
    displayName = CSTRING(marker);
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportMagazines {};

    class TransportItems {
        MACRO_ADDITEM(ACE_flags_red,4); //Eindringpunkte Inf
        MACRO_ADDITEM(ACE_flags_blue,4); //VSS
        MACRO_ADDITEM(ACE_flags_yellow,4); //VP

        MACRO_ADDITEM(TTT_Spraypaint,4); //TTT Logos

        MACRO_ADDITEM(ACE_SpraypaintGreen,4);
        MACRO_ADDITEM(ACE_SpraypaintRed,4); 
        MACRO_ADDITEM(ACE_SpraypaintBlue,4); 
    };

};