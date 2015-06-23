/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
	class TTT_Truppfahrzeug_Mg_Woodland : TTT_Truppfahrzeug_Mg_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\truppfahrzeug\camo1.paa", "\ttt_vehicles\us\woodland\truppfahrzeug\camo2.paa", "\ttt_vehicles\us\woodland\truppfahrzeug\camo3.paa", "\ttt_vehicles\us\woodland\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Woodland";
		displayName = "TTT Truppfahrzeug MG (Woodland)";
	};
	
	
	class TTT_Truppfahrzeug_Gl_Woodland : TTT_Truppfahrzeug_Gl_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\truppfahrzeug\camo1.paa", "\ttt_vehicles\us\woodland\truppfahrzeug\camo2.paa", "\ttt_vehicles\us\woodland\truppfahrzeug\camo3.paa", "\ttt_vehicles\us\woodland\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Woodland";
		displayName = "TTT Truppfahrzeug GL (Woodland)";
	};
	
	/*
	#############################################################
	### TTT OPL-Fahrzeug
	#############################################################
	*/
	
	class TTT_Oplfahrzeug_Woodland : TTT_Oplfahrzeug_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\oplfahrzeug\camo1.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo2.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo3.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo4.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo5.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo6.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo7.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo8.paa", "\ttt_vehicles\us\woodland\oplfahrzeug\camo9.paa"};
		crew = "TTT_Schwarz1_Woodland";
		displayName = "TTT OPL-Fahrzeug (Woodland)";
	};
	
	/*
	#############################################################
	### TTT Schützenpanzer
	#############################################################
	*/

	class TTT_Schuetzenpanzer_Woodland : TTT_Schuetzenpanzer_Desert {
		author = "Tactical Training Team";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\schuetzenpanzer\camo1.paa", "\ttt_vehicles\us\woodland\schuetzenpanzer\camo2.paa", "\ttt_vehicles\us\woodland\schuetzenpanzer\camo3.paa", "\ttt_vehicles\us\woodland\schuetzenpanzer\camo4.paa"};
		crew = "TTT_Bronze1_Woodland";
		displayName = "TTT Schuetzenpanzer (Woodland)";
	};
	
	/*
	#############################################################
	### TTT Kampfpanzer
	#############################################################
	*/
	
	class TTT_Kampfpanzer_Woodland : TTT_Kampfpanzer_Desert {
		author = "Tactical Training Team";
		//hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\kampfpanzer\camo1.paa", "\ttt_vehicles\us\woodland\kampfpanzer\camo2.paa", "\ttt_vehicles\us\woodland\kampfpanzer\camo3.paa"};
		crew = "TTT_Bronze1_Woodland";
		displayName = "TTT Kampfpanzer (Woodland)";
		model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1_tuski_wd";
	};
	
	/*
	#############################################################
	### TTT Kampfhelikopter
	#############################################################
	*/
	
	class TTT_Kampfhelikopter_Woodland : TTT_Kampfhelikopter_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\kampfhelikopter\camo1.paa", "\ttt_vehicles\us\woodland\kampfhelikopter\camo2.paa", "\ttt_vehicles\us\woodland\kampfhelikopter\camo3.paa"};
		crew = "TTT_Adler1_Woodland";
		displayName = "TTT Kampfhelikopter (Woodland)";
	};
	
	/*
	#############################################################
	### TTT Sanitaetshelikopter
	#############################################################
	*/	
	
	class TTT_Sanitaetshelikopter_Woodland : TTT_Sanitaetshelikopter_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\sanitaetshelikopter\camo1.paa", "\ttt_vehicles\us\woodland\sanitaetshelikopter\camo2.paa", "\ttt_vehicles\us\woodland\sanitaetshelikopter\camo3.paa"};
		crew = "TTT_Weiss3_Woodland";
		displayName = "TTT Sanitaetshelikopter (Woodland)";
	};
	
	/*
	#############################################################
	### TTT Logistikhelikopter
	#############################################################
	*/
	
	class TTT_Logistikhelikopter_Woodland : TTT_Logistikhelikopter_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_vehicles\us\woodland\logistikhelikopter\camo1.paa", "\ttt_vehicles\us\woodland\logistikhelikopter\camo2.paa", "\ttt_vehicles\us\woodland\logistikhelikopter\camo3.paa"};
		crew = "TTT_Bussard1_Woodland";
		displayName = "TTT Logistikhelikopter (Woodland)";
	};
