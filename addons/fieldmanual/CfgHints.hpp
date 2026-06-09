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

    class GVAR(handbuch) {
        displayName = CSTRING(handbuch_displayname);
        category = QGVAR(category);

        class GVAR(medical): GVAR(base) {
            logicalOrder = 99;
            displayName = CSTRING(medical_displayName);
            displayNameShort = CSTRING(medical_displayNameShort);
            description = CSTRING(medical_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Gefechtstechniken-Einzel/ErsteHilfe'>Wiki</a>";
        };

        class GVAR(cas_jtac): GVAR(base) {
            logicalOrder = 100;
            displayName = CSTRING(cas_jtac_displayName);
            displayNameShort = CSTRING(cas_jtac_displayNameShort);
            description = CSTRING(cas_jtac_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Luftstreitkr%C3%A4fte/Close-Air-Support'>Wiki</a>";
        };

        class GVAR(fo_fdcb): GVAR(base) {
            logicalOrder = 101;
            displayName = CSTRING(fo_displayName);
            displayNameShort = CSTRING(fo_displayNameShort);
            description = CSTRING(fo_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/FO'>FO</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Artillerie/FDCB'>FDCB</a>";
        };

        class GVAR(scharfschuetzen): GVAR(base) {
            logicalOrder = 102;
            displayName = CSTRING(sniper_displayName);
            displayNameShort = CSTRING(sniper_displayNameShort);
            description = CSTRING(sniper_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Scharfsch%C3%BCtzen'>Wiki</a>";
        };

        class GVAR(pioniere_demin): GVAR(base) {
            logicalOrder = 103;
            displayName = CSTRING(pioniere_demin_displayName);
            displayNameShort = CSTRING(pioniere_demin_displayNameShort);
            description = CSTRING(pioniere_demin_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Pioniere'>Pioniere</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Pioniere/Kampfmittelbeseitigung'>EOD</a> | <a href='https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Pioniere/Minensperre-%C3%B6ffnen'>Minensperre</a>";
        };

        class GVAR(logistik): GVAR(base) {
            logicalOrder = 104;
            displayName = CSTRING(logistik_displayName);
            displayNameShort = CSTRING(logistik_displayNameShort);
            description = CSTRING(logistik_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Nachschubkr%C3%A4fte/Logistik'>Wiki</a>";
        };

        class GVAR(luftbeweglich): GVAR(base) {
            logicalOrder = 105;
            displayName = CSTRING(luftbeweglich_displayName);
            displayNameShort = CSTRING(luftbeweglich_displayNameShort);
            description = CSTRING(luftbeweglich_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Luftbewegliche-Infanterie'>Wiki</a>";
        };

        class GVAR(hubschrauber_inf): GVAR(base) {
            logicalOrder = 106;
            displayName = CSTRING(hubschrauber_inf_displayName);
            displayNameShort = CSTRING(hubschrauber_inf_displayNameShort);
            description = CSTRING(hubschrauber_inf_description);
            tip = "<a href='https://wiki.tacticalteam.de/de/Handbuch/Infanterie/Luftbewegliche-Infanterie/Hubschrauber_Fuer_Infanteristen'>Wiki</a>";
        };
    };
};
