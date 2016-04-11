	class FlagCarrierCore;
	class TTT_Flagge_Base : FlagCarrierCore {
		author = "Tactical Training Team";
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
	class TTT_Flagge_Logo : TTT_Flagge_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Flagge Logo";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_logo_co.paa'";
		};
	};
	class TTT_Flagge_Blau : TTT_Flagge_Logo {
		displayName = "TTT Flagge Blau";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_blau_co.paa'";
		};
	};
	class TTT_Flagge_Braun : TTT_Flagge_Logo {
		displayName = "TTT Flagge Braun";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_braun_co.paa'";
		};
	};
		class TTT_Flagge_Bronze : TTT_Flagge_Logo {
		displayName = "TTT Flagge Bronze";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_bronze_co.paa'";
		};
	};
	class TTT_Flagge_Gelb : TTT_Flagge_Logo {
		displayName = "TTT Flagge Gelb";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_gelb_co.paa'";
		};
	};
	class TTT_Flagge_Gold : TTT_Flagge_Logo {
		displayName = "TTT Flagge Gold";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_gold_co.paa'";
		};
	};
	class TTT_Flagge_Grau : TTT_Flagge_Logo {
		displayName = "TTT Flagge Grau";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_grau_co.paa'";
		};
	};
	class TTT_Flagge_Gruen : TTT_Flagge_Logo {
		displayName = "TTT Flagge Gruen";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_gruen_co.paa'";
		};
	};
	class TTT_Flagge_Platin : TTT_Flagge_Logo {
		displayName = "TTT Flagge Platin";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_platin_co.paa'";
		};
	};
	class TTT_Flagge_Rot : TTT_Flagge_Logo {
		displayName = "TTT Flagge Rot";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_rot_co.paa'";
		};
	};
	class TTT_Flagge_Schwarz : TTT_Flagge_Logo {
		displayName = "TTT Flagge Schwarz";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_schwarz_co.paa'";
		};
	};
	class TTT_Flagge_Silber : TTT_Flagge_Logo {
		displayName = "TTT Flagge Silber";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_silber_co.paa'";
		};
	};
	class TTT_Flagge_Violett : TTT_Flagge_Logo {
		displayName = "TTT Flagge Violett";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_violett_co.paa'";
		};
	};
	class TTT_Flagge_Weiss : TTT_Flagge_Logo {
		displayName = "TTT Flagge Weiss";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\ttt_logos\ttt_weiss_co.paa'";
		};
	};