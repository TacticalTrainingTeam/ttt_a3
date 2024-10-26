class CfgWeapons {
	class InventoryItem_Base_F; 
	class ItemCore;
	class HeadgearItem : InventoryItem_Base_F {};
	class HelmetBase : ItemCore {
		class ItemInfo : HeadgearItem {};
	};

	class TTT_Beret_Blue : HelmetBase {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Barett Blau";
		model = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
		picture = "z\ttt\addons\assets\data\ui\berets_blau_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_blau_co.paa"};
	
		class ItemInfo : ItemInfo {
			mass = 6;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {6};
		};
	};
	

	class TTT_Beret_Brown : TTT_Beret_Blue {
		author = "Tactical Training Team";
		displayName = "TTT Barett Braun";
		picture = "z\ttt\addons\assets\data\ui\berets_braun_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_braun_co.paa"};
	};

	class TTT_Beret_Bronze : TTT_Beret_Blue {
		displayName = "TTT Barett Bronze";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_bronze_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_bronze_co.paa"};
	};

	class TTT_Beret_Yellow : TTT_Beret_Blue {
		displayName = "TTT Barett Gelb";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_gelb_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_gelb_co.paa"};
	};

	class TTT_Beret_Gold : TTT_Beret_Blue {
		displayName = "TTT Barett Gold";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_gold_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_gold_co.paa"};
	};

	class TTT_Beret_Grey : TTT_Beret_Blue {
		displayName = "TTT Barett Grau";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_grau_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_grau_co.paa"};
	};

	class TTT_Beret_Green : TTT_Beret_Blue {
		displayName = "TTT Barett Gruen";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_gruen_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_gruen_co.paa"};
	};

	class TTT_Beret_Logo : TTT_Beret_Blue {
		displayName = "TTT Barett Logo";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_logo_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_logo_co.paa"};
	};

	class TTT_Beret_Platinum : TTT_Beret_Blue {
		displayName = "TTT Barett Platin";
		author = "Reimchen";
		picture = "\z\ttt\addons\assets\data\ui\berets_platin_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_platin_co.paa"};
	};

	class TTT_Beret_Red : TTT_Beret_Blue {
		displayName = "TTT Barett Rot";
		author = "Reimchen";
		picture = "\z\ttt\addons\assets\data\ui\berets_rot_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_rot_co.paa"};
	};

	class TTT_Beret_Black : TTT_Beret_Blue {
		displayName = "TTT Barett Schwarz";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_schwarz_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_schwarz_co.paa"};
	};

	class TTT_Beret_Silver : TTT_Beret_Blue {
		displayName = "TTT Barett Silber";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_silber_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_silber_co.paa"};
	};

	class TTT_Beret_Violet : TTT_Beret_Blue {
		displayName = "TTT Barett Violett";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_violett_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_violett_co.paa"};
	};

	class TTT_Beret_White : TTT_Beret_Blue {
		displayName = "TTT Barett Weiss";
		author = "Reimchen";
		picture = "z\ttt\addons\assets\data\ui\berets_weiss_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_weiss_co.paa"};
	};

	class TTT_Beret_Orange : TTT_Beret_Blue {
		displayName = "TTT Barett Orange";
		picture = "z\ttt\addons\assets\data\ui\berets_orange_icon_co.paa";
		hiddenSelectionsTextures[] = {"z\ttt\addons\assets\data\common\berets_orange_co.paa"};
	};
	
};