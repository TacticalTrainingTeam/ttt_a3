	/*
	#############################################################
	### Logistik-Kisten
	#############################################################
	*/
	
	class TTT_Crate_Weapons_BW : Box_NATO_Wps_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Waffen (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
			weap_xx(BWA3_G36_equipped,4);
			weap_xx(BWA3_MG5_Tan_equipped,1);
			weap_xx(BWA3_MG4_equipped,2);
			weap_xx(BWA3_G36_AG_equipped,2);
		};
		
		class TransportBackpacks{
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Crate_Weapons_Special_BW : Box_NATO_WpsSpecial_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Spezialwaffen (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
			weap_xx(BWA3_G27_AG_equipped,2);
			weap_xx(BWA3_G28_Standard_equipped,2);
			weap_xx(BWA3_G82_equipped,1);
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Crate_Ammo_Standard_BW : Box_NATO_Ammo_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Standardmunition (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			mag_xx(BWA3_30Rnd_556x45_G36_AP,36);
			mag_xx(BWA3_120Rnd_762x51,6);
			mag_xx(BWA3_200Rnd_556x45,4);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_HE_Grenade_shell,12);	
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Crate_Ammo_Special_BW : Box_NATO_Ammo_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Spezialmunition (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			mag_xx(BWA3_20Rnd_762x51_G28_AP,30);
			mag_xx(BWA3_10Rnd_762x51_G28_AP,6);
			mag_xx(BWA3_10Rnd_127x99_G82_AP,4);
			mag_xx(BWA3_10Rnd_127x99_G82_Raufoss,1);
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Crate_Equipment_Pioneer_BW : Box_NATO_AmmoOrd_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Pionierausruestung (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			mag_xx(APERSBoundingMine_Range_Mag,4);			
			mag_xx(SLAMDirectionalMine_Wire_Mag,4);			
			mag_xx(DemoCharge_Remote_Mag,4);			
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			item_xx(ACE_VMH3,2);
			item_xx(Toolkit,2);
			item_xx(ACE_DefusalKit,2);
			item_xx(ACE_M26_Clacker,2);
			item_xx(ACE_wirecutter,2);
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Crate_Ammo_Grenade_BW : Box_NATO_Grenades_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Granaten (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			mag_xx(SmokeShell,12);
			mag_xx(SmokeShellRed,12);
			mag_xx(SmokeShellGreen,12);
			mag_xx(SmokeShellPurple,12);
			mag_xx(ACE_HandFlare_Green,12);
			mag_xx(ACE_M84,12);
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			item_xx(ACE_IR_Strobe_Item,12);		
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Crate_Equipment_BW : Box_NATO_Support_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Ausruestung (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			mag_xx(Laserbatteries,1);
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			item_xx(ACE_microDAGR,1);
			item_xx(Binocular,5);
			item_xx(ACE_Yardage450,3);
			item_xx(Laserdesignator,1);
			item_xx(ACE_Vector,1);
			item_xx(optic_LRPS,1);
			item_xx(ACE_DK10_b,1);
			item_xx(ACE_GD300_b,2);
			item_xx(BWA3_muzzle_snds_G28,1);
			item_xx(BWA3_muzzle_snds_G36,6);
			item_xx(BWA3_acc_LLM01_irlaser,6);
			item_xx(BWA3_optic_NSA80,2);
			item_xx(BWA3_optic_NSV600,6);
			item_xx(BWA3_optic_20x50,1);
			item_xx(BWA3_optic_Shortdot,1);
			item_xx(BWA3_optic_ZO4x30,6);
			item_xx(B_UavTerminal,1);
			item_xx(ACE_ATragMX,2);
			item_xx(ACE_Kestrel4500,2);
			item_xx(ACE_CableTie,5);
			item_xx(ACE_UAVBattery,2);
			item_xx(ACE_EntrenchingTool,6);
			item_xx(ACE_Tripod,2);
		};
		
		class TransportBackpacks { 
		};
	};
	
	class TTT_Crate_Weapons_Launcher_BW : Box_NATO_WpsLaunch_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Werfer (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportWeapons {
			weap_xx(BWA3_Pzf3_Loaded,2);
			weap_xx(BWA3_Fliegerfaust,2);
		};
		
		class TransportMagazines {
			mag_xx(BWA3_Fliegerfaust_Mag,4);
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Crate_Ammo_Launcher_BW : Box_NATO_WpsLaunch_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Werfermunition (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportWeapons {
			weap_xx(BWA3_Pzf3_Loaded,2);
			weap_xx(BWA3_Fliegerfaust,2);	
		};
		
		class TransportMagazines {
			mag_xx(BWA3_Fliegerfaust_Mag,4);
		};
		
		class TransportBackpacks{
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Crate_Medic_Doctor_BW : Box_NATO_Support_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Medic Material (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			
		};
		
		class TransportWeapons {
		};
		
		class TransportBackpacks{
		};
		
		class TransportItems {
			item_xx(ACE_quikclot,20);
			item_xx(ACE_fieldDressing,125);
			item_xx(ACE_packingBandage,50);
			item_xx(ACE_elasticBandage,50);
			item_xx(ACE_salineIV,20);
			item_xx(ACE_salineIV_500,20);
			item_xx(ACE_morphine,15);
			item_xx(ACE_epinephrine,15);
			item_xx(ACE_atropine,10);
			item_xx(ACE_surgicalKit,15);
			item_xx(ACE_personalAidKit,15);
			item_xx(ACE_tourniquet,10);
			item_xx(ACE_bodyBag,10);
		};
	};
		
	class TTT_Crate_Small_BW : Box_NATO_Support_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Transportkiste Klein (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		class TransportMagazines {
		};
		
		class TransportWeapons {	
		};
		
		class TransportItems {			
		};
		
		class TransportBackpacks { 
		};
	};
	
	class TTT_Crate_Large_BW : B_supplyCrate_F {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Transportkiste Gross (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		class TransportMagazines {
		};
		
		class TransportWeapons {	
		};
		
		class TransportItems {			
		};
		
		class TransportBackpacks { 
		};
	};