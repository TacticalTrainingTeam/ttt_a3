#include "..\script_component.hpp"
/*
* Author: Redd (reworked for multiple counter-battery groups by Andx & EinStein)
*
* Description:
* Let enemy artillery shot on position of own artillery when they are shooting, with given radius and given amount of shells
* To simulate deviation, the targetpoint will be random within the radius
* You can choose to decrement the radius for every shot so shells will come closer to the center
* The responding group (identified by its own member vehicles) ignores a new fire mission while it is still
* resolving a previous one, so several independent friendly/enemy pairs can run their own counter-battery
* duels at the same time without interfering with each other.
*
* Blacklist units when useing headless client:
* Yes (Blacklist enemy arti crew)
*
* Arguments:
* 0: <OBJECT>                                                 own artillery
* 1: <Config>                                                magazine
* 2: <ARRAY>                                                enemy artillery variable names
* 3: <INTEGER>    (optional, default: 100)                     radius for counterfire
* 4: <INTEGER>    (optional, default: selectRandom [3,4,5])    rounds for counterfire
* 5: <BOOL>        (optional, default: true)                    true if you want a decrementing radius, otherwise false
* 6: <INTEGER>    (optional, default: 0)                        delay for counterfire in seconds
*
* Return Value:
* <BOOL> true if executed
*
* Example:
* this addEventhandler ["fired", {["ttt_counterari_counterFire", [_this select 0,_this select 5,[enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4],100,selectRandom [3,4,5],true,0]] call CBA_fnc_serverEvent}];
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
    ["_counterTime", 0, [42]]
];

//Exit if there are no guns anymore
if (_enemyArtyArray isEqualTo []) exitWith {WARNING_1("No enemy artillery left to counter-fire against %1",_ownArty); false};

//Only ammo the firing vehicle's own artillery computer offers should trigger a response (filters out e.g. a
//mounted defensive MG on the same vehicle). Checked dynamically against the firer instead of a hardcoded
//magazine whitelist, since every artillery mod (BWA3, CUP, ...) uses its own magazine classnames.
if !(_magazine in (getArtilleryAmmo [_ownArty])) exitWith {WARNING_2("Magazine %1 fired by %2 is not an artillery magazine, ignoring",_magazine,_ownArty); false};

//This specific enemy group is already resolving an earlier fire mission
if ({_x getVariable [QGVAR(busy), false]} count _enemyArtyArray > 0) exitWith {WARNING_1("Enemy artillery synced to %1 is still busy with a previous fire mission",_ownArty); false};

private _ammo = "";
//Get enemy ari ammo
{
    if (alive _x) exitWith
    {
        _ammo = getArtilleryAmmo [_x] select 0;
    };
} forEach _enemyArtyArray;

//Check for range
if !((getPos _ownArty) inRangeOfArtillery [_enemyArtyArray, _ammo]) exitWith {WARNING_1("%1 is out of the synced enemy artillery's firing range, no counter-fire",_ownArty); false};

{_x setVariable [QGVAR(busy), true];} forEach _enemyArtyArray;

//Now wait to "calculate" the own artillery position for the enemy to shoot back via CBA
[
    {
        params ["_ownArty","_radius","_rounds","_decrementRadius","_enemyArtyArray"];
        //Get the own artillery's current position (it may have moved during the counter-fire delay)
        [getPos _ownArty, _radius, _rounds, _decrementRadius, _enemyArtyArray] call FUNC(executeFireMission);
    },
    [_ownArty,_radius,_rounds,_decrementRadius,_enemyArtyArray],
    _counterTime
] call CBA_fnc_waitAndExecute;

true
