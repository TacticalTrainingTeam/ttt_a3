/// item macros definition ///
#define item_1(a) a
#define item_2(a) a, a
#define item_3(a) a, a, a
#define item_4(a) a, a, a, a
#define item_5(a) a, a, a, a, a
#define item_6(a) a, a, a, a, a, a
#define item_7(a) a, a, a, a, a, a, a
#define item_8(a) a, a, a, a, a, a, a, a
#define item_9(a) a, a, a, a, a, a, a, a, a
#define item_10(a) a, a, a, a, a, a, a, a, a, a
#define item_11(a) a, a, a, a, a, a, a, a, a, a, a
#define item_12(a) a, a, a, a, a, a, a, a, a, a, a, a

/// Equipment list macros definition ///
#define MAG_XX(a,b) class _xx_##a {magazine = #a; count = b;};
#define ITEM_XX(a,b) class _xx_##a {name = #a; count = b;};

// Compatibility
#define mag_xx(a,b) class _xx_##a {magazine = #a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = #a; count = b;}
#define item_xx(a,b) class _xx_##a {name = #a; count = b;}
#define backpack_xx(a,b) class _xx_##a {backpack = #a; count = b;}

/// Standardausruestung ///

/// Global Defineable Items ///
#define ITEMS_ACE_DEFAULT "ACE_NVG_Wide", "ACE_EarPlugs",  item_2(ACE_CableTie), item_2(ACE_IR_Strobe_Item), "ACE_MapTools", "ACE_Flashlight_MX991"
#define ITEMS_US_DEFAULT "rhsusf_acc_eotech_552"
#define ITEMS_SNIPER "ACE_Kestrel4500", "ACE_ATragMX", "ACE_RangeCard"

#define LINKED_ITEMS_DEFAULT "BWA3_G_Combat_Clear", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152" 

#define WEAPON_BINOCULAR "Binocular"
#define WEAPON_RANGEFINDER "ACE_Yardage450"
#define WEAPON_LASER_DESIGNATOR "Laserdesignator"
#define WEAPON_LASER_DESIGNATOR_MAGAZINES "Laserbatteries"
#define WEAPON_ARMA "Throw", "Put"

#define MAGAZINES_SMOKE item_5(SmokeShell), item_2(SmokeShellGreen), item_2(SmokeShellPurple), item_2(ACE_M84), item_2(ACE_HandFlare_Green)

/// Weapons US ///
#define WEAPON_US_PRIMARY "rhs_m4a1_grip_acog"
#define WEAPON_US_PRIMARY_GL "rhs_m4a1_m320_acog"
#define WEAPON_US_PRIMARY_MAGAZINES "rhs_mag_30Rnd_556x45_Mk318_Stanag"

#define WEAPON_US_SECONDARY "rhsusf_weap_m1911a1"
#define WEAPON_US_SECONDARY_MAGAZINES "rhsusf_mag_7x45acp_MHP"

// Helper for assigning different weapon with ammo of primary
#define WEAPONS_US_GIVEN_WEAPON(PRIMARY_WEAPON, BINOCULAR_SLOT) PRIMARY_WEAPON, WEAPON_US_SECONDARY, BINOCULAR_SLOT, WEAPON_ARMA
#define WEAPONS_US(BINOCULAR_SLOT) WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY, BINOCULAR_SLOT)
#define WEAPON_US_MAGAZINES_DEFAULT item_6(WEAPON_US_PRIMARY_MAGAZINES), item_2(WEAPON_US_SECONDARY_MAGAZINES)

// Gray
#define WEAPON_US_SPECIAL "rhs_weap_hk416d10_grip3"
#define WEAPON_US_SPECIAL_GL "rhs_weap_hk416d10_m320"
#define WEAPON_US_SPECIAL_ACCESSORY "rhsusf_acc_anpeq15_light", "rhsusf_acc_ACOG3", "rhsusf_acc_rotex5_grey"

// MG
#define WEAPON_US_MG "rhs_weap_m240b_elcan"
#define WEAPON_US_MG_MAGAZINES "rhsusf_100Rnd_762x51_m80a1epr"
#define WEAPON_US_MG_MAGAZINES_NO_STR rhsusf_100Rnd_762x51_m80a1epr

// LMG
#define WEAPON_US_LMG "rhs_weap_m249_pip_L"
#define WEAPON_US_LMG_MAGAZINES "rhsusf_200Rnd_556x45_soft_pouch"
#define WEAPON_US_LMG_MAGAZINES_NO_STR rhsusf_200Rnd_556x45_soft_pouch
#define WEAPON_US_LMG_ACCESSORY "rhsusf_acc_ELCAN"

// AT
#define WEAPON_US_AT "rhs_weap_M136"

// Supporting Groups
#define WEAPON_US_PRIMARY_LIGHT "rhs_weap_m4_carryhandle"
#define WEAPON_US_PRIMARY_SILENCER "rhsusf_acc_rotex5_grey"

// Sniper
#define WEAPON_US_SNIPER "srifle_LRR_LRPS_F"
#define WEAPON_US_SNIPER_MAGAZINES "7Rnd_408_Mag"

/// Backpack Stuff ///		
#define TRANSPORT_ITEMS_MEDIC_STUFF \
	ITEM_XX(ACE_fieldDressing,9)\
	ITEM_XX(ACE_packingBandage,3)\
	ITEM_XX(ACE_tourniquet,2)
    
