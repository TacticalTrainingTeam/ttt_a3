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
	class TTT_Berets_Blau : HelmetBase {
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
	class TTT_Berets_Braun : TTT_Berets_Blau {
		author = "Reimchen";
		displayName = "TTT Barrett Braun";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_braun_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_braun_co.paa"};
	};
	//Barrett: Bronze
	class TTT_Berets_Bronze : TTT_Berets_Blau {
		displayName = "TTT Barrett Bronze";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_bronze_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_bronze_co.paa"};
	};
	//Barrett: Gelb
	class TTT_Berets_Gelb : TTT_Berets_Blau {
		displayName = "TTT Barrett Gelb";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gelb_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gelb_co.paa"};
	};
	//Barrett: Gold
	class TTT_Berets_Gold : TTT_Berets_Blau {
		displayName = "TTT Barrett Gold";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gold_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gold_co.paa"};
	};
	//Barrett: Grau
	class TTT_Berets_Grau : TTT_Berets_Blau {
		displayName = "TTT Barrett Grau";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_grau_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_grau_co.paa"};
	};
	//Barrett: Gruen
	class TTT_Berets_Gruen : TTT_Berets_Blau {
		displayName = "TTT Barrett Gruen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gruen_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gruen_co.paa"};
	};
	//Barrett: Logo
	class TTT_Berets_Logo : TTT_Berets_Blau {
		displayName = "TTT Barrett Logo";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_logo_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_logo_co.paa"};
	};
	//Barrett: Platin
	class TTT_Berets_Platin : TTT_Berets_Blau {
		displayName = "TTT Barrett Platin";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_platin_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_platin_co.paa"};
	};
	//Barrett: Rot
	class TTT_Berets_Rot : TTT_Berets_Blau {
		displayName = "TTT Barrett Rot";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_rot_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_rot_co.paa"};
	};
	//Barrett: Schwarz
	class TTT_Berets_Schwarz : TTT_Berets_Blau {
		displayName = "TTT Barrett Schwarz";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_schwarz_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_schwarz_co.paa"};
	};
	//Barrett: Silber
	class TTT_Berets_Silber : TTT_Berets_Blau {
		displayName = "TTT Barrett Silber";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_silber_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_silber_co.paa"};
	};
	//Barrett: Violett
	class TTT_Berets_Violett : TTT_Berets_Blau {
		displayName = "TTT Barrett Violett";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_violett_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_violett_co.paa"};
	};
	//Barrett: Weiss
	class TTT_Berets_Weiss : TTT_Berets_Blau {
		displayName = "TTT Barrett Weiss";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_weiss_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_weiss_co.paa"};
	};
};