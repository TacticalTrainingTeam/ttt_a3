class CfgWeapons {

	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB : H_HelmetB_plain_mcamo { class ItemInfo; };
	class H_HelmetCrew_I;

	class TTT_Helmet_Base : H_HelmetSpecB {
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
		picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_1_bw_tropentarn.paa" };
		scope = 0;

		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo" };
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			allowedSlots[] = {605,701,901};
		};
	};

	class TTT_Helmet_Buzzard : TTT_Helmet_Base {
		author = "Tactical Training Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "Helikopter Helm Bussard";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_buzzard.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Hawk : TTT_Helmet_Base {
		author = "Tactical Training Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "Helikopter Helm Habicht";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_buzzard.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Falcon : TTT_Helmet_Base {
		author = "Tactical Training Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "Helikopter Helm Falke";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_falcon.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Eagle : TTT_Helmet_Base {
		author = "Tactical Training Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "Helikopter Helm Adler";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_eagle.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "Tactical Training Team";
		displayName = "TTT Fahrzeugcrew";
	};

	class TTT_Helmet_Bronze_Vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "Tactical Training Team";
		displayName = "TTT Fahrzeugcrew (Bronze)";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_bronze_vehiclecrew.paa" };
	};

	class TTT_Helmet_Grey_Vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "Tactical Training Team";
		displayName = "TTT Fahrzeugcrew (Grau)";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_grey_vehiclecrew.paa" };
	};

	class TTT_Helmet_Silver_Vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "Tactical Training Team";
		displayName = "TTT Fahrzeugcrew (Silber)";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_silver_vehiclecrew.paa" };
	};

	class TTT_Helmet_Yellow_Vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "Tactical Training Team";
		displayName = "TTT Fahrzeugcrew (Gelb)";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_yellow_vehiclecrew.paa" };
	};

    class TTT_Helmet_Old_Vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "Tactical Training Team ";
		displayName = "TTT Fahrzeugcrew (alt)";
		hiddenSelectionsTextures[] = { "z\ttt\addons\helmets\data\TTT_helmet_Old_vehiclecrew.paa" };
	};

class TTT_Helmet_1_US_Desert : TTT_Helmet_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Helm I (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_1_us_desert.paa"};
	};
	
	class TTT_Helmet_2_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm II (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_2_us_desert.paa"};
	};
	
	class TTT_Helmet_3_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm III (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_3_us_desert.paa"};
	};
	
	class TTT_Helmet_4_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm IV (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_4_us_desert.paa"};
	};
	
	class TTT_Helmet_5_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm V (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_5_us_desert.paa"};
	};
	
	class TTT_Helmet_6_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm VI (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_6_us_desert.paa"};
	};
	
	class TTT_Helmet_7_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm VII (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_7_us_desert.paa"};
	};
	
	class TTT_Helmet_8_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm VIII (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_8_us_desert.paa"};
	};

	class TTT_Helmet_9_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm IX (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_9_us_desert.paa"};
	};

	class TTT_Helmet_10_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm X (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_10_us_desert.paa"};
	};

	class TTT_Helmet_11_US_Desert : TTT_Helmet_1_US_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Helm XI (US Desert)";
		hiddenSelectionsTextures[] = {"z\ttt\addons\helmets\data\TTT_helmet_11_us_desert.paa"};
	};
};