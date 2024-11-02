class CfgPatches {
	class RP {
		units[] = {};
		weapons[] = {};
		author[] = {"V1irus, Menom"};
		requiredAddons[] = {"Extended_EventHandlers"};
	};
};

class CfgFunctions {
	class pre_RP {
		tag = "RP";
		class init {
			class check_RP {
				file = "\discordrichpresence\update.sqf";
				preInit = 1;
			};
		};
	};
};

class Cfgdiscordrichpresence {
    applicationID="919991023218868235";             // Provided by discord
    defaultDetails="";            // Upper text
    defaultState="";              // Lower text
    defaultLargeImageKey="ttt_logo";      // Large image
    defaultLargeImageText="tacticalteam.de - Arma 3";     // Large image hover text
    defaultSmallImageKey="";      // Small image
    defaultSmallImageText="";     // Small image hover text
    defaultButtons[]={};          // Button texts and urls
    useTimeElapsed=1;             // Show time elapsed since the player connected (1 - true, 0 - false)
};
