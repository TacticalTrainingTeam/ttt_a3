#include "..\script_component.hpp"

params ["_unit"];

(magazines _unit) findIf {_x in GVAR(cases)} >= 0
