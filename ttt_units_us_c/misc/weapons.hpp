	
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
	class TTT_Uniform_Base_Us : Uniform_Base {
		scope = 0;
		displayName = "TTT Uniform Base US";
		picture = "\ttt_a3\ttt_units_base\misc\TTT_uniform_icon_us.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
		
		class TTT_Uniform_ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "TTT_Base_Bw";
			containerClass = "Supply60";
			mass = 40;
		};
		
		class ItemInfo : TTT_Uniform_ItemInfo {};
	};