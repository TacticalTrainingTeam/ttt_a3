//Custom Medical Supply Crates
class Box_NATO_Support_F;

class GVAR(san_crate_base): Box_NATO_Support_F {
    author = ECSTRING(main,TacticalTrainingTeam);
    editorSubcategory = QEGVAR(main,ttt);
    ace_cargo_size = 1;
    icon = "a3\ui_f\data\igui\cfg\actions\heal_ca.paa";
    scope = 0;

    class TransportMagazines {};
    class TransportItems {};
};

class GVAR(sana_crate): GVAR(san_crate_base) {
    scope = 2;
    displayName = CSTRING(sana_displayName);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\AmmoBox_signsA_CA.paa),
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };

    class TransportMagazines {
        MACRO_ADDMAGAZINE(ACE_painkillers,10);
    };

    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,100);
        MACRO_ADDITEM(ACE_packingBandage,80);
        MACRO_ADDITEM(ACE_quikclot,15);
        MACRO_ADDITEM(ACE_tourniquet,12);
    };
};

class GVAR(sanb_crate): GVAR(san_crate_base) {
    scope = 2;
    displayName = CSTRING(sanb_displayName);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\AmmoBox_signsB_CA.paa),
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };

    class TransportItems {};
};

class GVAR(sanc_crate): GVAR(san_crate_base) {
    scope = 2;
    displayName = CSTRING(sanc_displayName);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\AmmoBox_signsC_CA.paa),
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };

    class TransportMagazines {
        MACRO_ADDMAGAZINE(ACE_painkillers,10);
    };

    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,80);
        MACRO_ADDITEM(ACE_quikclot,40);
        MACRO_ADDITEM(ACE_packingBandage,80);
        MACRO_ADDITEM(ACE_tourniquet,25);

        MACRO_ADDITEM(ACE_morphine,25);
        MACRO_ADDITEM(ACE_epinephrine,25);

        MACRO_ADDITEM(ACE_SalineIV,20);
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
//Backwards Compatibility
// DEPRECATED: This class exists for backwards compatibility with legacy code that references 'vba_crate'.
// It is deprecated and will be removed in a future release. New code should use 'sanc_crate' instead.
class GVAR(vba_crate): GVAR(sanc_crate) {
    scope = 0;
    displayName = CSTRING(vba);
};

// DEPRECATED: This class exists for backwards compatibility with legacy code that references 'vbt_crate'.
// It is deprecated and will be removed in a future release. New code should use 'sana_crate' instead.
class GVAR(vbt_crate): GVAR(sana_crate) {
    scope = 0;
    displayName = CSTRING(vbt);
};
