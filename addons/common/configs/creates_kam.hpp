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
        MACRO_ADDMAGAZINE(kat_Painkiller,25);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,80);
        MACRO_ADDITEM(ACE_packingBandage,80);
        MACRO_ADDITEM(ACE_quickClot,80);
        MACRO_ADDITEM(ACE_tourniquet,25);
        MACRO_ADDITEM(kat_chestSeal,25);
    };
};

class GVAR(sanb_crate): GVAR(san_crate_base) {
    scope = 2;
    displayName = CSTRING(sanb_displayName);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\AmmoBox_signsB_CA.paa),
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };

    class TransportMagazines {
        MACRO_ADDMAGAZINE(kat_Painkiller,5);
        MACRO_ADDMAGAZINE(kat_Penthrox,5);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,100);
        MACRO_ADDITEM(ACE_packingBandage,100);
        MACRO_ADDITEM(ACE_tourniquet,25);

        MACRO_ADDITEM(kat_chestSeal,25);

        MACRO_ADDITEM(ACE_epinephrine,25);
        MACRO_ADDITEM(kat_naloxone,5);
        MACRO_ADDITEM(ACE_morphine,10);
        MACRO_ADDITEM(kat_lidocaine,10);

        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_suture,100);
        MACRO_ADDITEM(kat_ncdKit,10);
        MACRO_ADDITEM(kat_pocketBVM,6);
        MACRO_ADDITEM(kat_larynx,20);
        MACRO_ADDITEM(kat_IV_16,30);
        MACRO_ADDITEM(kat_Pulseoximeter,6);
        MACRO_ADDITEM(kat_AED,1);

        MACRO_ADDITEM(ACE_salineIV,20);
        MACRO_ADDITEM(ACE_salineIV_500,20);
        MACRO_ADDITEM(ACE_salineIV_250,5);

        MACRO_ADDITEM(kat_basicDiagnostic,1);
        MACRO_ADDITEM(ace_flags_blue,1);
        MACRO_ADDITEM(ACE_SpraypaintBlue,1);
        MACRO_ADDITEM(ACE_bodyBag,3);
        MACRO_ADDITEM(SmokeShellBlue,5);
        MACRO_ADDITEM(Chemlight_blue,5);
    };
};

class GVAR(sanc_crate): GVAR(san_crate_base) {
    scope = 2;
    displayName = CSTRING(sanc_displayName);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\AmmoBox_signsC_CA.paa),
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };

    class TransportMagazines {
        MACRO_ADDMAGAZINE(kat_Painkiller,5);
        MACRO_ADDMAGAZINE(kat_Penthrox,5);
        MACRO_ADDMAGAZINE(kat_oxygenTank_150,2);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,100);
        MACRO_ADDITEM(ACE_packingBandage,100);
        MACRO_ADDITEM(ACE_tourniquet,25);

        MACRO_ADDITEM(kat_chestSeal,25);

        MACRO_ADDITEM(ACE_epinephrine,25);
        MACRO_ADDITEM(kat_epinephrineIV,25);
        MACRO_ADDITEM(kat_ketamine,10);
        MACRO_ADDITEM(kat_fentanyl,10);
        MACRO_ADDITEM(kat_naloxone,10);
        MACRO_ADDITEM(kat_lidocaine,10);
        MACRO_ADDITEM(kat_nitroglycerin, 10);
        MACRO_ADDITEM(kat_norepinephrine,10);
        MACRO_ADDITEM(kat_phenylephrine,10);
        MACRO_ADDITEM(kat_amiodarone,10);
        MACRO_ADDITEM(kat_atropine,10);

        MACRO_ADDITEM(kat_TXA,10);
        MACRO_ADDITEM(kat_EACA,20);

        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_suture,100);
        MACRO_ADDITEM(kat_aatKit,20);
        MACRO_ADDITEM(kat_BVM,2);
        MACRO_ADDITEM(kat_pocketBVM,3);
        MACRO_ADDITEM(kat_larynx,20);
        MACRO_ADDITEM(kat_IV_16,30);
        MACRO_ADDITEM(kat_IO_FAST,15);
        MACRO_ADDITEM(kat_Pulseoximeter,6);
        MACRO_ADDITEM(kat_X_AED,1);
        MACRO_ADDITEM(kat_accuvac,1);

        MACRO_ADDITEM(ACE_bloodIV,20);
        MACRO_ADDITEM(ACE_bloodIV_250,20);
        MACRO_ADDITEM(ACE_bloodIV_250,5);
        MACRO_ADDITEM(ACE_salineIV_250,2);

        MACRO_ADDITEM(kat_basicDiagnostic,1);
        MACRO_ADDITEM(ace_flags_blue,1);
        MACRO_ADDITEM(ACE_SpraypaintBlue,1);
        MACRO_ADDITEM(ACE_bodyBag,3);
        MACRO_ADDITEM(SmokeShellBlue,5);
        MACRO_ADDITEM(Chemlight_blue,5);
    };
};
