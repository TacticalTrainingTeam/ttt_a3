class GVAR(handbookDisplay) {
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = QUOTE(_this call FUNC(onHandbookLoad));

    class controls {
        class Browser {
            idc = IDC_HANDBOOK_BROWSER;
            type = 106; // CT_WEBBROWSER
            style = 0;
            colorBackground[] = {0, 0, 0, 0};
            colorText[] = {1, 1, 1, 1};
            allowExternalURL = 0;
            url = QPATHTOF(ui\handbook.html);
            x = "safeZoneX + safeZoneW * 0.1";
            y = "safeZoneY + safeZoneH * 0.06";
            w = "safeZoneW * 0.8";
            h = "safeZoneH * 0.88";
        };
    };
};
