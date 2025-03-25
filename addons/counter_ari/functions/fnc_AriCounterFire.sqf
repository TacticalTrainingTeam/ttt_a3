	#include "..\script_component.hpp"

    ///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Author: Redd
	//
	//	Description: Let enemy artillery shot on position of own artillery when they are shooting, with given radius and given amount of shells
	//				 To simulate deviation, the targetpoint will be random within the radius
	//				 You can choose to decrement the radius for every shot so shells will come closer to the center
	//				 Time for counterfire depends on artillery radar, if artillery radar is destroyed it takes more time to shoot back 
	//				 
	//	Blacklist units when useing headless client: Yes (Blacklist enemy arti crew)
	//
	//	Example: this addeventhandler ["fired", {[_this select 0,_this select 5,100,selectRandom [3,4,5],true,[enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4],[],0] remoteExec ["Redd_fnc_AriCounterFire",2]}];
	//			 Add eventhandler to own artillery in units initline
	//			 		 
	//	Parameter(s): 0: OBJECT - Own artillery
	//				  1: Config - Magazine
	//				  2: NUMBER - Radius for counterfire
	//				  3: NUMBER - Rounds for counterfire
	//				  4: BOOLEAN - True if you want a decrementing radius, otherwise false
	//				  5: ARRAY - Enemy artillery variable names
	//				  6: ARRAY - Enemy artillery radar variable names (Optional)
	//				  7: NUMBER - Time for counterfire in seconds
	//				  
	//	Returns: true
	//  
	///////////////////////////////////////////////////////////////////////////////////////////////////	
	
	//Check if global variable is initialised
	/*
	if (isNil {Redd_artiMission}) then 
	{

		//Set global variable
  		Redd_artiMission = false;
		
	};
	*/

	//As long as there is no other firemission the artillery can shoot
	if !(missionNamespace getVariable ["Redd_artiMission", false]) then 
	{
		
		params ["_ownArty","_magazine","_radius","_rounds","_decrementRadius","_enemyArtyArray","_enemyArtyRadarArray","_counterTime"];
		
		//Exit if there are no guns anymore
		if (_enemyArtyArray isEqualTo []) exitWith {};
		
		_ammo = 0;//init
		//Get enemy ari ammo
		{

			if (alive _x) exitWith 
			{

				_ammo = getArtilleryAmmo [_x] select 0;
				
			};

		}
		forEach _enemyArtyArray;
		
		//Check for range
		if ((getPos _ownArty) inRangeOfArtillery [_enemyArtyArray, _ammo]) then
		{
			
			//check which ammo was fired, if own Artillery doesnt shoot with maingun
			if ((_magazine isKindOf ["32Rnd_155mm_Mo_shells", configFile >> "CfgMagazines"]) or (_magazine isKindOf ["14Rnd_80mm_rockets", configFile >> "CfgMagazines"])) then
			{
			
				//Set global variable true so no other trigger can call this function
				//Redd_artiMission = true;
				missionNamespace setVariable ["Redd_artiMission", true];

				//Calculate time for counterfire depending on number of Enemy artillery radars
				{

					if (!alive _x) then
					{

						_counterTime = _counterTime + 10;

					};

				}
				forEach _enemyArtyRadarArray;

				//Now wait to "calculate" the own artillery position for the enemy to shoot back
				uiSleep _counterTime;
			
				//Get trigger position
				_centerPos = getPos _ownArty;

				//Get all rounds to fire
				_allShots = _rounds * (count _enemyArtyArray);

				//Start the counter with zero shots fired, do it Global, otherwise Redd_fnc_AriFireMission doesnt knows the variable
				Redd_arti_shots = 0;
				
				{
				
					//Check if artillery is alive, otherwise subtract the rounds this artillery has shot
					if ((!alive _x) or ({alive _x} count crew _x == 0)) then {_allShots = _allShots - _rounds};

					//Only run if artillery is alive and has crew
					if ((alive _x) and ({alive _x} count crew _x > 0)) then 
					{
					
						//Get the right ammo, ever artillery should have HE at first magazine
						//Doesent work for mortar with ACE
						_ammo = getArtilleryAmmo [_x] select 0;

						//ToDo remove spawn
						//Spawn the firemission function
						[_x,_centerPos,_radius,_ammo,_rounds,_decrementRadius] spawn FUNC(AriFireMission);
						
						//Wait a while for the next artillery to fire
						uiSleep (0.75 + random 0.5);

					};

				}
				forEach _enemyArtyArray;
				
				//Wait for all rounds to be shot, than remove eventhandler for each artillery and set ammo 1
				waitUntil {sleep 1;Redd_arti_shots == _allShots};
				{
					
					_x setVehicleAmmo 1;
					
				}
				forEach _enemyArtyArray;
				
				//Set global variable to false so artillery can get another firemission
				missionNamespace setVariable ["Redd_artiMission", false];
				
			};

		};

	};

	true