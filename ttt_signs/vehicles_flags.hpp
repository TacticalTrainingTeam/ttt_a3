	class FlagCarrierCore;
	class TTT_Flag_Base : FlagCarrierCore {
		author = "$STR_Tactical_Training_Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Flagge Base";
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		vehicleClass = "ttt_flags";
		icon = "iconObject_circle";
		keepHorizontalPlacement = 1;
		accuracy = 1000;
		animated = 0;
		nameSound = "obj_flag";
		supplyRadius = 2;
	};
	class TTT_Flag_Logo : TTT_Flag_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Flagge Logo";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_sign_co.paa'";
		};
	};
	class TTT_Flag_Blue : TTT_Flag_Logo {
		displayName = "TTT Flagge Blau";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_blau_co.paa'";
		};
	};
	class TTT_Flag_Brown : TTT_Flag_Logo {
		displayName = "TTT Flagge Braun";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_braun_co.paa'";
		};
	};
		class TTT_Flag_Bronze : TTT_Flag_Logo {
		displayName = "TTT Flagge Bronze";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_bronze_co.paa'";
		};
	};
	class TTT_Flag_Yellow : TTT_Flag_Logo {
		displayName = "TTT Flagge Gelb";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_gelb_co.paa'";
		};
	};
	class TTT_Flag_Gold : TTT_Flag_Logo {
		displayName = "TTT Flagge Gold";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_gold_co.paa'";
		};
	};
	class TTT_Flag_Grey : TTT_Flag_Logo {
		displayName = "TTT Flagge Grau";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_grau_co.paa'";
		};
	};
	class TTT_Flag_Green : TTT_Flag_Logo {
		displayName = "TTT Flagge Gruen";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_gruen_co.paa'";
		};
	};
	class TTT_Flag_Platinum : TTT_Flag_Logo {
		displayName = "TTT Flagge Platin";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_platin_co.paa'";
		};
	};
	class TTT_Flag_Red : TTT_Flag_Logo {
		displayName = "TTT Flagge Rot";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_rot_co.paa'";
		};
	};
	class TTT_Flag_Black : TTT_Flag_Logo {
		displayName = "TTT Flagge Schwarz";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_schwarz_co.paa'";
		};
	};
	class TTT_Flag_Silver : TTT_Flag_Logo {
		displayName = "TTT Flagge Silber";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_silber_co.paa'";
		};
	};
	class TTT_Flag_Violet : TTT_Flag_Logo {
		displayName = "TTT Flagge Violett";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_violett_co.paa'";
		};
	};
	class TTT_Flag_White : TTT_Flag_Logo {
		displayName = "TTT Flagge Weiss";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_weiss_co.paa'";
		};
	};
	class TTT_Flag_Orange : TTT_Flag_Logo {
		displayName = "TTT Flagge Orange";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_orange_co.paa'";
		};
	};