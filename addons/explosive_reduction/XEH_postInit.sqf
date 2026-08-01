#include "script_component.hpp"

if (!hasInterface) exitWith {};

{
    [_x] call FUNC(addActions);
} foreach GVAR(classes);
