//Custom UAV Crate
class Box_NATO_Support_F;

//Benötigt ITC+ACE
class GVAR(uav_crate): Box_NATO_Support_F {
    displayName = CSTRING(uav);
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportItems {
        MACRO_ADDITEM(ITC_Land_B_AR2i_Packed,1);
        MACRO_ADDITEM(B_UavTerminal,1); 
        MACRO_ADDITEM(ACE_UAVBattery,10);   
    };
    class TransportMagazines {};
};