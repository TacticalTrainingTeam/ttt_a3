   #include "..\script_component.hpp"
   /*
    * Authors: You
    * Description.
    *
    * Arguments:
    * 0: Argument (optional, default: value) <OBJECT>
    *
    * Return Value:
    * Return description <NONE>
    *
    * Example:
    * [params] call PREFIX_advancedslingloading_fnc_getRopesAndCargo
    *
    * Public: No
    */


params ["_vehicle","_ropeIndex"];

private ["_selectedCargo","_selectedRopes"];

_selectedCargo = (call ASL_Get_Cargo);
_selectedRopes = (call ASL_Get_Ropes);
[_selectedRopes, _selectedCargo];
