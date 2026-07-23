#include "script_component.hpp"

private _all = [];
private _nvgs = ["USP_Gear_NVG"] call EFUNC(common,getAllItems);
private _misc = ["USP_Gear_Acc"] call EFUNC(common,getAllItems);
_all = _all + _nvgs + _misc - ["USP_BOLTCUTTER"];

[
    _all,
    "USP Gear"
] call ace_arsenal_fnc_addRightPanelButton;
