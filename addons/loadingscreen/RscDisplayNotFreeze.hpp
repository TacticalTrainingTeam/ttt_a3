class RscDisplayNotFreeze: RscStandardDisplay {
    onLoad = "['onLoad',_this,'RscDisplayLoading','Loading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_missionLoad');";
    onUnload = "['onUnload',_this,'RscDisplayLoading','Loading'] call (uiNamespace getVariable 'ttt_loadingscreen_fnc_missionLoad')";
    scriptName = "RscDisplayLoading";
    scriptPath = "Loading";
    class controlsBackground {
        class CA_Vignette: RscVignette {
            colorText[] = {0,0,0,1};
        };
        class Map: RscPicture {
            idc = 999;
            text = "#(argb,8,8,3)color(1,0,0,1)";
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
    class controls {
        delete Title;
        delete Name;
        delete Briefing;
        delete Progress;
        delete Progress2;
        delete Date;
        delete Logo3DEN;
        delete Mission;
        delete Disclaimer;
        delete MapBackTop;
        delete MapName;
        delete ProgressNameMap;
        delete ProgressNameMission;
        delete MapAuthor;
        delete MapBackBottom;
        delete MapDescription;
        delete ProgressMap;
        delete ProgressMission;
        delete LoadingStart;
        class MapBackTop: RscText {
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            idc = 1000;
            h = "2.7 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {0,0,0,0};
        };
        class MapName: RscText {
            x = "safezoneX + 0.2 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            y = "safezoneY";
            w = "safezoneW - 0.4 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            idc = 1001;
            h = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class ProgressNameMap: RscStructuredText {
            style = 2;
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            class Attributes {
                size = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                align = "right";
            };
            idc = 2421;
            h = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class ProgressNameMission: RscStructuredText {
            style = 2;
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            class Attributes {
                size = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                align = "center";
            };
            idc = 2354;
            h = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class MapAuthor: RscText {
            x = "safezoneX + 0.2 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            y = "safezoneY + 1.3 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            font = "RobotoCondensedLight";
            idc = 1002;
            w = "16 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            colorText[] = {1,1,1,0.5};
            sizeEx = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class MapBackBottom: RscText {
            x = "safezoneX";
            y = "safezoneY + safezoneH - 2 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "safezoneW";
            idc = 1003;
            h = "2 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {0,0,0,0};
        };
        class MapDescription: RscStructuredText {
            style = 2;
            x = 0;
            y = "safezoneY + safezoneH - 1.75 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = 1;
            class Attributes {
                size = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                align = "center";
            };
            idc = 1102;
            h = "1.75 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class ProgressMap: RscProgress {};
        class ProgressMission: ProgressMap {
            idc = 1013;
            x = "1.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "10 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "16 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.2 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class LoadingStart: RscControlsGroup {
            idc = 2310;
            x = "0 * safezoneW + safezoneX";
            y = "0 * safezoneH + safezoneY";
            w = "1 * safezoneW";
            h = "1 * safezoneH";
            class controls {
                class Black: RscText {
                    idc = 1000;
                    x = "0 * safezoneW";
                    y = "0 * safezoneH";
                    w = "1 * safezoneW";
                    h = "1 * safezoneH";
                    colorBackground[] = {0,0,0,1};
                };
                class Noise: RscPicture {
                    idc = 1201;
                    text = "";
                    x = "0 * safezoneW";
                    y = "0 * safezoneH";
                    w = "1 * safezoneW";
                    h = "1 * safezoneH";
                };
            };
        };
    };
    class control {
        delete Progress2;
        delete Name;
        delete Date;
        delete Title;
        delete Progress;
        delete Briefing;
        delete Text;
        delete Logo3DEN;
        delete Mission;
        delete Disclaimer;
        delete MapBackTop;
        delete MapName;
        delete ProgressNameMap;
        delete ProgressNameMission;
        delete MapAuthor;
        delete MapBackBottom;
        delete MapDescription;
        delete ProgressMap;
        delete ProgressMission;
        delete LoadingStart;
        
        class MapBackTop: RscText {
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            idc = 1000;
            h = "2.7 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {0,0,0,0};
        };
        class MapName: RscText {
            x = "safezoneX + 0.2 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            y = "safezoneY";
            w = "safezoneW - 0.4 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            idc = 1001;
            h = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class MapBackBottom: RscText {
            x = "safezoneX";
            y = "safezoneY + safezoneH - 2 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "safezoneW";
            idc = 1003;
            h = "2 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {0,0,0,0};
        };
        class MapDescription: RscStructuredText {
            style = 2;
            x = 0;
            y = "safezoneY + safezoneH - 1.75 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = 1;
            class Attributes {
                size = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                align = "center";
            };
            idc = 1102;
            h = "1.75 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class ProgressMap: RscProgress {};
        class ProgressMission: ProgressMap {
            idc = 1013;
            x = "1.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "10 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "16 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.2 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class LoadingStart: RscControlsGroup {
            idc = 2310;
            x = "0 * safezoneW + safezoneX";
            y = "0 * safezoneH + safezoneY";
            w = "1 * safezoneW";
            h = "1 * safezoneH";
            class controls {
                class Black: RscText {
                    idc = 1000;
                    x = "0 * safezoneW";
                    y = "0 * safezoneH";
                    w = "1 * safezoneW";
                    h = "1 * safezoneH";
                    colorBackground[] = {0,0,0,1};
                };
                class Noise: RscPicture {
                    idc = 1201;
                    text = "";
                    x = "0 * safezoneW";
                    y = "0 * safezoneH";
                    w = "1 * safezoneW";
                    h = "1 * safezoneH";
                };
            };
        };
    };
};