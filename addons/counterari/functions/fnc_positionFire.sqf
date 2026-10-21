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
* 0: <OBJECT>    trigger
* 1: <INTEGER>    radius
* 2: <INTEGER>    rounds for counterfire
* 3: <BOOL>        true if you want a decrementing radius, otherwise false
* 4: <ARRAY>    enemy artillery variable names
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
if (_enemyArtyArray isEqualTo []) exitWith {WARNING_1("No artillery left to fire at %1",_artiTarget); false};

//Skip if this specific group of guns is still resolving an earlier fire mission
if ({_x getVariable [QGVAR(busy), false]} count _enemyArtyArray > 0) exitWith {WARNING_1("Artillery synced to fire at %1 is still busy with a previous fire mission",_artiTarget); false};

private _ammo = "";
//Get enemy ari ammo
{
    if (alive _x) exitWith
    {
        _ammo = getArtilleryAmmo [_x] select 0;
    };
} forEach _enemyArtyArray;

//Check for ammo
if (_ammo isEqualTo "") exitWith {WARNING_1("No Ammo to fire in %1", _enemyArtyArray); false;};

//Check for range
if !((getPos _artiTarget) inRangeOfArtillery [_enemyArtyArray, _ammo]) exitWith {WARNING_1("%1 is out of the synced artillery's firing range",_artiTarget); false};

{_x setVariable [QGVAR(busy), true];} forEach _enemyArtyArray;

[getPos _artiTarget, _radius, _rounds, _decrementRadius, _enemyArtyArray] call FUNC(executeFireMission)
