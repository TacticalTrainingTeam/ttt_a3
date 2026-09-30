#include "..\script_component.hpp"
/*
* Author: Andx
*
* Description:
* Adds ZEN context menu actions to shield the hovered vehicle or building.
* https://zen-mod.github.io/ZEN/#/frameworks/context_menu
*
* Arguments:
* None
*
* Return Value:
* None
*
* Public: No
*/

private _category = [
    QGVAR(category),
    LLSTRING(zenCategory_displayName),
    "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa",
    {}
] call zen_context_menu_fnc_createAction;

private _categoryPath = [_category] call zen_context_menu_fnc_addAction;

private _vehicleShield = [
    QGVAR(vehicleShieldAction),
    LLSTRING(vehicleShieldAction_displayName),
    "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa",
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        [QGVAR(addVehicleShield), [_hoveredEntity]] call CBA_fnc_globalEventJIP;
        //Shown locally, not from the broadcasted event - ace_zeus_fnc_showMessage only renders on the machine with the curator display open
        [LLSTRING(hintVehicleShieldAdded)] call ace_zeus_fnc_showMessage;
    },
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        _hoveredEntity isEqualType objNull
        && {!isNull _hoveredEntity}
        && {_hoveredEntity isKindOf "AllVehicles"}
        && {!(_hoveredEntity isKindOf "Man")}
        && {!(_hoveredEntity getVariable [QGVAR(hasVHS), false])}
    }
] call zen_context_menu_fnc_createAction;

[_vehicleShield, _categoryPath] call zen_context_menu_fnc_addAction;

private _buildingShield = [
    QGVAR(buildingShieldAction),
    LLSTRING(buildingShieldAction_displayName),
    "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa",
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        [QGVAR(addBuildingShield), [_hoveredEntity]] call CBA_fnc_serverEvent;
        //Shown locally, not from the broadcasted event - ace_zeus_fnc_showMessage only renders on the machine with the curator display open
        [LLSTRING(hintBuildingShieldAdded)] call ace_zeus_fnc_showMessage;
    },
    {
        params ["", "", "", "", "", "_hoveredEntity"];
        _hoveredEntity isEqualType objNull
        && {!isNull _hoveredEntity}
        && {_hoveredEntity isKindOf "House"}
        && {!(_hoveredEntity getVariable [QGVAR(hasBuildingShield), false])}
    }
] call zen_context_menu_fnc_createAction;

[_buildingShield, _categoryPath] call zen_context_menu_fnc_addAction;
