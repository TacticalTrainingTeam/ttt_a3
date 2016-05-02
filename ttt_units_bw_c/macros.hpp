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
 
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

/// Backpack Medic Stuff ///		
#define backpack_medic_supply_standard \
	item_xx(ACE_elasticBandage,7);\
	item_xx(ACE_packingBandage,5);\
	item_xx(ACE_tourniquet,2);\
	item_xx(ACE_morphine,1)
	
/// Vest Config
#define get_vest(army,group,kind,camo) get_vest1(army,group,kind)_##camo
#define get_vest1(army,group,kind) get_vest2(army,group)_##army
#define get_vest2(army,group) get_vest3(army)_##group
#define get_vest3(army) TTT_Vest_##kind
