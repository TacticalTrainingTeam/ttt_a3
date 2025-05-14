#include "..\script_component.hpp"
/*
* Authors: Andx & EinStein
*
* Description:
* n.a.
*
* Arguments:
* Arma 3 Module Function Parameters
* https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
*
* Return Value:
* n.a.
*
* Example:
* n.a.
*
* Public: No
*/

params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];

GVAR(enemyAri) = [];

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then
{
     {
        GVAR(enemyAri) pushBack _x;
        INFO_1("Adding enemy Ari %1: ",_x);
     } forEach _units;

};
// Module function is executed by spawn command, so returned value is not necessary, but it is good practice.
true;

