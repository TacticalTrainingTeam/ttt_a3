class CfgWeapons {
	//Helicopter
	class H_HelmetB;
	class H_CrewHelmetHeli_B : H_HelmetB { class ItemInfo; };
	class TTT_Helmet_Pilot : H_CrewHelmetHeli_B {
		author = QUOTE(Tactical Training Team);
		displayName = QUOTE(Helikopter Helm Base);
		scope = 0;

		class ItemInfo : ItemInfo {
			//allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
			allowedSlots[] = {605,701,901}; 
		};
	};

	class TTT_Helmet_Buzzard : TTT_Helmet_Pilot {
		scope = 2;
		displayName = CSTRING(STR_TTT_helmets_buzzard_displayName);
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_buzzard.paa)};
	};

	class TTT_Helmet_Hawk : TTT_Helmet_Buzzard {
		displayName = QUOTE(Helikopter Helm Habicht);
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_buzzard.paa)};
	};

	class TTT_Helmet_Falcon : TTT_Helmet_Buzzard {
		displayName = QUOTE(Helikopter Helm Falke);
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_falcon.paa)};
	};

	class TTT_Helmet_Eagle : TTT_Helmet_Buzzard {
		displayName = QUOTE(Helikopter Helm Adler);
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_eagle.paa)};
	};

	//Crew
	class H_HelmetCrew_I;
	class TTT_Helmet_Vehiclecrew : H_HelmetCrew_I {
		author = QUOTE(Tactical Training Team);
		displayName = QUOTE(TTT Fahrzeugcrew);
		scope = 0;
	};

	class TTT_Helmet_Bronze_Vehiclecrew : H_HelmetCrew_I {
		displayName = QUOTE(TTT Fahrzeugcrew (Bronze));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_bronze_vehiclecrew.paa)};
		scope = 2;
	};

	class TTT_Helmet_Grey_Vehiclecrew : TTT_Helmet_Bronze_Vehiclecrew {
		displayName = QUOTE(TTT Fahrzeugcrew (Grau));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_grey_vehiclecrew.paa)};
	};

	class TTT_Helmet_Silver_Vehiclecrew : TTT_Helmet_Bronze_Vehiclecrew {
		displayName = QUOTE(TTT Fahrzeugcrew (Silber));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_silver_vehiclecrew.paa)};
	};

	class TTT_Helmet_Yellow_Vehiclecrew : TTT_Helmet_Bronze_Vehiclecrew {
		displayName = QUOTE(TTT Fahrzeugcrew (Gelb));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_yellow_vehiclecrew.paa)};
	};

    class TTT_Helmet_Old_Vehiclecrew : TTT_Helmet_Bronze_Vehiclecrew {
		displayName = QUOTE(TTT Fahrzeugcrew (alt));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_Old_vehiclecrew.paa)};
	};

	//Infanterie Helme
	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB : H_HelmetB_plain_mcamo { class ItemInfo; };
	class TTT_Helmet_Base : H_HelmetSpecB {
		author = QUOTE(Tactical Training Team);
		scope = 0;
		model = QUOTE(\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d);

		class ItemInfo : ItemInfo {
			//allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
			allowedSlots[] = {605,701,901};
			uniformModel = QUOTE(\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d);
 		};
	};

	//US Desert
	class TTT_Helmet_1_US_Desert : TTT_Helmet_Base {
		scope = 2;
		displayName = QUOTE(TTT Helm I (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_1_us_desert.paa)};
	};
	class TTT_Helmet_2_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm II (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_2_us_desert.paa)};
	};
	class TTT_Helmet_3_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm III (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_3_us_desert.paa)};
	};
	class TTT_Helmet_4_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm IV (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_4_us_desert.paa)};
	};
	class TTT_Helmet_5_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm V (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_5_us_desert.paa)};
	};
	class TTT_Helmet_6_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm VI (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_6_us_desert.paa)};
	};
	class TTT_Helmet_7_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm VII (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_7_us_desert.paa)};
	};
	class TTT_Helmet_8_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm VIII (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_8_us_desert.paa)};
	};
	class TTT_Helmet_9_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm IX (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_9_us_desert.paa)};
	};
	class TTT_Helmet_10_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm X (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_10_us_desert.paa)};
	};
	class TTT_Helmet_11_US_Desert : TTT_Helmet_1_US_Desert {
		displayName = QUOTE(TTT Helm XI (US Desert));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_11_us_desert.paa)};
	};

	//Flecktarn
	class TTT_Helmet_1_BW_Flecktarn : TTT_Helmet_Base {
		scope = 2;
		displayName = QUOTE(TTT Helm I (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_1_bw_flecktarn.paa)};
	};
	class TTT_Helmet_2_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm II (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_2_bw_flecktarn.paa)};
	};
	class TTT_Helmet_3_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm III (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_3_bw_flecktarn.paa)};
	};
	class TTT_Helmet_4_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm IV (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_4_bw_flecktarn.paa)};
	};
	class TTT_Helmet_5_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm V (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_5_bw_flecktarn.paa)};
	};
	class TTT_Helmet_6_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm VI (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_6_bw_flecktarn.paa)};
	};
	class TTT_Helmet_7_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm VII (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_7_bw_flecktarn.paa)};
	};
	class TTT_Helmet_8_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName =QUOTE(TTT Helm VIII (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_8_bw_flecktarn.paa)};
	};
	class TTT_Helmet_9_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm IX (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_9_bw_flecktarn.paa)};
	};
	class TTT_Helmet_10_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm X (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_10_bw_flecktarn.paa)};
	};
	class TTT_Helmet_11_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		displayName = QUOTE(TTT Helm XI (BW Flecktarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_11_bw_flecktarn.paa)};
	};

	//BW Tropen
	class TTT_Helmet_1_BW_Tropentarn : TTT_Helmet_Base {
		scope = 2;
		displayName = QUOTE(TTT Helm I (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_1_bw_tropentarn.paa)};
	};
	class TTT_Helmet_2_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm II (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_2_bw_tropentarn.paa)};
	};
	class TTT_Helmet_3_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm III (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_3_bw_tropentarn.paa)};
	};
	class TTT_Helmet_4_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm IV (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_4_bw_tropentarn.paa)};
	};
	class TTT_Helmet_5_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm V (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_5_bw_tropentarn.paa)};
	};
	class TTT_Helmet_6_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm VI (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_6_bw_tropentarn.paa)};
	};
	class TTT_Helmet_7_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm VII (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_7_bw_tropentarn.paa)};
	};
	class TTT_Helmet_8_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm VIII (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_8_bw_tropentarn.paa)};
	};
	class TTT_Helmet_9_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm IX (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_9_bw_tropentarn.paa)};
	};
	class TTT_Helmet_10_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm X (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_10_bw_tropentarn.paa)};
	};
	class TTT_Helmet_11_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		displayName = QUOTE(TTT Helm XI (BW Tropentarn));
		hiddenSelectionsTextures[] = {QPATHTOF(data\TTT_helmet_11_bw_tropentarn.paa)};
	};
};