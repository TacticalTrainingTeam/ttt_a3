#include "..\script_component.hpp"
/*
* Authors: Andx & EinStein
*
* Description:
* Marks the module as the anchor point for one enemy artillery group. A friendly artillery
* module synced to this module resolves its synchronized artillery pieces directly (see
* fnc_initFriendlyAri.sqf) to build its counter-battery pool. Multiple independent enemy
* modules may be placed, each paired with a different friendly module, to run several
* counter-battery groups side by side.
*
* Arguments:
* Arma 3 Module Function Parameters
* https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
*
* Return Value:
* True <BOOL>
*
* Public: No
*/

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (_activated) then {
    private _artyCount = {!(_x isKindOf "Logic")} count _units;

    if (_artyCount == 0) then {
        WARNING_1("Enemy artillery module %1 has no artillery pieces synced to it",_logic);
    };

    INFO_2("Enemy artillery module %1 registered with %2 pieces",_logic,_artyCount);
};

true;
