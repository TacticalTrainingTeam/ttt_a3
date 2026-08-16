#include "..\script_component.hpp"
/*
* Author: Redd (reworked for multiple counter-battery groups by Andx & EinStein)
*
* Description:
* Let enemy artillery shot on position of own artillery when they are shooting, with given radius and given amount of shells
* To simulate deviation, the targetpoint will be random within the radius
* You can choose to decrement the radius for every shot so shells will come closer to the center
* Time for counterfire depends on artillery radar, if artillery radar is destroyed it takes more time to shoot back
* The responding group (identified by its own member vehicles) ignores a new fire mission while it is still
* resolving a previous one, so several independent friendly/enemy pairs can run their own counter-battery
* duels at the same time without interfering with each other.
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
* this addEventhandler ["fired", {["ttt_counterari_counterFire", [_this select 0,_this select 5,[enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4],100,selectRandom [3,4,5],true,0,[]]] call CBA_fnc_serverEvent}];
* Add eventhandler to own artillery in units initline
*
* Public: Yes
*/

if (!isServer) exitWith {false};

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
if (_enemyArtyArray isEqualTo []) exitWith {false};

//Only ammo capable of counter-battery fire should trigger a response
if !((_magazine isKindOf ["32Rnd_155mm_Mo_shells", configFile >> "CfgMagazines"]) || (_magazine isKindOf ["14Rnd_80mm_rockets", configFile >> "CfgMagazines"])) exitWith {false};

//This specific enemy group is already resolving an earlier fire mission
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
if !((getPos _ownArty) inRangeOfArtillery [_enemyArtyArray, _ammo]) exitWith {false};

{_x setVariable [QGVAR(busy), true];} forEach _enemyArtyArray;

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
		private _centerPos = getPos _ownArty;

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
				private _ammo = getArtilleryAmmo [_x] select 0;

				//Call the firemission function random delayed for each Arty via CBA
				[
					{
						params ["_arty","_centerPos","_radius","_ammo","_rounds","_decrementRadius","_shotsFired"];
						[_arty,_centerPos,_radius,_ammo,_rounds,_decrementRadius,_shotsFired] call FUNC(fireMission);
					},
					[_x,_centerPos,_radius,_ammo,_rounds,_decrementRadius,_shotsFired],
					random 2
				] call CBA_fnc_waitAndExecute;
			};
		} forEach _enemyArtyArray;

		if (_allShots == 0) exitWith
		{
			{_x setVariable [QGVAR(busy), false];} forEach _enemyArtyArray;
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
	},
	[_ownArty,_radius,_rounds,_decrementRadius,_enemyArtyArray],
	_counterTime
] call CBA_fnc_waitAndExecute;

true
