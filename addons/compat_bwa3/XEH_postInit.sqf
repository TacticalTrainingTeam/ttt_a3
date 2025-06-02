#include "script_component.hpp"

["BWA3_NH90_TTH_Base", "init", {
    (_this select 0) lockCargo [12, true];
    (_this select 0) lockCargo [13, true];
},
true,
[],
true
] call CBA_fnc_addClassEventHandler;

["BWA3_NH90_TTH_M3M_Base", "init", {
    (_this select 0) lockCargo [12, true];
    (_this select 0) lockCargo [13, true];
},
true,
[],
true
] call CBA_fnc_addClassEventHandler;