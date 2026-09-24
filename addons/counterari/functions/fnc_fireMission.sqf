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
* Yes
*
* Arguments:
* 0: <OBJECT>    artillery vehicle
* 1: <ARRAY>    position to fire at
* 2: <INTEGER>    radius for counterfire
* 3: <CONFIG>    ammo classname
* 4: <INTEGER>    rounds for counterfire
* 5: <BOOL>        true if you want a decrementing radius, otherwise false
* 6: <ARRAY>    single-element array used as a shared shot counter across every artillery piece
*                of the same fire mission, mutated in place instead of a global variable <ARRAY of NUMBER>
*
* Return Value:
* <BOOL> true if executed
*
* Example:
* [arty, centerPos, radius, ammo, rounds, decrementRadius, shotsFired] call ttt_counterari_fnc_fireMission;
*
* Public: No
*/

params ["_unit","_centerPos","_radius","_ammo","_rounds","_decrementRadius","_shotsFired"];

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
            params ["_unit","_centerPos","_radius","_ammo","_decrementRadius","_rounds","_fireIndex","_shotsFired"];

            //check if you want to decrement the radius and decrement it per shot depending on radius and current count
            if (_decrementRadius) then
            {
                _radius = _radius - ((_fireIndex - 1) * (_radius / _rounds));
            };

            //Calculate where to shot to simulate deviation
            private _randomPos = _centerPos getPos [_radius * sqrt random 1, random 360];
            _randomPos = [round (_randomPos select 0), round (_randomPos select 1), 0];

            if (alive _unit) then {_unit doArtilleryFire [_randomPos, _ammo, 1];};

            _shotsFired set [0, (_shotsFired select 0) + 1];
        },
        [_unit,_centerPos,_radius,_ammo,_decrementRadius,_rounds,_i,_shotsFired]
    ] call CBA_fnc_waitUntilAndExecute;
};
true
