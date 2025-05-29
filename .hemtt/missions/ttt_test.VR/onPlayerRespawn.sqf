private _loadoutSQF = ["loadouts\", (player getVariable ["loadout", "test"]), ".sqf"] joinString "";
[] spawn compile preprocessFileLineNumbers _loadoutSQF;