class CfgPatches {
	class ttt_berets {
		requiredAddons[] = {ttt_main};
		units[] = {
			"TTT_Berets_Blue_Item",
			"TTT_Berets_Brown_Item",
			"TTT_Berets_Bronze_Item",
			"TTT_Berets_Yellow_Item",
			"TTT_Berets_Gold_Item",
			"TTT_Berets_Grey_Item",
			"TTT_Berets_Green_Item",
			"TTT_Berets_Logo_Item",
			"TTT_Berets_Platinum_Item",
			"TTT_Berets_Red_Item",
			"TTT_Berets_Black_Item",
			"TTT_Berets_Silver_Item",
			"TTT_Berets_Violet_Item",
			"TTT_Berets_White_Item"
			};
		weapons[] = {
			"TTT_Berets_Blue",
			"TTT_Berets_Brown",
			"TTT_Berets_Bronze",
			"TTT_Berets_Yellow",
			"TTT_Berets_Gold",
			"TTT_Berets_Grey",
			"TTT_Berets_Green",
			"TTT_Berets_Logo",
			"TTT_Berets_Platinum",
			"TTT_Berets_Red",
			"TTT_Berets_Black",
			"TTT_Berets_Silver",
			"TTT_Berets_Violet",
			"TTT_Berets_White"
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