#include "..\script_component.hpp"

	///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Author: Redd
	//
	//	Description: Let artillery shot to a given area with given radius an given amount of shells
	//				 To simulate deviation, the targetpoint will be random within the radius
	//				 You can choose to decrement the radius for every shot so shells will come closer to the center  
	//				 
	//	Blacklist units when useing headless client: Yes
	//		 		 
	//	Parameter(s): 0: OBJECT - Artillery 
	//				  1: ARRAY - Position
	//				  2: NUMBER - Radius
	//				  3: CONFIG - Ammo classname
	//				  4: NUMBER - Rounds
	//				  5: BOLLEAN - True if you want a decrementing radius, otherwise false
	//
	//	Returns: true
	//  
	///////////////////////////////////////////////////////////////////////////////////////////////////	

	params ["_unit","_centerPos","_radius","_ammo","_rounds","_decrementRadius"];
	
	//Get weapon classname
	_weaponsArray = _unit weaponsTurret [0];
	_weapon = _weaponsArray select 0;

	//Let artillery shot the ammount of rounds
	for "_i" from 1 to _rounds do
	{
		[
			{
				params ["_unit"];			
				if (alive _unit) then 
				{
					unitReady _unit;
				}
				else
				{
					true;
				};
			},
			{
				params ["_unit","_centerPos","_radius","_ammo","_decrementRadius","_rounds","_fireIndex"];

				private _startRad = _radius;

				//check if you want to decrement the radius and decrement it per shot depending on radius and current count
				if (_decrementRadius) then
				{
					_radius = _radius - ((_fireIndex - 1) * (_radius / _rounds));
				};

				//Calculate where to shot to simulate deviation
				_randomPos = _centerPos getPos [_radius * sqrt random 1, random 360];
				_randomPos = [round (_randomPos select 0), round (_randomPos select 1), 0];

				if (alive _unit) then {_unit doArtilleryFire [_randomPos, _ammo, 1];};
				
				Redd_arti_shots = Redd_arti_shots + 1;
				hint format ["Unit: %1\nShot: %2 / %5\nRadius: %3 / %6\n\n(Decrement: %4)",_unit,_fireIndex,_radius,_decrementRadius,_rounds,_startRad];
			},
			[_unit,_centerPos,_radius,_ammo,_decrementRadius,_rounds,_i]
		] call CBA_fnc_waitUntilAndExecute;
	};
	true