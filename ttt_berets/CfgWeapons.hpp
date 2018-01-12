	//Barrett: Blau
	class TTT_Beret_Blue : HelmetBase {
		author = "$STR_Tactical_Training_Team";
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
	class TTT_Beret_Brown : TTT_Beret_Blue {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Barrett Braun";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_braun_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_braun_co.paa"};
	};
	//Barrett: Bronze
	class TTT_Beret_Bronze : TTT_Beret_Blue {
		displayName = "TTT Barrett Bronze";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_bronze_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_bronze_co.paa"};
	};
	//Barrett: Gelb
	class TTT_Beret_Yellow : TTT_Beret_Blue {
		displayName = "TTT Barrett Gelb";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gelb_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gelb_co.paa"};
	};
	//Barrett: Gold
	class TTT_Beret_Gold : TTT_Beret_Blue {
		displayName = "TTT Barrett Gold";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gold_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gold_co.paa"};
	};
	//Barrett: Grau
	class TTT_Beret_Grey : TTT_Beret_Blue {
		displayName = "TTT Barrett Grau";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_grau_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_grau_co.paa"};
	};
	//Barrett: Gruen
	class TTT_Beret_Green : TTT_Beret_Blue {
		displayName = "TTT Barrett Gruen";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_gruen_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_gruen_co.paa"};
	};
	//Barrett: Logo
	class TTT_Beret_Logo : TTT_Beret_Blue {
		displayName = "TTT Barrett Logo";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_logo_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_logo_co.paa"};
	};
	//Barrett: Platin
	class TTT_Beret_Platinum : TTT_Beret_Blue {
		displayName = "TTT Barrett Platin";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_platin_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_platin_co.paa"};
	};
	//Barrett: Rot
	class TTT_Beret_Red : TTT_Beret_Blue {
		displayName = "TTT Barrett Rot";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_rot_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_rot_co.paa"};
	};
	//Barrett: Schwarz
	class TTT_Beret_Black : TTT_Beret_Blue {
		displayName = "TTT Barrett Schwarz";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_schwarz_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_schwarz_co.paa"};
	};
	//Barrett: Silber
	class TTT_Beret_Silver : TTT_Beret_Blue {
		displayName = "TTT Barrett Silber";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_silber_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_silber_co.paa"};
	};
	//Barrett: Violett
	class TTT_Beret_Violet : TTT_Beret_Blue {
		displayName = "TTT Barrett Violett";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_violett_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_violett_co.paa"};
	};
	//Barrett: Weiss
	class TTT_Beret_White : TTT_Beret_Blue {
		displayName = "TTT Barrett Weiss";
		author = "Reimchen";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_weiss_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_weiss_co.paa"};
	};
	//Barrett: Orange
	class TTT_Beret_Orange : TTT_Beret_Blue {
		displayName = "TTT Barrett Orange";
		picture = "\ttt_a3\ttt_berets\data\ui\berets_orange_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_berets\data\common\berets_orange_co.paa"};
	};
	
	//OLD Classnames
	class TTT_Beret_Blau : TTT_Beret_Blue {
		scope = 0;
	};	
	class TTT_Beret_Braun : TTT_Beret_Brown {
		scope = 0;
	};	
	class TTT_Beret_Gelb : TTT_Beret_Yellow {
		scope = 0;
	};
	class TTT_Beret_Grau : TTT_Beret_Grey {
		scope = 0;
	};
	class TTT_Beret_Gruen : TTT_Beret_Green {
		scope = 0;
	};
	class TTT_Beret_Rot : TTT_Beret_Red {
		scope = 0;
	};
	class TTT_Beret_Schwarz : TTT_Beret_Black {
		scope = 0;
	};
	class TTT_Beret_Silber : TTT_Beret_Silver {
		scope = 0;
	};
	class TTT_Beret_Violett : TTT_Beret_Violet {
		scope = 0;
	};
	class TTT_Beret_Weiss : TTT_Beret_White {
		scope = 0;
	};