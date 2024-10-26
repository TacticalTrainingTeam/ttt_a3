class CfgVehicles {
	class B_RadioBag_01_black_F;

	class TTT_Radiobackpack_Base : B_RadioBag_01_black_F {
		scope = 0;
		maximumLoad = 320;
		mass = 50;
	};

	class TTT_backpack_radio_coyote : TTT_Radiobackpack_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Funk Rucksack (Coyote)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\backpacks\data\TTT_backpack_radio_coyote_co.paa"};
	};

	class TTT_backpack_radio_olive : TTT_Radiobackpack_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Funk Rucksack (Olive)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"z\ttt\addons\backpacks\data\TTT_backpack_radio_olive_co.paa"};
	};
};

