#include "..\script_component.hpp"

/*
 * Authors: Andx
 * Bulk set the skill of an AI Unit.
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
 * 1: General Skill (Optional, Default: 0.75) <FLOAT>
 * 2: Courage Skill (Optional, Default: 0.75) <FLOAT>
 * 3: Aiming Accuracy Skill (Optional, Default: 0.65) <FLOAT>
 * 4: Aiming Shake Skill (Optional, Default: 0.65) <FLOAT>
 * 5: Aiming Speed Skill (Optional, Default: 0.65) <FLOAT>
 * 6: Commanding Skill (Optional, Default: 0.75) <FLOAT>
 * 7: Endurance Skill (Optional, Default: 0.75) <FLOAT>
 * 8: Spot Distance Skill (Optional, Default: 0.85) <FLOAT>
 * 9: Spot Time Skill (Optional, Default: 0.85) <FLOAT>
 * 10: Reload Speed Skill (Optional, Default: 0.75) <FLOAT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [unit] call ttt_common_fnc_setAIskill
 *
 * Public: Yes
 */

params [
    "_unit",
    ["_general",        0.75, [0.0]],
    ["_courage",        0.75, [0.0]],
    ["_aimingAccuracy", 0.65, [0.0]],
    ["_aimingShake",    0.65, [0.0]],
    ["_aimingSpeed",    0.65, [0.0]],
    ["_commanding",     0.75, [0.0]],
    ["_endurance",      0.75, [0.0]],
    ["_spotDistance",   0.85, [0.0]],
    ["_spotTime",       0.85, [0.0]],
    ["_reloadSpeed",    0.75, [0.0]]
    ];

_unit setSkill ["general",          _general];
_unit setSkill ["courage",          _courage];
_unit setSkill ["aimingAccuracy",   _aimingAccuracy];
_unit setSkill ["aimingShake",      _aimingShake];
_unit setSkill ["aimingSpeed",      _aimingSpeed];
_unit setSkill ["commanding",       _commanding];
_unit setSkill ["endurance",        _endurance];
_unit setSkill ["spotDistance",     _spotDistance];
_unit setSkill ["spotTime",         _spotTime];
_unit setSkill ["reloadSpeed",      _reloadSpeed];
