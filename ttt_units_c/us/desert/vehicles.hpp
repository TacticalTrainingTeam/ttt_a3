	/*
	#############################################################
	### Trupp Gelb
	#############################################################
	*/
	
	//Gelb 1 (OPL)
	class TTT_Gelb1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gelb 1 (OPL)";
		vehicleClass = "TTT_Gelb_Desert";
		backpack = "TTT_Backpack_Opl_Desert";
		uniformClass = "TTT_Uniform_Gelb_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_yellow_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Gelb 2 (Funker)
	class TTT_Gelb2_Desert : TTT_Funkerfac_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gelb 2 (Funker/FAC)";
		vehicleClass = "TTT_Gelb_Desert";
		backpack = "TTT_Backpack_Funkerfac_Desert";
		uniformClass = "TTT_Uniform_Gelb_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_yellow_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Gelb 3 (UAV/Moerser)
	class TTT_Gelb3_Desert : TTT_Uavoperator_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gelb 3 (UAV/Moerser)";
		backpack = "TTT_Backpack_Funkerfac_Desert";
		vehicleClass = "TTT_Gelb_Desert";
		uniformClass = "TTT_Uniform_Gelb_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_yellow_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
	};
	
	//Gelb 4 (Moerser)
	class TTT_Gelb4_Desert : TTT_Funkerfac_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gelb 4 (Moerser)";
		vehicleClass = "TTT_Gelb_Desert";
		uniformClass = "TTT_Uniform_Gelb_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_yellow_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Grau
	#############################################################
	*/
	
	//Grau 1 (Truppfuehrer)
	class TTT_Grau1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 1 (Truppfuehrer)";
		vehicleClass = "TTT_Grau_Desert";
		uniformClass = "TTT_Uniform_Grau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_grey_desert.paa"};
		items[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		respawnItems[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_mk18_m320","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_mk18_m320","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Grau 2 (Funker/FAC)
	class TTT_Grau2_Desert : TTT_Funkerfac_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 2 (Funker/FAC)";
		vehicleClass = "TTT_Grau_Desert";
		uniformClass = "TTT_Uniform_Grau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_grey_desert.paa"};
		items[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles"};
		respawnItems[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_mk18_m320","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_mk18_m320","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
	};
	
	//Grau 3 (Gefechtssanitaeter)
	class TTT_Grau3_Desert : TTT_Gefechtssanitaeter_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 3 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Grau_Desert";
		uniformClass = "TTT_Uniform_Grau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_grey_desert.paa"};
		items[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles"};
		respawnItems[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_mk18_grip2","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_mk18_grip2","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Grau 4 (Pionier)
	class TTT_Grau4_Desert : TTT_Pionier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 4 (Pionier)";
		vehicleClass = "TTT_Grau_Desert";
		uniformClass = "TTT_Uniform_Grau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_grey_desert.paa"};
		items[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles"};
		respawnItems[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_mk18_grip2","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_mk18_grip2","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Grau 4 (Gruppenscharfschuetze)
	class TTT_Grau5_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 5 (Gruppenscharfschuetze)";
		icon = "iconMan";
		vehicleClass = "TTT_Grau_Desert";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Grau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_grey_desert.paa"};
		items[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side","rhsusf_acc_harris_bipod","rhsusf_acc_SR25S","rhsusf_acc_LEUPOLDMK4","NVGoggles","cse_ab_Kestrel4500","cse_ab_ATragMX"};
		respawnItems[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side","rhsusf_acc_harris_bipod","rhsusf_acc_SR25S","rhsusf_acc_LEUPOLDMK4","NVGoggles","cse_ab_Kestrel4500","cse_ab_ATragMX"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_sr25_ec","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_sr25_ec","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};
	};	
	
	//Grau 6
	class TTT_Grau6_Desert : TTT_Uavoperator_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 6 (UAV-Operator)";
		vehicleClass = "TTT_Grau_Desert";
		uniformClass = "TTT_Uniform_Grau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_grey_desert.paa"};
		items[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_m_tablet"};
		respawnItems[] = {"rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3","rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_m_tablet"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152","B_UavTerminal"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152","B_UavTerminal"};
		weapons[] = {"rhs_weap_mk18_grip2","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_mk18_grip2","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","BWA3_Pzf3_IT"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","BWA3_Pzf3_IT"};
	};

	/*
	#############################################################
	### Trupp Gold (Desert)
	#############################################################
	*/
	
	//Gold 1 (Truppfuehrer)
	class TTT_Gold1_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gold 1 (TF/Spotter)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Gold_Desert";
		uniformClass = "TTT_Uniform_Gold_Desert";
		backpack = "TTT_Backpack_Truppfuehrer_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_gold_desert.paa"};
		items[] = {"rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_ab_Kestrel4500","cse_ab_ATragMX","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		respawnItems[] = {"rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_ab_Kestrel4500","cse_ab_ATragMX"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_m320_acog3","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
	};
	
	//Gold 2 (Sniper)
	class TTT_Gold2_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gold 2 (Sniper)";
		icon = "iconMan";
		vehicleClass = "TTT_Gold_Desert";
		uniformClass = "TTT_Uniform_Gold_Desert";
		backpack = "TTT_Backpack_Schuetze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_gold_desert.paa"};
		items[] = {"NVGoggles","cse_ab_Kestrel4500","cse_ab_ATragMX"};
		respawnItems[] = {"NVGoggles","cse_ab_Kestrel4500","cse_ab_ATragMX"};
		weapons[] = {"srifle_LRR_LRPS_F","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"srifle_LRR_LRPS_F","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};	
	
	//Gold 3 (Spotter)
	class TTT_Gold3_Desert : TTT_Funkerfac_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gold 3 (Spotter)";
		vehicleClass = "TTT_Gold_Desert";
		uniformClass = "TTT_Uniform_Gold_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_gold_desert.paa"};
		items[] = {"rhsusf_acc_eotech_552","rhsusf_acc_harris_bipod","rhsusf_acc_rotex5_grey","NVGoggles"};
		respawnItems[] = {"rhsusf_acc_eotech_552","rhsusf_acc_harris_bipod","rhsusf_acc_rotex5_grey","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_m4a1_acog3","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_acog3","rhsusf_weap_m1911a1","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","Laserbatteries"};
	};
	
	//Gold 4 (UAV)
	class TTT_Gold4_Desert : TTT_Uavoperator_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gold 4 (UAV)";
		vehicleClass = "TTT_Gold_Desert";
		uniformClass = "TTT_Uniform_Gold_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_gold_desert.paa"};
		items[] = {"rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_battery_darter"};
		respawnItems[] = {"rhsusf_acc_eotech_552","rhsusf_acc_rotex5_grey","NVGoggles","cse_battery_darter"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","B_UavTerminal","ItemCompass","ItemWatch","tf_anprc152","cse_m_tablet"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","B_UavTerminal","ItemCompass","ItemWatch","tf_anprc152","cse_m_tablet"};
		weapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_m4a1_grip_acog3_usmc","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	
	
	/*
	#############################################################
	### Trupp Gruen (Desert)
	#############################################################
	*/
	
	//Gruen 1 (Zugfuehrer)
	class TTT_Gruen1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gruen 1 (Zugfuehrer)";
		vehicleClass = "TTT_Gruen_Desert";
		uniformClass = "TTT_Uniform_Gruen_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_green_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Gruen 2 (Funker/FAC)
	class TTT_Gruen2_Desert : TTT_Funkerfac_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gruen 2 (Funker/FAC)";
		vehicleClass = "TTT_Gruen_Desert";
		uniformClass = "TTT_Uniform_Gruen_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_green_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Gruen 3 (Gefechtssanitaeter)
	class TTT_Gruen3_Desert : TTT_Gefechtssanitaeter_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gruen 3 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Gruen_Desert";
		uniformClass = "TTT_Uniform_Gruen_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_green_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Gruen 4 (Gefechtssanitaeter)
	class TTT_Gruen4_Desert : TTT_Gefechtssanitaeter_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gruen 4 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Gruen_Desert";
		uniformClass = "TTT_Uniform_Gruen_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_green_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Braun (Desert)
	#############################################################
	*/
	
	//Braun 1 (Zugfuehrer)
	class TTT_Braun1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Braun 1 (Zugfuehrer)";
		vehicleClass = "TTT_Braun_Desert";
		uniformClass = "TTT_Uniform_Braun_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_brown_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Braun 2 (Funker/FAC)
	class TTT_Braun2_Desert : TTT_Funkerfac_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Braun 2 (Funker/FAC)";
		vehicleClass = "TTT_Braun_Desert";
		uniformClass = "TTT_Uniform_Braun_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_brown_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Braun 3 (Gefechtssanitaeter)
	class TTT_Braun3_Desert : TTT_Gefechtssanitaeter_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Braun 3 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Braun_Desert";
		uniformClass = "TTT_Uniform_Braun_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_brown_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Schwarz (Desert)
	#############################################################
	*/
	
	//Schwarz 1 (Truppfuehrer)
	class TTT_Schwarz1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 1 (Truppfuehrer)";
		vehicleClass = "TTT_Schwarz_Desert";
		uniformClass = "TTT_Uniform_Schwarz_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_black_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 2 (Grenadier)
	class TTT_Schwarz2_Desert : TTT_Grenadier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 2 (Grenadier)";
		vehicleClass = "TTT_Schwarz_Desert";
		uniformClass = "TTT_Uniform_Schwarz_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_black_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 3 (LMG-Schuetze)
	class TTT_Schwarz3_Desert : TTT_Lmgschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 3 (LMG-Schuetze)";
		vehicleClass = "TTT_Schwarz_Desert";
		uniformClass = "TTT_Uniform_Schwarz_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_black_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 4 (LMG-Schuetze)
	class TTT_Schwarz4_Desert : TTT_Lmgschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 4 (LMG-Schuetze)";
		vehicleClass = "TTT_Schwarz_Desert";
		uniformClass = "TTT_Uniform_Schwarz_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_black_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 5 (AT-Schuetze)
	class TTT_Schwarz5_Desert : TTT_Atschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 5 (AT-Schuetze)";
		vehicleClass = "TTT_Schwarz_Desert";
		uniformClass = "TTT_Uniform_Schwarz_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_black_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 6 (AT-Schuetze)
	class TTT_Schwarz6_Desert : TTT_Atschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 6 (AT-Schuetze)";
		vehicleClass = "TTT_Schwarz_Desert";
		uniformClass = "TTT_Uniform_Schwarz_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_black_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Rot (Desert)
	#############################################################
	*/
	
	//Rot 1 (Truppfuehrer)
	class TTT_Rot1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 1 (Truppfuehrer)";
		vehicleClass = "TTT_Rot_Desert";
		uniformClass = "TTT_Uniform_Rot_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_red_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Rot 2 (Grenadier)
	class TTT_Rot2_Desert : TTT_Grenadier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 2 (Grenadier)";
		vehicleClass = "TTT_Rot_Desert";
		uniformClass = "TTT_Uniform_Rot_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_red_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 3 (LMG-Schuetze)
	class TTT_Rot3_Desert : TTT_Lmgschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 3 (LMG-Schuetze)";
		vehicleClass = "TTT_Rot_Desert";
		uniformClass = "TTT_Uniform_Rot_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_red_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 4 (LMG-Schuetze)
	class TTT_Rot4_Desert : TTT_Lmgschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 4 (LMG-Schuetze)";
		vehicleClass = "TTT_Rot_Desert";
		uniformClass = "TTT_Uniform_Rot_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_red_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 5 (AT-Schuetze)
	class TTT_Rot5_Desert : TTT_Atschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 5 (AT-Schuetze)";
		vehicleClass = "TTT_Rot_Desert";
		uniformClass = "TTT_Uniform_Rot_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_red_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 6 (AT-Schuetze)
	class TTT_Rot6_Desert : TTT_Atschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 6 (AT-Schuetze)";
		vehicleClass = "TTT_Rot_Desert";
		uniformClass = "TTT_Uniform_Rot_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_red_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Bronze (Desert)
	#############################################################
	*/
	
	//Bronze 1 (Truppfuehrer/Kommandant)
	class TTT_Bronze1_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bronze 1 (Truppfuehrer/Kommandant)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Bronze_Desert";
		backpack = "TTT_Backpack_Pilot_Desert";
		uniformClass = "TTT_Uniform_Bronze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_bronx_desert.paa"};
		items[] = {"NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		respawnItems[] = {"NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Bronze 2 (Schuetze)
	class TTT_Bronze2_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bronze 2 (Schuetze)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Desert";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Bronze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_bronx_desert.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Bronze 3 (Fahrer)
	class TTT_Bronze3_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bronze 3 (Fahrer)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Desert";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Bronze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_bronx_desert.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Bronze 4 (Truppfuehrer/Kommandant)
	class TTT_Bronze4_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Bronze 4 (Truppfuehrer/Kommandant)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Bronze_Desert";
		backpack = "TTT_Backpack_Pilot_Desert";
		uniformClass = "TTT_Uniform_Bronze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_bronx_desert.paa"};
		items[] = {"NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		respawnItems[] = {"NVGoggles","cse_itemHelmetCamera_W","cse_Keycuffs","cse_Keycuffs","cse_Keycuffs"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Bronze 5 (Schuetze)
	class TTT_Bronze5_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Bronze 5 (Schuetze)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Desert";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Bronze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_bronx_desert.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	//Bronze 6 (Fahrer)
	class TTT_Bronze6_Desert : TTT_Base_us {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Bronze 6 (Fahrer)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Desert";
		backpack = "TTT_Backpack_Schuetze_Desert";
		uniformClass = "TTT_Uniform_Bronze_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_bronx_desert.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m1911a1","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","rhs_mag_mk84","rhs_mag_mk84","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	};
	
	/*
	#############################################################
	### Trupp Blau (Desert)
	#############################################################
	*/
	
	//Blau 1 (Truppfuehrer)
	class TTT_Blau1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 1 (Truppfuehrer)";
		vehicleClass = "TTT_Blau_Desert";
		uniformClass = "TTT_Uniform_Blau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_blue_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Blau 2 (Grenadier)
	class TTT_Blau2_Desert : TTT_Grenadier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 2 (Grenadier)";
		vehicleClass = "TTT_Blau_Desert";
		uniformClass = "TTT_Uniform_Blau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_blue_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 3 (MG-Assistent)
	class TTT_Blau3_Desert : TTT_Mgassistent_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 3 (MG-Assistent)";
		vehicleClass = "TTT_Blau_Desert";
		uniformClass = "TTT_Uniform_Blau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_blue_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 4 (MG-Schuetze)
	class TTT_Blau4_Desert : TTT_Mgschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 4 (MG-Schuetze)";
		vehicleClass = "TTT_Blau_Desert";
		uniformClass = "TTT_Uniform_Blau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_blue_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 5 (Pionier)
	class TTT_Blau5_Desert : TTT_Pionier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 5 (Pionier)";
		vehicleClass = "TTT_Blau_Desert";
		uniformClass = "TTT_Uniform_Blau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_blue_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 6 (Pionier)
	class TTT_Blau6_Desert : TTT_Pionier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 6 (Pionier)";
		vehicleClass = "TTT_Blau_Desert";
		uniformClass = "TTT_Uniform_Blau_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_blue_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Violett (Desert)
	#############################################################
	*/
	
	//Violett 1 (Truppfuehrer)
	class TTT_Violett1_Desert : TTT_Truppfuehrer_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 1 (Truppfuehrer)";
		vehicleClass = "TTT_Violett_Desert";
		uniformClass = "TTT_Uniform_Violett_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_violet_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Violett 2 (Grenadier)
	class TTT_Violett2_Desert : TTT_Grenadier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 2 (Grenadier)";
		vehicleClass = "TTT_Violett_Desert";
		uniformClass = "TTT_Uniform_Violett_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_violet_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 3 (MG-Assistent)
	class TTT_Violett3_Desert : TTT_Mgassistent_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 3 (MG-Assistent)";
		vehicleClass = "TTT_Violett_Desert";
		uniformClass = "TTT_Uniform_Violett_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_violet_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 4 (MG-Schuetze)
	class TTT_Violett4_Desert : TTT_Mgschuetze_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 4 (MG-Schuetze)";
		vehicleClass = "TTT_Violett_Desert";
		uniformClass = "TTT_Uniform_Violett_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_violet_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 5 (Pionier)
	class TTT_Violett5_Desert : TTT_Pionier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 5 (Pionier)";
		vehicleClass = "TTT_Violett_Desert";
		uniformClass = "TTT_Uniform_Violett_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_violet_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 6 (Pionier)
	class TTT_Violett6_Desert : TTT_Pionier_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 6 (Pionier)";
		vehicleClass = "TTT_Violett_Desert";
		uniformClass = "TTT_Uniform_Violett_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_violet_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Desert","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Weiﬂ (Desert)
	#############################################################
	*/
	
	//Weiﬂ 1 (Feldarzt)
	class TTT_Weiss1_Desert : TTT_Feldarzt_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 1 (Oberfeldarzt)";
		vehicleClass = "TTT_Weiss_Desert";
		uniformClass = "TTT_Uniform_Weiss_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_white_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_1_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Weiﬂ 2 (Fahrzeugfuehrer)
	class TTT_Weiss2_Desert : TTT_Pilot_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 2 (Fahrzeugfuehrer)";
		vehicleClass = "TTT_Weiss_Desert";
		uniformClass = "TTT_Uniform_Weiss_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_white_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Weiss 3 (Feldarzt)
	class TTT_Weiss3_Desert : TTT_Feldarzt_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 3 (Feldarzt)";
		vehicleClass = "TTT_Weiss_Desert";
		uniformClass = "TTT_Uniform_Weiss_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_white_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Desert","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	
	//Weiﬂ 4 (Stellv.Fahrzeugfuehrer)
	class TTT_Weiss4_Desert : TTT_Pilot_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 4 (Stellv. Fahrzeugfuehrer)";
		vehicleClass = "TTT_Weiss_Desert";
		uniformClass = "TTT_Uniform_Weiss_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_white_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Adler (Desert)
	#############################################################
	*/
	
	//Adler 1 (Pilot)
	class TTT_Adler1_Desert : TTT_Pilot_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Adler 1 (Pilot)";
		vehicleClass = "TTT_Adler_Desert";
		uniformClass = "TTT_Uniform_Adler_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_silver_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Adler 2 (Copilot)
	class TTT_Adler2_Desert : TTT_Pilot_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Adler 2 (Copilot)";
		vehicleClass = "TTT_Adler_Desert";
		uniformClass = "TTT_Uniform_Adler_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_silver_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Bussard (Desert)
	#############################################################
	*/
	
	//Bussard 1 (Pilot)
	class TTT_Bussard1_Desert : TTT_Pilot_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bussard 1 (Pilot)";
		vehicleClass = "TTT_Bussard_Desert";
		uniformClass = "TTT_Uniform_Bussard_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_silver_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Bussard 2 (Copilot)
	class TTT_Bussard2_Desert : TTT_Pilot_Base_us {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bussard 2 (Copilot)";
		vehicleClass = "TTT_Bussard_Desert";
		uniformClass = "TTT_Uniform_Bussard_Desert";
		hiddenSelectionsTextures[] = {"\ttt_units\us\desert\TTT_uniform_silver_desert.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};