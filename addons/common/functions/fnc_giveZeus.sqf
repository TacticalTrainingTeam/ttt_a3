#include "..\script_component.hpp"
/*
 * Author: Andx
 * Creates a curator (Zeus) module and assigns it to a unit, promoting them
 * to Zeus. Called server-side by chatcommands' "#zeus" chat command and its
 * ZEN "Promote to Zeus" context menu action (chatcommands_zen).
 *
 * Arguments:
 * 0: Unit to promote <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call ttt_common_fnc_giveZeus
 *
 * Public: No
 */

params ["_unit"];

private _curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];
_curator setVariable ["Addons", 3, true];
_curator addCuratorEditableObjects [allMissionObjects "", true];
_unit assignCurator _curator;
_unit setVariable [QGVAR(curator), _curator, true];

INFO_1("Zeus assigned to %1",_unit);
