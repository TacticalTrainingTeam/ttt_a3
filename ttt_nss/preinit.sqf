//Zeus   
if (isServer) then {
   
	zeusTheConen = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0,0,0], [], 0, "NONE"];
	zeusTheConen setVariable ["showNotification", false, true];
	zeusTheConen setVariable ["birdType", "", true];
	zeusTheConen setVariable ["Owner", "76561197999852928", true];
	zeusTheConen setVariable ["Addons", 3, true];
	zeusTheConen setVariable ["Forced", 0, true];
   
	zeusHighhead = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0,0,0], [], 0, "NONE"];
	zeusHighhead setVariable ["showNotification", false, true];
	zeusHighhead setVariable ["birdType", "", true];
	zeusHighhead setVariable ["Owner", "76561198016851722", true];
	zeusHighhead setVariable ["Addons", 3, true];
	zeusHighhead setVariable ["Forced", 0, true];
	
	diag_log format["[NSS] Zeus created"];
}; 
