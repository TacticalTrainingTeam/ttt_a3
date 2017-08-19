	
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
class TTT_Uniform_Base_Bw : U_B_CombatUniform_mcam {
		scope = 1;
		displayName = "TTT Uniform Base BW";
		picture = "\ttt_a3\ttt_units_base\misc\TTT_uniform_icon_bw.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
		
        class ItemInfo : ItemInfo
        {
			uniformModel="-";
            uniformClass = "TTT_Base_Bw";
            containerClass = "Supply60";
			mass=40;
        };
	};