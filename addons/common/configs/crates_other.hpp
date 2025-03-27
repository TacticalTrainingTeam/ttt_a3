//Custom UAV Crate
class Box_NATO_AmmoOrd_F; //ToDo Change Crate Base

//Benötigt ITC+ACE
class GVAR(uav): Box_NATO_AmmoOrd_F {
    displayName = CSTRING(uav);
    editorCategory = "EdCat_Supplies";
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;

    class TransportItems {
        MACRO_ADDITEM(ITC_Land_B_AR2i_Packed);
        MACRO_ADDITEM(B_UavTerminal,1); 
        MACRO_ADDITEM(ACE_UAVBattery,10);   
    };
};