//Custom Medical Supply Crates
class Box_NATO_Support_F;

class GVAR(sana_crate): Box_NATO_Support_F {
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;
    icon = "a3\ui_f\data\igui\cfg\actions\heal_ca.paa";

    displayName = CSTRING(sana_displayName);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\AmmoBox_signs_CA.paa),
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };

    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,100);
        MACRO_ADDITEM(ACE_packingBandage,80);
        MACRO_ADDITEM(ACE_quikclot,15);
        MACRO_ADDITEM(ACE_tourniquet,12);

        MACRO_ADDITEM(ACE_painkillers,10);
    };
};

class GVAR(sanb_crate): GVAR(sana_crate) {
    displayName = CSTRING(sanb_displayName);
};

class GVAR(sanc_crate): GVAR(sanb_crate) {
    displayName = CSTRING(sanc_displayName);

    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,100);
        MACRO_ADDITEM(ACE_quikclot,50);
        MACRO_ADDITEM(ACE_packingBandage,100);
        MACRO_ADDITEM(ACE_tourniquet,50);

        MACRO_ADDITEM(ACE_morphine,50);
        MACRO_ADDITEM(ACE_epinephrine,50);
        MACRO_ADDITEM(ACE_painkillers,10);

        MACRO_ADDITEM(ACE_SalineIV,30);
        MACRO_ADDITEM(ACE_SalineIV_500,15);
        MACRO_ADDITEM(ACE_SalineIV_250,15);

        MACRO_ADDITEM(ACE_personalAidKit,3);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_suture,50);
        MACRO_ADDITEM(ACE_bodyBag,3);

        MACRO_ADDITEM(ace_flags_blue,1);
    };
};

//Backwards Compatibility
class GVAR(vba_crate): GVAR(sanc_crate) {
    scope = 0;
    displayName = CSTRING(vba);
};

class GVAR(vbt_crate): GVAR(sana_crate) {
    scope = 0;
    displayName = CSTRING(vbt);
};
