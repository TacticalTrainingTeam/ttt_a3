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
};