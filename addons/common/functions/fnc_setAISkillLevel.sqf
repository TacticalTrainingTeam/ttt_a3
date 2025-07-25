#include "..\script_component.hpp"

/*
 * Authors: Andx
 * Set the Skill Level of an AI to a set Range.
 *
 * https://community.bistudio.com/wiki/setSkill
 * Approximate ranges are:
 * Novice < 0.25
 * Rookie >= 0.25 and <= 0.45
 * Recruit > 0.45 and <= 0.65
 * Veteran > 0.65 and <= 0.85
 * Expert > 0.85
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Skill Level (Optional, Default: "Veteran") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * make a unit a Rookie
 * [unit, "Rookie"] call ttt_common_fnc_setAIskillLevel
 *
 * Public: Yes
 */

params ["_unit",["_skillLevel","Veteran", [""]]];

private _skill;

switch (_skillLevel) do {
    case "Novice": {
        _skill = random [0, 0.12, 0.24];
    };
    case "Rookie": {
        _skill = random [0.25, 0.345, 0.44];
    };
    case "Recruit": {
        _skill = random [0.45, 0.545, 0.64];
    };
    case "Veteran": {
        _skill = random [0.65, 0.745,  0.84];
    };
    case "Expert": {
        _skill = random [0.85, 0.925, 1];
    };
    default {
        _skill = random [0.65, 0.745,  0.84]; //same as Veteran
    };
}; 

_unit setSkill ["general",          _skill];
_unit setSkill ["courage",          _skill];
_unit setSkill ["aimingAccuracy",   _skill - 0.2];
_unit setSkill ["aimingShake",      _skill - 0.2];
_unit setSkill ["aimingSpeed",      _skill - 0.2];
_unit setSkill ["commanding",       _skill];
_unit setSkill ["endurance",        _skill];
_unit setSkill ["spotDistance",     _skill];
_unit setSkill ["spotTime",         _skill];
_unit setSkill ["reloadSpeed",      _skill];
