#include "..\script_component.hpp"
/*
* Author: Redd (code updated by Andx & EinStein)
*
* Description:
* Let artillery shot to a given area with given radius an given amount of shells
* To simulate deviation, the targetpoint will be random within the radius
* You can choose to decrement the radius for every shot so shells will come closer to the center
* 
* Blacklist units when useing headless client: 
* Yes (Blacklist enemy arti crew)
* 
* Arguments:
* 0: <OBJECT>	trigger
* 1: <INTEGER>	radius
* 2: <INTEGER>	rounds for counterfire
* 3: <BOOL>		true if you want a decrementing radius, otherwise false
* 4: <ARRAY>	enemy artillery variable names
*
* Return Value:
* <BOOL> true if executed
*
* Example:
* [thisTrigger,100,selectRandom [3,4,5],true,[enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4]] call ttt_counterari_fnc_positionFire;
* Create trigger on position where you want the artillery to shoot at with specific radius, set to "OnlyServer"	
* Take trigger radius for parameter radius
* Spawn from OnActivation 
*
* Public: Yes
*/

if (!isServer || missionNamespace getVariable ["Redd_positionFire", false]) exitWith {};

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
	missionNamespace setVariable ["Redd_positionFire", true];

	//Get trigger position
	_centerPos = getPos _artiTarget;

	//Get all rounds to fire
	_allShots = _rounds * (count _enemyArtyArray);

	//Start the counter with zero shots fired, do it Global, otherwise the eventhandler doesnt know the variable
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
					[_arty,_centerPos,_radius,_ammo,_rounds,_decrementRadius] call FUNC(fireMission);
				},
				[_x,_centerPos,_radius,_ammo,_rounds,_decrementRadius],
				random 2
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
			missionNamespace setVariable ["Redd_positionFire", false];
		},
		[_allShots,_enemyArtyArray]
	] call CBA_fnc_waitUntilAndExecute;
};
true