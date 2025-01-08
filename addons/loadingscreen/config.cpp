#include "BIS_AddonInfo.hpp"

class CfgPatches {
    class loadingscreen {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"BadKneeGrow", "Menom [TTT]"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"A3_Data_F"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};


class CfgFunctions {
	class full_mission_load {
		class functions {
			file = "\full_mission_load\functions";
			class load {};
		};
	};
};

//display change
class RscStandardDisplay;
class RscPicture;
class RscVignette;

class RscDisplayLoadMission: RscStandardDisplay
{
	onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
	onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
			colorText[]={1,1,1,0.3};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
};
class RscDisplayLoading
{
	onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
	onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
			colorText[]={1,1,1,0.3};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
	onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
			colorText[]={1,1,1,0.3};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};

};
class RscDisplayLoadCustom: RscDisplayLoadMission
{
	onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
	onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
			colorText[]={1,1,1,0.3};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
};
