#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		author = ECSTRING(main,TacticalTrainingTeam);
		name = QUOTE(ADDON);
		url = ECSTRING(main,URL);
		requiredVersion = 1.0;
		requiredAddons[] = {"ttt_main"};
		units[] = {};
		weapons[] = {};
		VERSION_CONFIG;
        authors[] = {"DerZade [A]", "Andx"};
	};
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"