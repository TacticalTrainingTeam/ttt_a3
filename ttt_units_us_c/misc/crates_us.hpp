	/*
	#############################################################
	### Logistik-Kisten
	#############################################################
	*/
	
	class TTT_Logistik_Waffen_Us : Box_NATO_Wps_F {
		author = "Tactical Training Team";
		displayName = "TTT Waffen (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
			class _xx_rhs_m4a1_m320_acog {
				weapon = "rhs_m4a1_grip_acog";
				count = 4;
			};
			
			class _xx_rhs_weap_m240b_elcan {
				weapon = "rhs_weap_m240b_elcan";
				count = 1;
			};
			
			class _xx_rhs_weap_m249_pip_L{
				weapon = "rhs_weap_m249_pip_L";
				count = 1;
			};
			
			class _xx_rhs_weap_m4_carryhandle {
				weapon = "rhs_weap_m4_carryhandle";
				count = 2;
			};
			
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Spezialwaffen_Us : Box_NATO_WpsSpecial_F {
		author = "Tactical Training Team";
		displayName = "TTT Spezialwaffen (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {			
		};
		
		class TransportWeapons {
			
			class _xx_rhsusf_acc_LEUPOLDMK4 {
				weapon = "rhsusf_acc_LEUPOLDMK4";
				count = 1;
			};
			
			class _xx_rhs_weap_mk18_grip2_eotech {
				weapon = "rhs_weap_mk18_grip2_eotech";
				count = 1;
			};
			
			class _xx_rhs_weap_sr25_ec {
				weapon = "rhs_weap_sr25_ec";
				count = 1;
			};
			
			class _xx_srifle_LRR_LRPS_F {
				weapon = "srifle_LRR_LRPS_F";
				count = 1;
			};	
		};
		
		class TransportItems {
		};		
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Standardmunition_Us : Box_NATO_Ammo_F {
		author = "Tactical Training Team";
		displayName = "TTT Standardmunition (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 36;
			};
			
			class _xx_rhsusf_200Rnd_556x45_soft_pouch {
				magazine = "rhsusf_200Rnd_556x45_soft_pouch";
				count = 4;
			};
			
			class _xx_rhsusf_100Rnd_762x51_m80a1epr {
				magazine = "rhsusf_100Rnd_762x51_m80a1epr";
				count = 4;
			};
			
			class _xx_rhsusf_mag_7x45acp_MHP {
				magazine = "rhsusf_mag_7x45acp_MHP";
				count = 6;
			};
			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 6;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 6;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				count = 12;
				magazine = "1Rnd_HE_Grenade_shell";
			};		
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Spezialmunition_Us : Box_NATO_Ammo_F {
		author = "Tactical Training Team";
		displayName = "TTT Spezialmunition (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 24;
			};
			
			class _xx_rhsusf_20Rnd_762x51_m118_special_Mag {
				magazine = "rhsusf_20Rnd_762x51_m118_special_Mag";
				count = 6;
			};
			
			class _xx_7Rnd_408_Mag {
				magazine = "7Rnd_408_Mag";
				count = 6;
			};
			
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Pionierausruestung_Us : Box_NATO_AmmoOrd_F {
		author = "Tactical Training Team";
		displayName = "TTT Pionierausruestung (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {

			class _xx_APERSBoundingMine_Range_Mag {
				magazine = "APERSBoundingMine_Range_Mag";
				count = 4;
			};
			
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 4;
			};
			
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			class _xx_ACE_VMH3 {
				name = "ACE_VMH3";
				count = 2;
			};
			class _xx_Toolkit {
				name = "Toolkit";
				count = 2;
			};
            class _xx_ACE_DefusalKit {
                name = "ACE_DefusalKit";
                count = 2;
            };
            class _xx_ACE_M26_Clacker {
                name = "ACE_M26_Clacker";
                count = 2;
            };
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Granaten_Us : Box_NATO_Grenades_F {
		author = "Tactical Training Team";
		displayName = "TTT Granaten (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 12;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 12;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 12;
			};
			
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 12;
			};
			
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 12;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 12;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			class _xx_ACE_IR_Strobe_Item {
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Ausruestung_Us : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Ausruestung (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			class _xx_Laserbatteries {
				magazine = "Laserbatteries";
				count = 1;
			};
		};
		
		class TransportWeapons {
			class _xx_rhsusf_acc_rotex5_grey {
				weapon = "rhsusf_acc_rotex5_grey";
				count = 6;
			};
			
			class _xx_rhsusf_acc_eotech_552 {
				weapon = "rhsusf_acc_eotech_552";
				count = 6;
			};
			
			class _xx_rhsusf_acc_harris_bipod {
				weapon = "rhsusf_acc_harris_bipod";
				count = 6;
			};			
			
			class _xx_rhsusf_acc_anpeq15_light {
				weapon = "rhsusf_acc_anpeq15_light";
				count = 6;
			};
			
			class _xx_rhsusf_acc_ACOG3 {
				weapon = "rhsusf_acc_ACOG3";
				count = 6;
			};
			
			class _xx_rhsusf_acc_ELCAN {
				weapon = "rhsusf_acc_ELCAN";
				count = 6;
			};
			
			class _xx_rhsusf_acc_SR25S {
				weapon = "rhsusf_acc_SR25S";
				count = 6;
			};		
		};
		
		class TransportItems {
			class _xx_ACE_microDAGR {
				name = "ACE_microDAGR";
				count = 1;
			};
			
			class _xx_Binocular {
				name = "Binocular";
				count = 5;
			};
			
			class _xx_ACE_Yardage450 {
				name = "ACE_Yardage450";
				count = 3;
			};
			
			class _xx_ACE_Vector {
				name = "ACE_Vector";
				count = 1;
			};
			
			class _xx_Laserdesignator {
				name = "Laserdesignator";
				count = 1;
			};
			
			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 1;
			};
			
			class _xx_ACE_DK10_b {
				name = "ACE_DK10_b";
				count = 2;
			};
			
			
			class _xx_B_UavTerminal {
				name = "B_UavTerminal";
				count = 1;
			};
			
			class _xx_ItemMap {
				name = "ItemMap";
				count = 6;
			};
			
			class _xx_ItemCompass {
				name = "ItemCompass";
				count = 6;
			};
			
			class _xx_tf_anprc152 {
				name = "tf_anprc152";
				count = 6;
			};
			
			class _xx_ACE_ATragMX {
				name = "ACE_ATragMX";
				count = 2;
			};
			
			class _xx_ACE_Kestrel4500 {
				name = "ACE_Kestrel4500";
				count = 2;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 3;
			};
			
			class _xx_ACE_UAVBattery {
				name = "ACE_UAVBattery";
				count = 2;
			};
			
		};
		
		class TransportBackpacks { 
			class _xx_TTT_Backpack_Funkerfac_Us_Desert {
				backpack = "TTT_Backpack_Funkerfac_Us_Desert";
				count = 1;
			};
			
			class _xx_TTT_Backpack_Funkerfac_Us_Woodland {
				backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
				count = 1;
			};
			
			class _xx_B_UAV_01_backpack_F {
				backpack = "B_UAV_01_backpack_F";
				count = 1;
			};
		};
	};
	
	class TTT_Logistik_Werfer_Us : Box_NATO_WpsLaunch_F {
		author = "Tactical Training Team";
		displayName = "TTT Werfer (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			class _xx_rhs_fim92mag_{
				magazine= "rhs_fim92_mag";
				count = 2;
				
			};
		};
		
		class TransportBackpacks{
		};
		
		class TransportWeapons {
			class _xx_rhs_weap_M136 {
				weapon = "rhs_weap_M136";
				count = 2;
			};
			
			class _xx_rhs_weap_fim92 {
				weapon = "rhs_weap_fim92";
				count = 2;
			};
		};
		
		class TransportItems {
		};
	};
		
	class TTT_Logistik_Medic_Us : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Material (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			
		};
		
		
		class TransportBackpacks{
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 20;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 75;
			};
			
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 10;
			};
				
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 20;
			};
				
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 20;
			};
				
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 15;
			};
				
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 15;
			};
				
			class _xx_ACE_atropine {
				name = "ACE_atropine";
				count = 10;
			};
				
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 20;
			};
								
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 75;
			};
								
			class _xx_ACE_personalAidKit {
				name = "ACE_personalAidKit";
				count = 15;
			};
				
			class _xx_ACE_surgicalKit {
				name = "ACE_surgicalKit";
				count = 15;
			};
				
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 10;
			};
		};
	};
	
	class TTT_Logistik_Medic_Rucksaecke_Us : B_supplyCrate_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Rucksaecke (US)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {	
		};
		
		class TransportBackpacks {
			class _xx_TTT_Backpack_Gefechtssanitaeter_Us_Woodland {
				backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Woodland";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Gefechtssanitaeter_Us_Desert {
				backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Desert";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Feldarzt_Us_Desert {
				backpack = "TTT_Backpack_Feldarzt_Us_Desert";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Feldarzt_Us_Woodland {
				backpack = "TTT_Backpack_Feldarzt_Us_Woodland";
				count = 4;			
			};
		};
			
	};
	
	class TTT_Logistik_Kiste_Klein_Us : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Transportkiste Klein (US)";
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
	
	class TTT_Logistik_Kiste_Gross_Us : B_SupplyCrate_F {
		author = "Tactical Training Team";
		displayName = "TTT Transportkiste Gross (US)";
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