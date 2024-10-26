class CfgWeapons {

    class Vest_NoCamo_Base;

    class V_PlateCarrier3_rgr : Vest_NoCamo_Base { class ItemInfo; };	
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base { class ItemInfo; };
	
	class TTT_Vest_Heavy_Base : V_PlateCarrier3_rgr {
		scope = 0;
		displayName = "TTT Veste Basis (Schwer)";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "z\ttt\addons\vests\data\vest_yellow_co.paa" };

		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo" };
		};
	};

	class TTT_Vest_Lite_Base : V_PlateCarrier1_rgr {
		scope = 0;
		displayName = "TTT Veste Basis (Leicht)";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "z\ttt\addons\vests\data\vest_yellow_co.paa" };

		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo" };
		};
	};

    class TTT_Vest_Heavy_Yellow_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Gelb (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_yellow_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Yellow_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Gelb (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_yellow_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Blue_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Blau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_blue_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Blue_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Blau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_blue_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Black_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Schwarz (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_black_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Black_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Schwarz (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_black_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Brown_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Braun (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_brown_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Brown_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Braun (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_brown_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Gold_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Gold (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_gold_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Gold_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Gold (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_gold_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Green_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Gruen (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_green_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Green_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Gruen (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_green_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Grey_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Grau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_grey_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Grey_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Grau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_grey_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Red_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Rot (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_red_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Red_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Rot (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_red_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Violet_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Violett (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_violet_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Violet_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Violett (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_violet_us_desert_co.paa"};
	};

	class TTT_Vest_Heavy_Orange_US_Desert : TTT_Vest_Heavy_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Schwere Weste Orange (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_orange_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Orange_US_Desert : TTT_Vest_Lite_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Leichte Weste Orange (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_orange_us_desert_co.paa"};
	}; 	
	
	class V_TacVest_brn;
	
	class TTT_Vest_Crew_Base : V_TacVest_brn {
		scope = 0;
		displayName = "TTT Crew Veste Basis";
	};

    class TTT_Vest_Crew_US_Desert : TTT_Vest_Crew_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Crew Weste (US Desert)";
	};
	
	class TTT_Vest_Crew_Bronze : TTT_Vest_Crew_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Crew Weste Bronze";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_bronze_co.paa"};
	};
	
	class TTT_Vest_Crew_Silver : TTT_Vest_Crew_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Crew Weste Silber";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_silver_co.paa"};
	};
	
	class TTT_Vest_Crew_White : TTT_Vest_Crew_Base {
		author = "TacticalTrainingTeam";
		scope = 2;
		displayName = "TTT Crew Weste Weiss";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\vests\data\TTT_vest_white_co.paa"};
	};

};