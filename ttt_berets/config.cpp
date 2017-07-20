class CfgPatches {
	class ttt_berets {
		requiredAddons[] = {ttt_main};
		units[] = {
			"TTT_Berets_Blau_Item",
			"TTT_Berets_Braun_Item",
			"TTT_Berets_Bronze_Item",
			"TTT_Berets_Gelb_Item",
			"TTT_Berets_Gold_Item",
			"TTT_Berets_Grau_Item",
			"TTT_Berets_Gruen_Item",
			"TTT_Berets_Logo_Item",
			"TTT_Berets_Platin_Item",
			"TTT_Berets_Rot_Item",
			"TTT_Berets_Schwarz_Item",
			"TTT_Berets_Silber_Item",
			"TTT_Berets_Violett_Item",
			"TTT_Berets_Weiss_Item"
			};
		weapons[] = {
			"TTT_Berets_Blau",
			"TTT_Berets_Braun",
			"TTT_Berets_Bronze",
			"TTT_Berets_Gelb",
			"TTT_Berets_Gold",
			"TTT_Berets_Grau",
			"TTT_Berets_Gruen",
			"TTT_Berets_Logo",
			"TTT_Berets_Platin",
			"TTT_Berets_Rot",
			"TTT_Berets_Schwarz",
			"TTT_Berets_Silber",
			"TTT_Berets_Violett",
			"TTT_Berets_Weiss"
		};
	};	
};

class CfgVehicles {
	//External class reference
	class Item_Base_F;
	
	#include "\ttt_a3\ttt_berets\CfgVehicles.hpp"
};

class CfgWeapons {
	//External class reference
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem : InventoryItem_Base_F {};
	class HelmetBase : ItemCore {
		class ItemInfo : HeadgearItem {};
	};

	#include "\ttt_a3\ttt_berets\CfgWeapons.hpp"	
};