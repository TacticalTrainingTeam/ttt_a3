//display change
class RscStandardDisplay;
class RscPicture;
class RscVignette;

class RscDisplayLoadMission: RscStandardDisplay {
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

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
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

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
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

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
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

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
