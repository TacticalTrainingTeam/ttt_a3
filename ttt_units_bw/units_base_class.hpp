/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Basisklassen
class TTT_Base_BW : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    author = "$STR_Tactical_Training_Team";
    displayName = "Basis-Klasse BW";
    scope = 0;
	icon = "iconMan";
    faction = "TTT_faction_BW";
    vehicleClass = "TTT_Template_BW";
    uniformAccessories[] = {};
	uniformClass = "TTT_Uniform_Base_Bw";	
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

//Basis-Klasse fuer Schuetzen
class TTT_Soldier_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Schuetze BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
};

//Basis-Klasse fuer Truppfuehrer
class TTT_Teamleader_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Truppfuehrer BW (Template)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Teamleader_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Leader_Tropen", "TTT_Helmet_1_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Leader_Tropen", "TTT_Helmet_1_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Grenadiere
class TTT_Grenadier_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Grenadier BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Grenadier_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Grenadier_Tropen", "TTT_Helmet_2_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Grenadier_Tropen", "TTT_Helmet_2_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer MG-Schuetzen
class TTT_Soldier_MG_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "MG-Schuetze BW (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Soldier_MG_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_BW_Tropentarn" };
    weapons[] = { "BWA3_MG5_Tan_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_MG5_Tan_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_2(BWA3_120Rnd_762x51) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_2(BWA3_120Rnd_762x51) };
};

//Basis-Klasse fuer LMG-Schuetzen
class TTT_Soldier_LMG_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "LMG-Schuetze BW (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_BW_Tropentarn" };
    weapons[] = { "BWA3_MG4_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_MG4_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_200Rnd_556x45) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_200Rnd_556x45) };
};

//Basis-Klasse fuer AT-Schuetzen
class TTT_Soldier_AT_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "AT-Schuetze BW (Template)";
    icon = "iconManAT";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Soldier_AT_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons, "BWA3_Pzf3" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons, "BWA3_Pzf3" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "BWA3_Pzf3_IT" };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "BWA3_Pzf3_IT" };
};

//Basis-Klasse fuer MG-Assistenten
class TTT_Assistant_MG_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "MG-Assistent BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Assistant_MG_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer AT-Assistent
class TTT_Assistant_AT_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "AT-Assistent BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_5_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_5_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
};

//Basis-Klasse fuer Pioniere
class TTT_Pioneer_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Pionier BW (Template)";
    icon = "iconManExplosive";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    canDeactivateMines = 1;
    backpack = "TTT_Backpack_Pioneer_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Funker/FAC
class TTT_Operator_Radio_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Funker/FAC BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Operator_Radio_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_2_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_2_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
};

//Basis-Klasse fuer UAV-Operatoren
class TTT_Operator_UAV_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "UAV-Operator BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "B_UAV_01_backpack_F";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_UAVBattery", "ACE_GD300_b" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_UAVBattery", "ACE_GD300_b" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_BW_Tropentarn", "B_UavTerminal" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_BW_Tropentarn", "B_UavTerminal" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Gefechtssanitaeter
class TTT_Medic_Combat_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Gefechtssanitaeter BW (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    attendant = 1;
    backpack = "TTT_Backpack_Medic_Combat_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_3_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_3_BW_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Feldaerzte
class TTT_Medic_Doctor_Base_BW : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    displayName = "Feldarzt BW (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    attendant = 1;
    backpack = "TTT_Backpack_Medic_Doctor_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_1_BW_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_1_BW_Tropentarn" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Piloten
class TTT_Pilot_Base_BW : TTT_Base_BW {
    _generalMacro = "B_Helipilot_F";
    author = "$STR_Tactical_Training_Team";
    displayName = "Pilot BW (Template)";
    vehicleClass = "TTT_Template_BW";
    uniformClass = "TTT_Uniform_Base_BW";
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Tropen", "TTT_Helmet_Eagle" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Tropen", "TTT_Helmet_Eagle" };
	weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};