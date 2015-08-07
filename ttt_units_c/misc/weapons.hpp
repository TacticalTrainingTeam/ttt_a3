	
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
	class TTT_Uniform_Base : Uniform_Base {
		scope = 0;
		displayName = "TTT Uniform Base";
		picture = "\ttt_units\misc\TTT_preview_icon.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
		
		class TTT_Uniform_ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "TTT_Base_Base";
			containerClass = "Supply60";
			mass = 40;
		};
		
		class ItemInfo : TTT_Uniform_ItemInfo {};
	};
	
	/*
	#############################################################
	### Helme
	#############################################################
	*/
	class TTT_Helmet_Base : ItemCore {
		hiddenSelectionsTextures[] = {"\ttt_units\bw\tropentarn\TTT_helmet_1_tropentarn.paa"};
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
		picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"Camo"};
		weaponPoolAvailable = 1;
		scope = 0;		
		
		class TTT_Helmet_ItemInfo_Base : HeadgearItem {
			mass = 100;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[] = {3, 1};
			armor = 1.5;
			passThrough = 0.8;
			hiddenSelections[] = {"Camo"};
		};
		
		class ItemInfo : TTT_Helmet_ItemInfo_Base {};
	};
		
	class TTT_Helmet_Buzzard : TTT_Helmet_Base {
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "TTT Helm Bussard";
		hiddenSelectionsTextures[] = {"\ttt_units\misc\TTT_helmet_buzzard.paa"};
		scope = 2;
		
		class ItemInfo : TTT_Helmet_ItemInfo_Base {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};
	
	class TTT_Helmet_Falcon : TTT_Helmet_Base {
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "TTT Helm Falke";
		hiddenSelectionsTextures[] = {"\ttt_units\misc\TTT_helmet_falcon.paa"};
		scope = 2;
		
		class ItemInfo : TTT_Helmet_ItemInfo_Base {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};
	
	class TTT_Helmet_Eagle : TTT_Helmet_Base {
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "TTT Helm Adler";
		hiddenSelectionsTextures[] = {"\ttt_units\misc\TTT_helmet_eagle.paa"};
		scope = 2;
		
		class ItemInfo : TTT_Helmet_ItemInfo_Base {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};
	
	
	/*
	#############################################################
	### Westen
	#############################################################
	*/	
	
	class TTT_Heavy_Vest_Base : V_PlateCarrier3_rgr {
		scope = 0;
		displayName = "TTT Heavy Vest Base";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\vests\vest_yellow_co.paa"};
		class ItemInfo : VestItem {
			UniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply140";
			mass = 100;
			armor = 30;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class TTT_Lite_Vest_Base : V_PlateCarrier1_rgr {
		scope = 0;
		displayName = "TTT Lite Vest Base";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\vests\vest_yellow_co.paa"};
		
		class ItemInfo : VestItem {
			UniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply150";
			mass= 50;
			armor= 60;
			passThrough= 0.3;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class TTT_Crew_Vest_Base : V_TacVest_brn {
		scope = 2;
		displayName = "TTT Crew Vest";
	};