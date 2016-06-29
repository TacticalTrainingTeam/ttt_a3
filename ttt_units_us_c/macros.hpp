/// item macros definition ///
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
#define mag_xx(a,b) class _xx_##a {magazine = #a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = #a; count = b;}
#define item_xx(a,b) class _xx_##a {name = #a; count = b;}
#define backpack_xx(a,b) class _xx_##a {backpack = #a; count = b;}

/// Standardausrüstung ///
#define default_items "rhsusf_acc_eotech_552", get_beret(GROUP_COLOR), default_ace_items  
#define default_weapons "Throw", "Put"
#define default_linkedItems "BWA3_G_Combat_Clear" 
#define default_ace_items "ACE_NVG_Wide", item_2(ACE_CableTie), item_2(ACE_IR_Strobe_Item), "ACE_MapTools", "ACE_Flashlight_MX991", get_beret(GROUP_COLOR)
#define default_smoke item_5(SmokeShell), item_2(SmokeShellGreen), item_2(SmokeShellPurple), item_2(ACE_M84), item_2(ACE_HandFlare_Green)
#define default_magazines item_2(rhsusf_mag_7x45acp_MHP), item_6(rhs_mag_30Rnd_556x45_Mk318_Stanag)
#define sniper_tools "ACE_Kestrel4500", "ACE_ATragMX", "ACE_RangeCard"

/// Backpack Medic Stuff ///		
#define backpack_medic_supply_standard \
	item_xx(ACE_elasticBandage,7);\
	item_xx(ACE_packingBandage,5);\
	item_xx(ACE_tourniquet,2);\
	item_xx(ACE_morphine,1)
	
/// Vest Config ///
#define get_vest(army,group,kind,camo) get_str(append_dummy(append_dummy(append_dummy(TTT_Vest_##kind)_##group)_##army)_##camo)

///Helmet Config ///
#define get_helmet(number,army,camo) get_str(append_dummy(append_dummy(TTT_Helmet_##number)_##army)_##camo)

/// Berets Config ///
#define get_beret(group) get_str(TTT_Berets_##group)

/// Stringification Marco ///
#define get_str(string) #string

///Dummy Marco for Appending Strings ///
#define append_dummy(str) str
