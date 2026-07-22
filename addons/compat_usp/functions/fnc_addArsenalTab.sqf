#include "../script_component.hpp"

/*
* Author: Zorn
* This function creates an Custom ACE Arsenal Tab for the Userfacing Items (Packages and Lighters) of the Mod.
*
* Arguments:
*
* Return Value:
* None
*
* Example:
* ['something', player] call prefix_component_fnc_functionname
*
* Public: No
*/


params [
    ["_value",        true,         [true]       ]
];

if (_value) then {
    private _exists = missionNamespace getVariable [QGVAR(arsenalTabEstablished), nil];
    
    if ( isNil _exists ) then {
        missionNamespace setVariable [QGVAR(arsenalTabEstablished), true];

        [
            [] call FUNC(getAllItems),
            "USP",
            QPATHTOF(data\ui\light_cig.paa) // Image Path ToDo change
        ] call ace_arsenal_fnc_addRightPanelButton
    };
};
