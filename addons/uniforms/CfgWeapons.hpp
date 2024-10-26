class CfgWeapons {

    class UniformBase;

    class U_B_CombatUniform_mcam : UniformBase { class ItemInfo; };	
    
	class TT_Uniform_Base_US : U_B_CombatUniform_mcam {
		scope = 0;
		displayName = "TTT Uniform Base US";
		picture = "z\ttt\addons\uniforms\data\TTT_uniform_icon_us.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		
		class ItemInfo : ItemInfo {
			uniformClass = "TT_Uniform_Base_US";
			containerClass = "Supply60";
		};
	};

    class TTT_Uniform_Yellow_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Gelb (US Desert)";
		
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Yellow_US_Desert";
		};
	};
	
	class TTT_Uniform_Grey_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Grau (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Grey_US_Desert";
		};
	};
	
	class TTT_Uniform_Gold_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Gold (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Gold_US_Desert";
		};
	};
	
	class TTT_Uniform_Green_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Grün (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Green_US_Desert";
		};
	};
	
	class TTT_Uniform_Brown_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Braun (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Brown_US_Desert";
		};
	};
	
	class TTT_Uniform_Black_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Schwarz (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Black_US_Desert";
		};
	};
	
	class TTT_Uniform_Red_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Rot (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Red_US_Desert";
		};
	};	
	
	class TTT_Uniform_Bronze_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Bronze (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Bronze_US_Desert";
		};
	};
	
	class TTT_Uniform_Blue_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Blau (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Blue_US_Desert";
		};
	};

	class TTT_Uniform_Violet_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Violett (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Violet_US_Desert";
		};
	};		
	
	class TTT_Uniform_White_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Weiss (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_White_US_Desert";
		};
	};
	
	class TTT_Uniform_Silver_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Silber (US Desert)";
		ACE_GForceCoef = 0.55;
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Silver_US_Desert";
		};
	};

	class TTT_Uniform_Orange_US_Desert : TT_Uniform_Base_US {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "TTT Uniform Orange (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Orange_Us_Desert";
		};
	}; 

};