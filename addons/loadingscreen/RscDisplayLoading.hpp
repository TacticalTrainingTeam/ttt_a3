class RscDisplayLoading {
    onLoad = "['onLoad',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_missionLoad');";
    onUnload = "[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_missionLoad');";
    class controlsBackground {
        class CA_Vignette: RscVignette {
            colorText[] = {0,0,0,1};
        };
        class Map: RscPicture {
            idc = 999;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            colorText[] = {1,1,1,0.1};
            x = "safezoneX";
            y = "safezoneY - (safezoneW * 4/3) / 4";
            w = "safezoneW";
            h = "safezoneW * 4/3";
        };
        class Noise: RscPicture {
            idc = 102;
            text = "";
            colorText[] = {1,1,1,0.9};
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
        };
    };
};