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

        class GVAR(basics_conduct): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(basics_conduct_displayName);
            description = CSTRING(basics_conduct_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/einsteigertaschenkarte'>Wiki</a>";
        };

        class GVAR(basics_radio): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(basics_radio_displayName);
            description = CSTRING(basics_radio_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/infanterie/gefechtstechniken-einzel/funken-kommunikation'>Wiki</a>";
        };

        class GVAR(basics_controls): GVAR(base) {
            logicalOrder = 3;
            displayName = CSTRING(basics_controls_displayName);
            description = CSTRING(basics_controls_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/einsteigertaschenkarte'>Wiki</a>";
        };

        class GVAR(farben): GVAR(base) {
            logicalOrder = 4;
            displayName = CSTRING(farben_displayName);
            description = CSTRING(farben_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/infanterie/gefechtstechniken-zug/farben'>Wiki</a>";
        };

        class GVAR(medical): GVAR(base) {
            logicalOrder = 5;
            displayName = CSTRING(medical_displayName);
            description = CSTRING(medical_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Gefechtstechniken-Einzel/ErsteHilfe'>Wiki</a>";
        };

        class GVAR(luftbeweglich): GVAR(base) {
            logicalOrder = 6;
            displayName = CSTRING(luftbeweglich_displayName);
            description = CSTRING(luftbeweglich_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Luftbewegliche-Infanterie'>Wiki</a>";
        };

        class GVAR(hubschrauber_inf): GVAR(base) {
            logicalOrder = 7;
            displayName = CSTRING(hubschrauber_inf_displayName);
            description = CSTRING(hubschrauber_inf_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/infanterie/luftbewegliche-infanterie/hubschrauber-fuer-infanteristen'>Wiki</a>";
        };

        class GVAR(konvoi): GVAR(base) {
            logicalOrder = 8;
            displayName = CSTRING(konvoi_displayName);
            description = CSTRING(konvoi_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/infanterie/gefechtstechniken-zug/konvoi'>Wiki</a>";
        };

        class GVAR(milan): GVAR(base) {
            logicalOrder = 9;
            displayName = CSTRING(milan_displayName);
            description = CSTRING(milan_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/ttt-a3/kompatibilit%%C3%%A4t/compat-rnt/milan'>Wiki</a>";
        };

        class GVAR(gramawa): GVAR(base) {
            logicalOrder = 10;
            displayName = CSTRING(gramawa_displayName);
            description = CSTRING(gramawa_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/ttt-a3/kompatibilit%%C3%%A4t/compat-rnt/gramawa'>Wiki</a>";
        };

        class GVAR(mg3): GVAR(base) {
            logicalOrder = 11;
            displayName = CSTRING(mg3_displayName);
            description = CSTRING(mg3_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/ttt-a3/kompatibilit%%C3%%A4t/compat-rnt/mg3-lafette'>Wiki</a>";
        };
    };

    class GVAR(armoured_warfare) {
        displayName = CSTRING(armoured_warfare_displayName);
        category = QGVAR(category);

        class GVAR(marder): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(marder_displayName);
            description = CSTRING(marder_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/ttt-a3/kompatibilit%%C3%%A4t/compat-rnt/marder'>Marder</a> | <a href='https://wiki.tacticalteam.de/de/ttt-a3/kompatibilit%%C3%%A4t/compat-rnt/milan'>Milan</a> | <a href='https://wiki.tacticalteam.de/de/handbuch/gepanzertekr%%C3%%A4fte/mechinf'>MechInf</a>";
        };

        class GVAR(puma): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(puma_displayName);
            description = CSTRING(puma_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/ttt-a3/kompatibilit%%C3%%A4t/compat-bwa3/puma'>Puma</a> | <a href='https://wiki.tacticalteam.de/de/handbuch/gepanzertekr%%C3%%A4fte/mechinf'>MechInf</a>";
        };
    };

    class GVAR(combat_support) {
        displayName = CSTRING(combat_support_displayName);
        category = QGVAR(category);

        class GVAR(cas_jtac): GVAR(base) {
            logicalOrder = 1;
            displayName = CSTRING(cas_jtac_displayName);
            description = CSTRING(cas_jtac_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Luftstreitkr%%C3%%A4fte/Close-Air-Support'>Wiki</a>";
        };

        class GVAR(fo_fdcb): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(fo_displayName);
            description = CSTRING(fo_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/FO'>FO</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Artillerie/FDCB'>FDCB</a> | <a href='https://artillerie.addi995.de/'>Artillerie-Rechner</a>";
        };

        class GVAR(scharfschuetzen): GVAR(base) {
            logicalOrder = 3;
            displayName = CSTRING(sniper_displayName);
            description = CSTRING(sniper_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Scharfsch%%C3%%BCtzen'>Wiki</a>";
        };

        class GVAR(pioniere_demin): GVAR(base) {
            logicalOrder = 4;
            displayName = CSTRING(pioniere_demin_displayName);
            description = CSTRING(pioniere_demin_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere'>Pioniere</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/Minensperre-%%C3%%B6ffnen'>Minensperre</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/Minen'>Minen</a>";
        };

        class GVAR(minensperre): GVAR(base) {
            logicalOrder = 5;
            displayName = CSTRING(minensperre_displayName);
            description = CSTRING(minensperre_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/pioniere/minensperre-anlegen'>Wiki</a>";
        };

        class GVAR(sprengen): GVAR(base) {
            logicalOrder = 6;
            displayName = CSTRING(sprengen_displayName);
            description = CSTRING(sprengen_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/pioniere/sprengen'>Wiki</a>";
        };

        class GVAR(pioniere_eod): GVAR(base) {
            logicalOrder = 7;
            displayName = CSTRING(pioniere_eod_displayName);
            description = CSTRING(pioniere_eod_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/Kampfmittelbeseitigung'>EOD</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/IEDs'>IEDs</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/Pioniere/Kampfmittelbeseitigung-erweitert'>IED erweitert</a>";
        };

        class GVAR(drohnen): GVAR(base) {
            logicalOrder = 8;
            displayName = CSTRING(drohnen_displayName);
            description = CSTRING(drohnen_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/kampfunterst%%C3%%BCtzungskr%%C3%%A4fte/drohnen'>Wiki</a>";
        };

        class GVAR(eloka): GVAR(base) {
            logicalOrder = 9;
            displayName = CSTRING(eloka_displayName);
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
            description = CSTRING(logistik_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Nachschubkr%%C3%%A4fte/Logistik'>Wiki</a>";
        };

        class GVAR(aussenlast): GVAR(base) {
            logicalOrder = 2;
            displayName = CSTRING(aussenlast_displayName);
            description = CSTRING(aussenlast_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/handbuch/luftstreitkr%%C3%%A4fte/au%%C3%%9Fenlast'>Wiki</a>";
        };
    };
};
