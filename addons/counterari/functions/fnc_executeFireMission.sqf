#include "..\script_component.hpp"
/*
* Author: Andx & EinStein
*
* Description:
* Shared fire-mission runner used by both fnc_counterFire.sqf and fnc_positionFire.sqf once the
* target position, artillery pool and range/busy checks have already been resolved by the caller.
* Fires each alive artillery piece (with crew) at a random-deviated point around the center
* position, then releases the group's "busy" state once every round has been fired.
*
* Arguments:
* 0: <ARRAY>    center position to fire at
* 1: <INTEGER>  radius for counterfire
* 2: <INTEGER>  rounds for counterfire (per vehicle)
* 3: <BOOL>     true if you want a decrementing radius, otherwise false
* 4: <ARRAY>    artillery vehicles to fire the mission with (already marked QGVAR(busy) by the caller)
*
* Return Value:
* <BOOL> true if at least one vehicle fired, false if none were alive/crewed
*
* Public: No
*/

params ["_centerPos", "_radius", "_rounds", "_decrementRadius", "_enemyArtyArray"];

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
