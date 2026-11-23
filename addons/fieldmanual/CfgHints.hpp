//%2 Bullet Point
//%3 Highlight Start
//%4 Highlight Ende
//&lt;br/&gt; Zeilenumbruch
//%11 Indent
//&lt;t color='#D9D900'&gt;Average&lt;/t&gt; Color

#define BASE_ARGUMENTS "'    '"

class CfgHints {
    class GVAR(base) {
        tip = ECSTRING(main,url);
        arguments[] = {BASE_ARGUMENTS};
        image = QPATHTOEF(common,data\ttt_logo_co.paa);
    };

    class GVAR(infantry) {
        displayName = CSTRING(infantry_displayName);
        category = QGVAR(category);

        class GVAR(basics_radio): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(basics_radio_displayName);
            displayNameShort = CSTRING(basics_radio_displayNameShort);
            description = CSTRING(basics_radio_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/einsteigertaschenkarte'>Wiki</a>";
        };

        class GVAR(basics_conduct): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(basics_conduct_displayName);
            displayNameShort = CSTRING(basics_conduct_displayNameShort);
            description = CSTRING(basics_conduct_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/einsteigertaschenkarte'>Wiki</a>";
        };

        class GVAR(basics_controls): GVAR(base) {
            logicalOrder = 3;
            displayName = CSTRING(basics_controls_displayName);
            displayNameShort = CSTRING(basics_controls_displayNameShort);
            description = CSTRING(basics_controls_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/einsteigertaschenkarte'>Wiki</a>";
        };

        class GVAR(medical): GVAR(base) {
            logicalOrder = 4;
            displayName = CSTRING(medical_displayName);
            displayNameShort = CSTRING(medical_displayNameShort);
            description = CSTRING(medical_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Gefechtstechniken-Einzel/ErsteHilfe'>Wiki</a>";
        };

        class GVAR(luftbeweglich): GVAR(base) {
            logicalOrder = 5;
            displayName = CSTRING(luftbeweglich_displayName);
            displayNameShort = CSTRING(luftbeweglich_displayNameShort);
            description = CSTRING(luftbeweglich_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Luftbewegliche-Infanterie'>Wiki</a>";
        };

        class GVAR(hubschrauber_inf): GVAR(base) {
            logicalOrder = 6;
            displayName = CSTRING(hubschrauber_inf_displayName);
            displayNameShort = CSTRING(hubschrauber_inf_displayNameShort);
            description = CSTRING(hubschrauber_inf_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Luftbewegliche-Infanterie/Hubschrauber_Fuer_Infanteristen'>Wiki</a>";
        };
    };

    class GVAR(medical_service) {
        displayName = CSTRING(medical_service_displayName);
        category = QGVAR(category);

        class GVAR(medic_bravo): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(medic_bravo_displayName);
            displayNameShort = CSTRING(medic_bravo_displayNameShort);
            description = CSTRING(medic_bravo_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/nachschubkr%%C3%%A4fte/sanit%%C3%%A4tssystem'>Wiki</a>";
        };

        class GVAR(medic_charlie): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(medic_charlie_displayName);
            displayNameShort = CSTRING(medic_charlie_displayNameShort);
            description = CSTRING(medic_charlie_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/nachschubkr%%C3%%A4fte/sanit%%C3%%A4tssystem'>Wiki</a>";
        };
    };

    class GVAR(armoured_warfare) {
        displayName = CSTRING(armoured_warfare_displayName);
        category = QGVAR(category);
    };

    class GVAR(combat_support) {
        displayName = CSTRING(combat_support_displayName);
        category = QGVAR(category);

        class GVAR(cas_jtac): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(cas_jtac_displayName);
            displayNameShort = CSTRING(cas_jtac_displayNameShort);
            description = CSTRING(cas_jtac_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Luftstreitkr%%C3%%A4fte/Close-Air-Support'>Wiki</a>";
        };

        class GVAR(fo_fdcb): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(fo_displayName);
            displayNameShort = CSTRING(fo_displayNameShort);
            description = CSTRING(fo_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/FO'>FO</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Artillerie/FDCB'>FDCB</a> | <a href='https://artillerie.addi995.de/'>Artillerie-Rechner</a>";
        };

        class GVAR(scharfschuetzen): GVAR(base) {
            logicalOrder = 3;
            displayName = CSTRING(sniper_displayName);
            displayNameShort = CSTRING(sniper_displayNameShort);
            description = CSTRING(sniper_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Scharfsch%%C3%%BCtzen'>Wiki</a>";
        };

        class GVAR(pioniere_demin): GVAR(base) {
            logicalOrder = 4;
            displayName = CSTRING(pioniere_demin_displayName);
            displayNameShort = CSTRING(pioniere_demin_displayNameShort);
            description = CSTRING(pioniere_demin_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere'>Pioniere</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/Kampfmittelbeseitigung'>EOD</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/Minensperre-%%C3%%B6ffnen'>Minensperre</a>";
        };

        class GVAR(eloka): GVAR(base) {
            logicalOrder = 5;
            displayName = CSTRING(eloka_displayName);
            displayNameShort = CSTRING(eloka_displayNameShort);
            description = CSTRING(eloka_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/elektronische-kampff%%C3%%BChrung'>Wiki</a>";
        };
    };

    class GVAR(logistics) {
        displayName = CSTRING(logistics_displayName);
        category = QGVAR(category);

        class GVAR(logistik): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(logistik_displayName);
            displayNameShort = CSTRING(logistik_displayNameShort);
            description = CSTRING(logistik_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Nachschubkr%%C3%%A4fte/Logistik'>Wiki</a>";
        };
    };
};
