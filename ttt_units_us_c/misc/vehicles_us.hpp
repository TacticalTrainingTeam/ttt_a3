/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Basisklassen
class TTT_Base_Us : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    author = "Tactical Training Team";
    displayName = "Basis-Klasse US";
    scope = 0;
	icon = "iconMan";
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Template_Us";
    uniformAccessories[] = {};
    nakedUniform = "U_BasicBody";
    hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
    items[] = {};
    respawnItems[] = {};
};

/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Truppfuehrer
class TTT_Truppfuehrer_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Truppfuehrer US (Template)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_HelmetCam", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_HelmetCam", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_1_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_1_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_m320_acog3", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnWeapons[] = { "rhs_m4a1_m320_acog3", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer Grenadiere
class TTT_Grenadier_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Grenadier US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Grenadier_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_2_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_2_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_m320_acog3", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_m320_acog3", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer MG-Assistenten
class TTT_Mgassistent_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "MG-Assistent US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Mgassistent_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer MG-Schuetzen
class TTT_Mgschuetze_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "MG-Schuetze US (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Mgschuetze_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "rhsusf_acc_eotech_552", "ACE_NVG_Wide", "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "rhsusf_acc_eotech_552", "ACE_NVG_Wide", "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_4_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_4_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_weap_m240b_elcan", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_weap_m240b_elcan", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_100Rnd_762x51_m80a1epr" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_100Rnd_762x51_m80a1epr" };
};

//Basis-Klasse fuer LMG-Schuetzen
class TTT_Lmgschuetze_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "LMG-Schuetze US (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Lmgschuetze_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "rhsusf_acc_eotech_552", "rhsusf_acc_ELCAN", "ACE_NVG_Wide", "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "rhsusf_acc_eotech_552", "rhsusf_acc_ELCAN", "ACE_NVG_Wide", "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_4_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_4_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_weap_m249_pip_L", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_weap_m249_pip_L", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_200Rnd_556x45_soft_pouch" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_200Rnd_556x45_soft_pouch" };
};

//Basis-Klasse fuer AT-Assistent
class TTT_Atassistent_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "AT-Assistent US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_5_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_5_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "BWA3_Fliegerfaust_Mag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "BWA3_Fliegerfaust_Mag" };
};

//Basis-Klasse fuer AT-Schuetzen
class TTT_Atschuetze_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "AT-Schuetze US (Template)";
    icon = "iconManAT";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Atschuetze_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_6_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_6_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put", "rhs_weap_M136" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put", "rhs_weap_M136" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer Schuetzen
class TTT_Schuetze_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Schuetze US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_6_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_6_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer Funker/FAC
class TTT_Funkerfac_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Funker/FAC US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Funkerfac_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_microDAGR" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_microDAGR" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_2_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_2_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_m320_acog3", "rhsusf_weap_m1911a1", "Laserdesignator", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_m320_acog3", "rhsusf_weap_m1911a1", "Laserdesignator", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "Laserbatteries" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "Laserbatteries" };
};

//Basis-Klasse fuer Pioniere
class TTT_Pionier_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Pionier US (Template)";
    icon = "iconManExplosive";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    canDeactivateMines = 1;
    backpack = "TTT_Backpack_Pionier_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer Gefechtssanitaeter
class TTT_Gefechtssanitaeter_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Gefechtssanitaeter US (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    attendant = 1;
    backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer Feldaerzte
class TTT_Feldarzt_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "Feldarzt US (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    attendant = 1;
    backpack = "TTT_Backpack_Feldarzt_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_1_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_1_Us_Desert", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer Piloten
class TTT_Pilot_Base_Us : TTT_Base_Us {
    _generalMacro = "B_Helipilot_F";
    author = "Tactical Training Team";
    displayName = "Pilot US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Pilot_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_HelmetCam", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_HelmetCam", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Crew_Vest_Base", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Crew_Vest_Base", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};

//Basis-Klasse fuer UAV-Operatoren
class TTT_Uavoperator_Base_Us : TTT_Base_Us {
    author = "Tactical Training Team";
    displayName = "UAV-Operator US (Template)";
    vehicleClass = "TTT_Template_Us";
    uniformClass = "TTT_Uniform_Base";
    backpack = "B_UAV_01_backpack_F";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_UAVBattery", "ACE_GD300_b", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "ACE_EarPlugs", "rhsusf_acc_eotech_552", "ACE_UAVBattery", "ACE_GD300_b", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Heavy_Base", "TTT_Helmet_3_Us_Desert", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "tf_anprc152" };
    weapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "rhs_m4a1_grip_acog3_Usmc", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag" };
};