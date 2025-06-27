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

        MACRO_ADDITEM(TTT_common_spraypaintMemes,4); //TTT Memes
        MACRO_ADDITEM(TTT_insignias_spraypaint,4); //TTT Logos

        MACRO_ADDITEM(ACE_SpraypaintGreen,4); //Gut
        MACRO_ADDITEM(ACE_SpraypaintRed,4);  //Böse
        MACRO_ADDITEM(ACE_SpraypaintBlue,4); //VSS
        MACRO_ADDITEM(ACE_SpraypaintYellow,4); //VP
        MACRO_ADDITEM(ACE_SpraypaintBlack,4); //Allgemeine Markierungen
    };

};

class B_supplyCrate_F;
class GVAR(paradrop_crate): B_supplyCrate_F {
    displayName = CSTRING(paradrop);
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size =  10;
    ace_cargo_canLoad = 0; //Unloadable

    class TransportMagazines {};
    class TransportWeapons {};

    class TransportItems {
        MACRO_ADDITEM(ACE_Altimeter,20); //Höhenmesser
    };
    class TransportBackpacks {
        MACRO_ADDBACKPACK(B_Parachute,20); //Fallschirm
    };

};