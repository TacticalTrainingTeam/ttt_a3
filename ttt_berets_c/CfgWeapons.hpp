//by Reimchen for TTT
//tacticalteam.de

class CfgWeapons {
	//External class reference
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem : InventoryItem_Base_F {
	};
	class HelmetBase : ItemCore {
		class ItemInfo : HeadgearItem {
		};
	};
	//Barrett: Blau
	class TTT_Berets_Blue : HelmetBase {
		author = "Reimchen";
		scope = 2;
		displayName = "TTT Barrett Blau";
		model = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_blau_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_blau_co.paa"};
		allowedFacewear[] = {"G_Aviator", "G_Balaclava_blk", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "G_Shades_Black", "G_Shades_Blue", "G_Shades_Red", "G_Shades_Green"};
		
		class ItemInfo : ItemInfo {
			mass = 6;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {6};
		};
	};
	
	//Barrett: Braun
	class TTT_Berets_Brown : TTT_Berets_Blue {
		author = "Reimchen";
		displayName = "TTT Barrett Braun";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_braun_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_braun_co.paa"};
	};
	//Barrett: Bronze
	class TTT_Berets_Bronze : TTT_Berets_Blue {
		displayName = "TTT Barrett Bronze";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_bronze_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_bronze_co.paa"};
	};
	//Barrett: Gelb
	class TTT_Berets_Yellow : TTT_Berets_Blue {
		displayName = "TTT Barrett Gelb";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gelb_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gelb_co.paa"};
	};
	//Barrett: Gold
	class TTT_Berets_Gold : TTT_Berets_Blue {
		displayName = "TTT Barrett Gold";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gold_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gold_co.paa"};
	};
	//Barrett: Grau
	class TTT_Berets_Grey : TTT_Berets_Blue {
		displayName = "TTT Barrett Grau";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_grau_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_grau_co.paa"};
	};
	//Barrett: Gruen
	class TTT_Berets_Green : TTT_Berets_Blue {
		displayName = "TTT Barrett Gruen";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gruen_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gruen_co.paa"};
	};
	//Barrett: Logo
	class TTT_Berets_Logo : TTT_Berets_Blue {
		displayName = "TTT Barrett Logo";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_logo_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_logo_co.paa"};
	};
	//Barrett: Platin
	class TTT_Berets_Platin : TTT_Berets_Blue {
		displayName = "TTT Barrett Platin";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_platin_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_platin_co.paa"};
	};
	//Barrett: Rot
	class TTT_Berets_Red : TTT_Berets_Blue {
		displayName = "TTT Barrett Rot";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_rot_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_rot_co.paa"};
	};
	//Barrett: Schwarz
	class TTT_Berets_Black : TTT_Berets_Blue {
		displayName = "TTT Barrett Schwarz";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_schwarz_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_schwarz_co.paa"};
	};
	//Barrett: Silber
	class TTT_Berets_Silver : TTT_Berets_Blue {
		displayName = "TTT Barrett Silber";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_silber_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_silber_co.paa"};
	};
	//Barrett: Violett
	class TTT_Berets_Purple : TTT_Berets_Blue {
		displayName = "TTT Barrett Violett";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_violett_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_violett_co.paa"};
	};
	//Barrett: Weiss
	class TTT_Berets_White : TTT_Berets_Blue {
		displayName = "TTT Barrett Weiss";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_weiss_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_weiss_co.paa"};
	};
	//Barrett: Orange
	class TTT_Berets_Orange : TTT_Berets_Blue {
		displayName = "TTT Barrett Orange";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_orange_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_orange_co.paa"};
	};
	
	//OLD Classnames
	class TTT_Berets_Blau : TTT_Berets_Blue {
		author = "Reimchen";
		scope = 0;
	};	
	class TTT_Berets_Braun : TTT_Berets_Brown {
		author = "Reimchen";
		scope = 0;
	};	
	class TTT_Berets_Gelb : TTT_Berets_Yellow {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Grau : TTT_Berets_Grey {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Gruen : TTT_Berets_Green {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Rot : TTT_Berets_Red {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Schwarz : TTT_Berets_Black {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Silber : TTT_Berets_Silver {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Violett : TTT_Berets_Purple {
		author = "Reimchen";
		scope = 0;
	};
	class TTT_Berets_Weiss : TTT_Berets_White {
		author = "Reimchen";
		scope = 0;
	};
};