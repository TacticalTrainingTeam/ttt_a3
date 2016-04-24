//by Reimchen for TTT
//tacticalteam.de

	class ItemCore;
	class InventoryItem_Base_F;
    
	class ttt_ItemCore: ItemCore {
        type = 4096;
        detectRange = -1;
        simulation = "ItemMineDetector";
    };
	
	class ttt_bft_base: TTT_ItemCore {
		author = "Reimchen";
		scope = 0;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	
	class ACE_GD300_b: ttt_bft_base {
		scope = 2;
		displayName = "TTT-PDA";
		picture = "\ttt_a3\ttt_bft\data\ttt_pda_co.paa";
		descriptionShort = "Mit diesem Item bist du im BFT-System sichtbar.";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 2;	
		};	
	};