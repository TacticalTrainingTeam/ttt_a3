	
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
class TTT_Uniform_Base_Us : U_B_CombatUniform_mcam {
		scope = 0;
		displayName = "TTT Uniform Base US";
		picture = "\ttt_a3\ttt_units_base\misc\TTT_uniform_icon_us.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
		
        class ItemInfo : ItemInfo
        {
            uniformClass = "TTT_Base_Us";
            containerClass = "Supply60";
        };
	};