// TF
#define TRANSPORT_ITEMS_TF \
    ITEM_XX(ACE_GD300_b,1) \
    ITEM_XX(Binocular,1)
#define TRANSPORT_MAGAZINES_TF \
    MAG_XX(1Rnd_Smoke_Grenade_shell,6) \
    MAG_XX(1Rnd_SmokeRed_Grenade_shell,6)
  
// GL
#define TRANSPORT_ITEMS_GL
#define TRANSPORT_MAGAZINES_GL \
    MAG_XX(1Rnd_HE_Grenade_shell,12)

// MG Assistant
#define TRANSPORT_ITEMS_MG_ASSIST
#define TRANSPORT_MAGAZINES_MG_ASSIST \
    MAG_XX(WEAPON_US_MG_MAGAZINES_NO_STR,2)

// MG
#define TRANSPORT_ITEMS_MG \
    ITEM_XX(ACE_SpareBarrel,1)
#define TRANSPORT_MAGAZINES_MG \
    MAG_XX(WEAPON_US_MG_MAGAZINES_NO_STR,1)

// LMG
#define TRANSPORT_ITEMS_LMG
#define TRANSPORT_MAGAZINES_LMG \
    MAG_XX(WEAPON_US_LMG_MAGAZINES_NO_STR,2)

// AT
#define TRANSPORT_ITEMS_AT

// Rifleman
#define TRANSPORT_ITEMS_RIFLEMAN

// FAC
#define TRANSPORT_ITEMS_FAC \
    ITEM_XX(ACE_GD300_b,1)
#define TRANSPORT_MAGAZINES_FAC \
    MAG_XX(1Rnd_SmokeRed_Grenade_shell,6)

// Engineer
#define TRANSPORT_ITEMS_ENGINEER \
	ITEM_XX(ACE_VMH3,1)\
	ITEM_XX(ACE_DefusalKit,1)\
	ITEM_XX(ACE_M26_Clacker,1)
#define TRANSPORT_MAGAZINES_ENGINEER \
    MAG_XX(SLAMDirectionalMine_Wire_Mag,2) \
    MAG_XX(DemoCharge_Remote_Mag,2)

// Medic
#define TRANSPORT_ITEMS_MEDIC \
    ITEM_XX(ACE_fieldDressing,10) \
    ITEM_XX(ACE_elasticBandage,25) \
    ITEM_XX(ACE_quikclot,20) \
    ITEM_XX(ACE_packingBandage,15) \
    ITEM_XX(ACE_tourniquet,3) \
    ITEM_XX(ACE_salineIV_500,4) \
    ITEM_XX(ACE_salineIV,2) \
    ITEM_XX(ACE_atropine,5) \
    ITEM_XX(ACE_epinephrine,8) \
    ITEM_XX(ACE_morphine,8) \
    ITEM_XX(ACE_surgicalKit,3)

// Doctor
#define TRANSPORT_ITEMS_DOCTOR \
    ITEM_XX(ACE_fieldDressing,15) \
    ITEM_XX(ACE_elasticBandage,15) \
    ITEM_XX(ACE_quikclot,15) \
    ITEM_XX(ACE_packingBandage,15) \
    ITEM_XX(ACE_tourniquet,2) \
    ITEM_XX(ACE_salineIV,6) \
    ITEM_XX(ACE_atropine,5) \
    ITEM_XX(ACE_epinephrine,12) \
    ITEM_XX(ACE_morphine,12) \
    ITEM_XX(ACE_personalAidKit,3) \
    ITEM_XX(ACE_surgicalKit,5) \
    ITEM_XX(ACE_GD300_b,1)

// Pilot
#define TRANSPORT_ITEMS_PILOT \
    ITEM_XX(ACE_GD300_b,1)

// OPL
#define TRANSPORT_ITEMS_CO \
    ITEM_XX(ACE_DK10_b,1)
    
/// Group Stuff ///
#define ITEMS_GELB BERETS(Yellow)
#define ITEMS_GRAU BERETS(Grey), WEAPON_US_SPECIAL_ACCESSORY
#define ITEMS_GOLD BERETS(Gold)
#define ITEMS_GREEN BERETS(Green)
#define ITEMS_BRAUN BERETS(Brown)
#define ITEMS_SCHWARZ BERETS(Black)
#define ITEMS_ROT BERETS(Red)
#define ITEMS_BRONZE BERETS(Bronze)
#define ITEMS_BLAU BERETS(Blue)
#define ITEMS_VIOLETT BERETS(Violet)
#define ITEMS_ORANGE BERETS(Orange)
#define ITEMS_WEISS BERETS(White)
#define ITEMS_PLATIN BERETS(Platinum)
#define ITEMS_SILBER BERETS(Silver), "TTT_Helmet_Buzzard"
#define ITEMS_ADLER BERETS(Platinum)
#define ITEMS_BUSSARD BERETS(Silver)
#define ITEMS_HABICHT BERETS(Silver)
	
/// Vest Config ///
#define get_vest(army,group,kind,camo) get_str(append_dummy(append_dummy(append_dummy(append_dummy(append_dummy(append_dummy(append_dummy(TTT_Vest_)kind)_)group)_)army)_)camo)

/// Berets Config ///
#define BERETS(group) get_str(append_dummy(TTT_Beret_)group)

/// Stringification Marco ///
#define get_str(string) #string

///Dummy Marco for Appending Strings ///
#define append_dummy(str) str
