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

if (!isServer) exitWith {false};

params ["_artiTarget","_radius","_rounds","_decrementRadius","_enemyArtyArray"];

//Exit if there are no guns anymore
if (_enemyArtyArray isEqualTo []) exitWith {false};

//Skip if this specific group of guns is still resolving an earlier fire mission
if ({_x getVariable [QGVAR(busy), false]} count _enemyArtyArray > 0) exitWith {false};

private _ammo = "";
//Get enemy ari ammo
{
	if (alive _x) exitWith
	{
		_ammo = getArtilleryAmmo [_x] select 0;
	};
} forEach _enemyArtyArray;

//Check for range
if !((getPos _artiTarget) inRangeOfArtillery [_enemyArtyArray, _ammo]) exitWith {false};

{_x setVariable [QGVAR(busy), true];} forEach _enemyArtyArray;

//Get trigger position
private _centerPos = getPos _artiTarget;

//Shared shot counter for this mission, mutated in place instead of a global variable so
//concurrent missions for other pairs never see each other's shots
private _shotsFired = [0];
private _allShots = 0;

{
	//Only run if artillery is alive and has crew
	if ((alive _x) and ({alive _x} count crew _x > 0)) then
	{
		_allShots = _allShots + _rounds;

		//Get the right ammo, ever artillery should have HE at first magazine
		//Doesent work for mortar with ACE
		private _ammoClass = getArtilleryAmmo [_x] select 0;

		//Call the firemission function random delayed for each Arty via CBA
		[
			{
				params ["_arty","_centerPos","_radius","_ammo","_rounds","_decrementRadius","_shotsFired"];
				[_arty,_centerPos,_radius,_ammo,_rounds,_decrementRadius,_shotsFired] call FUNC(fireMission);
			},
			[_x,_centerPos,_radius,_ammoClass,_rounds,_decrementRadius,_shotsFired],
			random 2
		] call CBA_fnc_waitAndExecute;
	};
} forEach _enemyArtyArray;

if (_allShots == 0) exitWith
{
	{_x setVariable [QGVAR(busy), false];} forEach _enemyArtyArray;
	false
};

//Wait for all rounds to be shot, than reset ammo and release the group for its next mission
[
	{
		params ["_shotsFired","_allShots"];
		(_shotsFired select 0) >= _allShots
	},
	{
		params ["","","_enemyArtyArray"];
		//reset ammo
		{_x setVehicleAmmo 1;} forEach _enemyArtyArray;

		{_x setVariable [QGVAR(busy), false];} forEach _enemyArtyArray;
	},
	[_shotsFired,_allShots,_enemyArtyArray]
] call CBA_fnc_waitUntilAndExecute;

true
