//display change
class RscStandardDisplay;
class RscPicture;
class RscVignette;

class RscDisplayLoadMission: RscStandardDisplay {
    //QUOTE([ARR_3(_this,'example.com','2302')] call (uiNamespace getVariable QQFUNC(join)));.
    onLoad = QUOTE([ARR_3('onload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onLoad="['onload', _this,'RscDisplayLoading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";
    onUnload = QUOTE([ARR_3('onUnload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onUnload="[""onUnload"", _this,""RscDisplayLoading""] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";

    class controlsBackground {
        class CA_Vignette: RscVignette {
            colorText[]={0,0,0,1};
        };

        class Map: RscPicture {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };

        class Noise: RscPicture {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};

class RscDisplayLoading {
    //QUOTE([ARR_3(_this,'example.com','2302')] call (uiNamespace getVariable QQFUNC(join)));.
    onload = QUOTE([ARR_3('onload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onLoad="['onload', _this,'RscDisplayLoading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";
    onUnload = QUOTE([ARR_3('onUnload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onUnload="[""onUnload"", _this,""RscDisplayLoading""] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";

    class controlsBackground {
        class CA_Vignette: RscVignette {
            colorText[]={0,0,0,1};
        };

        class Map: RscPicture {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };
        
        class Noise: RscPicture {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};

class RscDisplayNotFreeze: RscStandardDisplay {
    //QUOTE([ARR_3(_this,'example.com','2302')] call (uiNamespace getVariable QQFUNC(join)));.
    onload = QUOTE([ARR_3('onload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onLoad="['onload', _this,'RscDisplayLoading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";
    onUnload = QUOTE([ARR_3('onUnload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onUnload="[""onUnload"", _this,""RscDisplayLoading""] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";

    class controlsBackground {
        class CA_Vignette: RscVignette {
            colorText[]={0,0,0,1};
        };

        class Map: RscPicture {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };

        class Noise: RscPicture {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};

class RscDisplayLoadCustom: RscDisplayLoadMission {
    //QUOTE([ARR_3(_this,'example.com','2302')] call (uiNamespace getVariable QQFUNC(join)));.
    onload = QUOTE([ARR_3('onload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onLoad="['onload', _this,'RscDisplayLoading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";
    onUnload = QUOTE([ARR_3('onUnload',_this,'RscDisplayLoading')] call (uiNamespace getVariable QQFUNC(load)));
    //onUnload="[""onUnload"", _this,""RscDisplayLoading""] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_load')";

    class controlsBackground {
        class CA_Vignette: RscVignette {
            colorText[]={0,0,0,1};
        };

        class Map: RscPicture {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };

        class Noise: RscPicture {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};
