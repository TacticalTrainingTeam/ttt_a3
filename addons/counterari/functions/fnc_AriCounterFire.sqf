	#include "..\script_component.hpp"
/*
* Author: Redd (code updated by Andx & EinStein)
*
* Description:
* Let enemy artillery shot on position of own artillery when they are shooting, with given radius and given amount of shells
* To simulate deviation, the targetpoint will be random within the radius
* You can choose to decrement the radius for every shot so shells will come closer to the center
* Time for counterfire depends on artillery radar, if artillery radar is destroyed it takes more time to shoot back
* 
* Blacklist units when useing headless client: 
* Yes (Blacklist enemy arti crew)
* 
* Arguments:
* 0: <OBJECT> 												own artillery
* 1: <Config>												magazine
* 2: <ARRAY>												enemy artillery variable names
* 3: <INTEGER>	(optional, default: 100) 					radius for counterfire
* 4: <INTEGER>	(optional, default: selectRandom [3,4,5])	rounds for counterfire
* 5: <BOOL>		(optional, default: true)					true if you want a decrementing radius, otherwise false
* 6: <INTEGER>	(optional, default: 0)						delay for counterfire in seconds
* 7: <ARRAY>												enemy artillery radar variable names (Optional)
*
* Return Value:
* <BOOL> true if executed
*
* Example:
* this addEventhandler ["fired", {[_this select 0,_this select 5,100,selectRandom [3,4,5],true,[enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4],[],0] remoteExec ["ttt_counterari_fnc_AriCounterFire",2]}];
* Add eventhandler to own artillery in units initline
*
* Public: Yes
*/

if (!isServer || missionNamespace getVariable ["Redd_ariCounterFire", false]) exitWith {};

params [
	"_ownArty",
	"_magazine",
	"_enemyArtyArray",
	["_radius", 100, [42]],
	["_rounds", (selectRandom [3,4,5]), [42]],
	["_decrementRadius", true, [true]],
	["_counterTime", 0, [42]],
	["_enemyArtyRadarArray", [], [[]]]
];

//Exit if there are no guns anymore
if (_enemyArtyArray isEqualTo []) exitWith {};

_ammo = 0;//init
//Get enemy ari ammo
{
	if (alive _x) exitWith 
	{
		_ammo = getArtilleryAmmo [_x] select 0;
	};
} forEach _enemyArtyArray;

//Check for range
if ((getPos _ownArty) inRangeOfArtillery [_enemyArtyArray, _ammo]) then
{
	
	//check which ammo was fired, if own Artillery doesnt shoot with maingun
	if ((_magazine isKindOf ["32Rnd_155mm_Mo_shells", configFile >> "CfgMagazines"]) or (_magazine isKindOf ["14Rnd_80mm_rockets", configFile >> "CfgMagazines"])) then
	{
	
		//Set global variable true so no other trigger can call this function
		//Redd_ariCounterFire = true;
		missionNamespace setVariable ["Redd_ariCounterFire", true];

		//Calculate time for counterfire depending on number of Enemy artillery radars
		{
			if (!alive _x) then
			{
				_counterTime = _counterTime + 10;
			};
		} forEach _enemyArtyRadarArray;

		//Now wait to "calculate" the own artillery position for the enemy to shoot back via CBA
		[
			{
				params ["_ownArty","_radius","_rounds","_decrementRadius","_enemyArtyArray"];
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

						//Call the firemission function random delayed for each Arty via CBA
						[
							{
								params ["_arty","_centerPos","_radius","_ammo","_rounds","_decrementRadius"];
								[_arty,_centerPos,_radius,_ammo,_rounds,_decrementRadius] call FUNC(AriFireMission);
							},
							[_x,_centerPos,_radius,_ammo,_rounds,_decrementRadius],
							(0.75 + random 0.5)
						] call CBA_fnc_waitAndExecute;
					};
				} forEach _enemyArtyArray;
				
				//Wait for all rounds to be shot, than remove eventhandler for each artillery and set ammo 1
				[
					{
						params ["_allShots"];
						Redd_arti_shots == _allShots
					},
					{
						params ["","_enemyArtyArray"];
						//reset ammo
						{_x setVehicleAmmo 1;} forEach _enemyArtyArray;

						//Set global variable to false so artillery can get another firemission
						missionNamespace setVariable ["Redd_ariCounterFire", false];
					},
					[_allShots,_enemyArtyArray]
				] call CBA_fnc_waitUntilAndExecute;
			},
			[_ownArty,_radius,_rounds,_decrementRadius,_enemyArtyArray],
			_counterTime
		] call CBA_fnc_waitAndExecute;
	};
};
true