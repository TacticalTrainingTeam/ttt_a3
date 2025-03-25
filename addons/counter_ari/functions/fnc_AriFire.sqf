#include "..\script_component.hpp"
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Author: Redd
	//
	//	Description: Let artillery shot to a given area with given radius an given amount of shells
	//				 To simulate deviation, the targetpoint will be random within the radius
	//				 You can choose to decrement the radius for every shot so shells will come closer to the center
	//				 
	//	Blacklist units when useing headless client: Yes (Blacklist enemy arti crew)
	//
	//	Example: [thisTrigger,100,selectRandom [3,4,5],true,[enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4]] spawn Redd_fnc_AriFire;
	//			 Create trigger on position where you want the artillery to shoot at with specific radius, set to "OnlyServer"	
	//			 Take trigger radius for parameter radius
	//			 Spawn from OnActivation 
	//			 		 
	//	Parameter(s): 0: OBJECT - Trigger
	//				  1: NUMBER - Radius
	//				  2: NUMBER - Rounds
	//				  3: BOOLEAN - True if you want a decrementing radius, otherwise false
	//				  4: ARRAY - Artillery variable names
	//				  
	//	Returns: true
	//  
	///////////////////////////////////////////////////////////////////////////////////////////////////	
	
	//Check if global variable is initialised
	/*
	if (isNil {Redd_artiMission}) then 
	{
  
  		//Set global variable
		missionNamespace setVariable ["Redd_artiMission", false];
  
	};
	*/

	//As long as there is no other firemission the artillery can shoot
	if !(missionNamespace getVariable ["Redd_artiMission", false]) then 
	{
		
		params ["_artiTarget","_radius","_rounds","_decrementRadius","_enemyArtyArray"];

		//Exit if there are no guns anymore
		if (_enemyArtyArray isEqualTo []) exitWith {};

		_ammo = 0; //init
		//Get enemy ari ammo
		{

			if (alive _x) exitWith 
			{

				_ammo = getArtilleryAmmo [_x] select 0;
				
			};

		}
		forEach _enemyArtyArray;

		//Check for range 
		if ((getPos _artiTarget) inRangeOfArtillery [_enemyArtyArray, _ammo]) then
		{
			
			//Set global variable true so no other trigger can call this function
			//Redd_artiMission = true;
			missionNamespace setVariable ["Redd_artiMission", true];

			//Get trigger position
			_centerPos = getPos _artiTarget;

			//Get all rounds to fire
			_allShots = _rounds * (count _enemyArtyArray);

			//Start the counter with zero shots fired, do it Global, otherwise the eventhandler doesnt know the variable
			Redd_arti_shots = 0;
			
			{
				//Check if artillery is alive, otherwise exit and subtract the rounds this artillery has shot
				if ((!alive _x) or ({alive _x} count crew _x == 0)) then {_allShots = _allShots - _rounds};

				//Only run if artillery is alive and has crew
				if ((alive _x) and ({alive _x} count crew _x > 0)) then 
				{
				
					//Get the right ammo, ever artillery should have HE at first magazine
					//Doesent work for mortar with ACE
					_ammo = getArtilleryAmmo [_x] select 0;

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

	true