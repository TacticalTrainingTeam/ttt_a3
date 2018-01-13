class CfgPatches {
	class TTT_Main {
		author = "$STR_Tactical_Training_Team";
		name = "Tactical Training Team Modification - Main Configuration";
		url = "https://www.tacticalteam.de";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class Mod_Base;
	class TTT: Mod_Base
	{
		//artwork = "";
		picture = "\ttt_a3\ttt_main\ui\TTT_logo_ca.paa";
		logo = "\ttt_a3\ttt_main\ui\TTT_logo_ca.paa";
		logoOver = "\ttt_a3\ttt_main\ui\TTT_logo_ca.paa";
		logoSmall = "\ttt_a3\ttt_main\ui\TTT_logo_small_ca.paa";
		//logoTitle = "";
		//video = "";
		tooltip = "$STR_TTT_CfgMods_1";
		tooltipOwned = "$STR_TTT_CfgMods_2";
		action = "https://www.tacticalteam.de";
		//fieldManualTopicAndHint[] = {"PremiumContent"};
		dlcColor[] = {0.35,0.35,0.1,1};
		overview = "$STR_TTT_CfgMods_3";
		//appId = 332350;
		hideName = 1;
		hidePicture = 0;
		name = "$STR_TTT_CfgMods_4";
		nameShort = "TTT Mod";
		author = "$STR_Tactical_Training_Team";
		//overviewPicture = "\A3\Data_F_Mark\Images\Mark_overviewPicture_co.paa";
		overviewText = "$STR_TTT_CfgMods_3";
		//contentBrowserPicture = "\A3\Data_F_Mark\Images\mark_contentBrowserPicture_co.paa";
		//popupMsgPicture = "\A3\Data_F_Mark\Images\Mark_popupImage_01_ca.paa";
		popupMsgText = "$STR_TTT_CfgMods_popupMsgText";
		vehPrevMsgText = "$STR_TTT_CfgMods_5";
		//vehPrevNotifText = "$STR_TTT_CfgMods_6";
		//itemPrevNotifText = "$STR_A3_DLC_PREMIUM_ITEM_NOTIFICATION_MARK_TEXT";
		//dronePrevNotifText = "$STR_A3_CFGMODS_DRONEPREVNOTIFTEXT_MARK";
		//weaponPrevMsgText = "$STR_A3_WEAPONPREVMSG_MARK";
		//overviewFootnote = "$STR_A3_CFGMODS_OVERVIEWFOOTNOTE_MARK";
		dir = "@ttt_a3";
	};
};

class CfgFactionClasses {
	class TTT_Faction_BW {
		icon = "\ttt_a3\ttt_main\ui\TTT_logo_small_ca.paa";
		displayName = "$STR_TTT_Faction_BW";
		priority = 1;
		side = 1;
	};
	class TTT_Faction_US {
		icon = "\ttt_a3\ttt_main\ui\TTT_logo_small_ca.paa";
		displayName = "$STR_TTT_Faction_US";
		priority = 2;
		side = 1;
	};
	class TTT_Faction_PMC {
		icon = "\ttt_a3\ttt_main\ui\TTT_logo_small_ca.paa";
		displayName = "$STR_TTT_Faction_PMC";
		priority = 3;
		side = 1;
	};	
};