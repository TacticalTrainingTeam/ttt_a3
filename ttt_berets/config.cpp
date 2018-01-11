class CfgPatches {
	class TTT_Berets {
		requiredAddons[] = {ttt_main, Characters_f_epb, Weapons_F};
		units[] = {
			"TTT_Beret_Item_Blue",
			"TTT_Beret_Item_Brown",
			"TTT_Beret_Item_Bronze",
			"TTT_Beret_Item_Yellow",
			"TTT_Beret_Item_Gold",
			"TTT_Beret_Item_Grey",
			"TTT_Beret_Item_Green",
			"TTT_Beret_Item_Logo",
			"TTT_Beret_Item_Platinum",
			"TTT_Beret_Item_Red",
			"TTT_Beret_Item_Black",
			"TTT_Beret_Item_Silver",
			"TTT_Beret_Item_Violet",
			"TTT_Beret_Item_White"
			};
		weapons[] = {
			"TTT_Beret_Blue",
			"TTT_Beret_Brown",
			"TTT_Beret_Bronze",
			"TTT_Beret_Yellow",
			"TTT_Beret_Gold",
			"TTT_Beret_Grey",
			"TTT_Beret_Green",
			"TTT_Beret_Logo",
			"TTT_Beret_Platinum",
			"TTT_Beret_Red",
			"TTT_Beret_Black",
			"TTT_Beret_Silver",
			"TTT_Beret_Violet",
			"TTT_Beret_White"
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