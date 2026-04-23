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
    };
};
