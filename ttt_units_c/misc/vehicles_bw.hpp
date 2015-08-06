/*
	#############################################################
	### Basis-Klassen
	#############################################################
	*/
	
	//Basis-Klasse fuer Basisklassen
	class TTT_Base_Base : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		author = "Tactical Training Team";
		faction = "TTT_faction_bw";
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
	class TTT_Truppfuehrer_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Truppfuehrer (Template)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Truppfuehrer_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnWeapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer Grenadiere
	class TTT_Grenadier_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Grenadier (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Grenadier_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer MG-Assistenten
	class TTT_Mgassistent_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "MG-Assistent (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Mgassistent_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer MG-Schuetzen
	class TTT_Mgschuetze_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "MG-Schuetze (Template)";
		icon = "iconManMG";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Mgschuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_MG5_Tan_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_MG5_Tan_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer LMG-Schuetzen
	class TTT_Lmgschuetze_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "LMG-Schuetze (Template)";
		icon = "iconManMG";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Mgschuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_MG4_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_MG4_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_200Rnd_556x45","BWA3_200Rnd_556x45"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_200Rnd_556x45","BWA3_200Rnd_556x45"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer AT-Assistent
	class TTT_Atassistent_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "AT-Assistent (Template)";
		icon = "iconManAT";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_Fliegerfaust_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_Fliegerfaust_Mag"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer AT-Schuetzen
	class TTT_Atschuetze_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "AT-Schuetze (Template)";
		icon = "iconManAT";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Atschuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles","BWA3_optic_NSA80"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles","BWA3_optic_NSA80"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put","BWA3_Pzf3"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put","BWA3_Pzf3"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_Pzf3_IT"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_Pzf3_IT"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer Schuetzen
	class TTT_Schuetze_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Schuetze (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles","BWA3_optic_NSA80"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles","BWA3_optic_NSA80"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_Pzf3_IT"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_Pzf3_IT"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer Funker/FAC
	class TTT_Funkerfac_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Funker/FAC (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Funkerfac_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","Laserbatteries"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer Pioniere
	class TTT_Pionier_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Pionier (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Pionier_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
		canDeactivateMines= 1;
		engineer = 1;
	};
	
	//Basis-Klasse fuer Gefechtssanitaeter
	class TTT_Gefechtssanitaeter_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Gefechtssanitaeter (Template)";
		icon = "iconManMedic";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Gefechtssanitaeter_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
		attendant = 1;
	};
	
	//Basis-Klasse fuer Feldaerzte
	class TTT_Feldarzt_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "Feldarzt (Template)";
		icon = "iconManMedic";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Feldarzt_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles"};
		respawnitems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
		attendant = 1;
	};
	
	//Basis-Klasse fuer Piloten
	class TTT_Pilot_Base : TTT_Base_Base {
		_generalMacro = "B_Helipilot_F";
		author = "Tactical Training Team";
		displayName = "Pilot (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Pilot_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		respawnitems[] = {"NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer Greyhawk-Operatoren
	class TTT_Uav_G_Operator_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "UAV-Operator (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "TTT_Backpack_Funkerfac_Tropentarn";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles","cse_battery_darter"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles","cse_battery_darter"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};
	
	//Basis-Klasse fuer UAV-Operatoren
	class TTT_Uavoperator_Base : TTT_Base_Base {
		author = "Tactical Training Team";
		displayName = "UAV-Operator (Template)";
		icon = "iconMan";
		vehicleClass = "TTT_Template";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "TTT_Uniform_Base";
		items[] = {"BWA3_optic_NSV600","NVGoggles","cse_battery_darter","cse_m_tablet"};
		respawnitems[] = {"BWA3_optic_NSV600","NVGoggles","cse_battery_darter","cse_m_tablet"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP"};
		hiddenSelectionsTextures[] = {"\ttt_units\tropentarn\TTT_uniform_black_tropentarn.paa"};
	};