/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Basisklassen
class TTT_Base_Bw : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    author = "Tactical Training Team";
    displayName = "Basis-Klasse BW";
    scope = 0;
	icon = "iconMan";
    faction = "TTT_faction_Bw";
    vehicleClass = "TTT_Template_Bw";
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
class TTT_Truppfuehrer_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Truppfuehrer BW (Template)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Leader_Tropen", "TTT_Helmet_1_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Leader_Tropen", "TTT_Helmet_1_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Grenadiere
class TTT_Grenadier_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Grenadier BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Grenadier_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Grenadier_Tropen", "TTT_Helmet_2_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Grenadier_Tropen", "TTT_Helmet_2_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer MG-Assistenten
class TTT_Mgassistent_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "MG-Assistent BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Mgassistent_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer MG-Schuetzen
class TTT_Mgschuetze_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "MG-Schuetze BW (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Mgschuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_Bw_Tropentarn" };
    weapons[] = { "BWA3_MG5_Tan_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_MG5_Tan_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_2(BWA3_120Rnd_762x51) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_2(BWA3_120Rnd_762x51) };
};

//Basis-Klasse fuer LMG-Schuetzen
class TTT_Lmgschuetze_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "LMG-Schuetze BW (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Autorifleman_Tropen", "TTT_Helmet_4_Bw_Tropentarn" };
    weapons[] = { "BWA3_MG4_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_MG4_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_200Rnd_556x45) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_200Rnd_556x45) };
};

//Basis-Klasse fuer AT-Assistent
class TTT_Atassistent_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "AT-Assistent BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_5_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_5_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
};

//Basis-Klasse fuer AT-Schuetzen
class TTT_Atschuetze_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "AT-Schuetze BW (Template)";
    icon = "iconManAT";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Atschuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put", "BWA3_Pzf3" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put", "BWA3_Pzf3" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "BWA3_Pzf3_IT" };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "BWA3_Pzf3_IT" };
};

//Basis-Klasse fuer Schuetzen
class TTT_Schuetze_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Schuetze BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_6_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP)};
};

//Basis-Klasse fuer Funker/FAC
class TTT_Funkerfac_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Funker/FAC BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Funkerfac_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_2_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_2_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
};

//Basis-Klasse fuer Pioniere
class TTT_Pionier_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Pionier BW (Template)";
    icon = "iconManExplosive";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    canDeactivateMines = 1;
    backpack = "TTT_Backpack_Pionier_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Gefechtssanitaeter
class TTT_Gefechtssanitaeter_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Gefechtssanitaeter BW (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    attendant = 1;
    backpack = "TTT_Backpack_Gefechtssanitaeter_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_3_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_3_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Feldaerzte
class TTT_Feldarzt_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "Feldarzt BW (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    attendant = 1;
    backpack = "TTT_Backpack_Feldarzt_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_1_Bw_Tropentarn" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Medic_Tropen", "TTT_Helmet_1_Bw_Tropentarn" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer Piloten
class TTT_Pilot_Base_Bw : TTT_Base_Bw {
    _generalMacro = "B_Helipilot_F";
    author = "Tactical Training Team";
    displayName = "Pilot BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Tropen", "TTT_Helmet_Eagle" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Tropen", "TTT_Helmet_Eagle" };
	weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Basis-Klasse fuer UAV-Operatoren
class TTT_Uavoperator_Base_Bw : TTT_Base_Bw {
    author = "Tactical Training Team";
    displayName = "UAV-Operator BW (Template)";
    vehicleClass = "TTT_Template_Bw";
    uniformClass = "TTT_Uniform_Base_Bw";
    backpack = "B_UAV_01_backpack_F";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_UAVBattery", "ACE_GD300_b" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_UAVBattery", "ACE_GD300_b" };
    linkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_Bw_Tropentarn", "B_UavTerminal" };
    respawnLinkedItems[] = { default_linkedItems, "BWA3_Vest_Rifleman1_Tropen", "TTT_Helmet_3_Bw_Tropentarn", "B_UavTerminal" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};