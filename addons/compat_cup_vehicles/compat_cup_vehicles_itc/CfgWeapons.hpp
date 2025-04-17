class CfgWeapons {
	class RocketPods;
	class rockets_230mm_GAT : RocketPods {
		class Mode_16;
	};
	class itc_land_cup_weap_mrls230 : rockets_230mm_GAT {
		modes[] = {"Mode_16"};
		displayName = SUBCSTRING(MRLS230Name1);  
		magazineReloadTime = 30;
		magazines[] = {
			"itc_land_m230hex_12rnd",
			"itc_land_m230pgm_12rnd"
		};
		class Mode_16 : Mode_16 {
			displayName = SUBCSTRING(MRLS230Name2);
			artilleryCharge = 1;
			reloadTime = 0.5;
		};
		class EventHandlers
		{
			class itc_land_veh_weapons
			{
				fired = "_this call itc_land_veh_weapons_fnc_fired;";
			};
		};
	};
};