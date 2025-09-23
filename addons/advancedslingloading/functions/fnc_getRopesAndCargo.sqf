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
    * [params] call ttt_advancedslingloading_fnc_getRopesAndCargo
    *
    * Public: No
    */


params ["_vehicle","_ropeIndex"];

private ["_selectedCargo","_selectedRopes"];

_selectedCargo = (call FUNC(getCargo));
_selectedRopes = (call FUNC(getRopes));
[_selectedRopes, _selectedCargo];
