/*
	#############################################################
	### Basis-Klassen
	#############################################################
	*/
	
	//Basis-Klasse fuer Basisklassen
	class TTT_Base_us : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		author = "Tactical Training Team";
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Template";
		scope = 0;
		displayName = "Basis-Klasse";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		items[] = {};
		respawnItems[] = {};
	};
	
	/*
	#############################################################
	### Basis-Klassen
	#############################################################
	*/
	
	//Basis-Klasse fuer Truppfuehrer
	class TTT_Truppfuehrer_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Truppfuehrer (Template)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Truppfuehrer_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552","ACE_HelmetCam","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552","ACE_HelmetCam","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_1_Desert","ItemMap","ItemCompass","ACE_microDAGR","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_1_Desert","ItemMap","ItemCompass","ACE_microDAGR","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnWeapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer Grenadiere
	class TTT_Grenadier_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Grenadier (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Grenadier_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer MG-Assistenten
	class TTT_Mgassistent_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "MG-Assistent (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Mgassistent_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer MG-Schuetzen
	class TTT_Mgschuetze_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "MG-Schuetze (Template)";
		icon = "iconManMG";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Mgschuetze_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"rhsusf_acc_eotech_552","NVGoggles"};
		respawnitems[] = {"rhsusf_acc_eotech_552","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_m240b_elcan","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m240b_elcan","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_100Rnd_762x51_m80a1epr"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_100Rnd_762x51_m80a1epr"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer LMG-Schuetzen
	class TTT_Lmgschuetze_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "LMG-Schuetze (Template)";
		icon = "iconManMG";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Lmgschuetze_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"rhsusf_acc_eotech_552","rhsusf_acc_ELCAN","NVGoggles"};
		respawnitems[] = {"rhsusf_acc_eotech_552","rhsusf_acc_ELCAN","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_200Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_200Rnd_556x45_soft_pouch"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer AT-Assistent
	class TTT_Atassistent_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "AT-Assistent (Template)";
		icon = "iconManAT";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","BWA3_Fliegerfaust_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","BWA3_Fliegerfaust_Mag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer AT-Schuetzen
	class TTT_Atschuetze_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "AT-Schuetze (Template)";
		icon = "iconManAT";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Atschuetze_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put","rhs_weap_M136"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put","rhs_weap_M136"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer Schuetzen
	class TTT_Schuetze_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Schuetze (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_weap_M136_IT"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_weap_M136_IT"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer Funker/FAC
	class TTT_Funkerfac_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Funker/FAC (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Funkerfac_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer Pioniere
	class TTT_Pionier_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Pionier (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Pionier_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
		canDeactivateMines= 1;
		engineer = 1;
	};
	
	//Basis-Klasse fuer Gefechtssanitaeter
	class TTT_Gefechtssanitaeter_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Gefechtssanitaeter (Template)";
		icon = "iconManMedic";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Gefechtssanitaeter_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
		attendant = 1;
	};
	
	//Basis-Klasse fuer Feldaerzte
	class TTT_Feldarzt_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "Feldarzt (Template)";
		icon = "iconManMedic";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Feldarzt_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_1_Desert","ItemMap","ItemCompass","ACE_microDAGR","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_1_Desert","ItemMap","ItemCompass","ACE_microDAGR","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
		attendant = 1;
	};
	
	//Basis-Klasse fuer Piloten
	class TTT_Pilot_Base_us : TTT_Base_us {
		_generalMacro = "B_Helipilot_F";
		author = "Tactical Training Team";
		displayName = "Pilot (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Pilot_Desert";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552","ACE_HelmetCam","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552","ACE_HelmetCam","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Crew_Vest_Base","TTT_Helmet_Eagle","ItemMap","ItemCompass","ACE_microDAGR","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Crew_Vest_Base","TTT_Helmet_Eagle","ItemMap","ItemCompass","ACE_microDAGR","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};
	
	//Basis-Klasse fuer UAV-Operatoren
	class TTT_Uavoperator_Base_us : TTT_Base_us {
		author = "Tactical Training Team";
		displayName = "UAV-Operator (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","rhsusf_acc_eotech_552","ACE_UAVBattery","ACE_DK10_b"};
		respawnitems[] = {"NVGoggles","rhsusf_acc_eotech_552","ACE_UAVBattery","ACE_DK10_b"};
		linkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","TTT_Vest_Heavy_Base","TTT_Helmet_3_Desert","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\us\desert\uniforms\TTT_uniform_black_Desert.paa"};
	};