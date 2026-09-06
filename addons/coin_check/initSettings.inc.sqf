// isGlobal = false: personal per-client setting, so each player can opt out for themselves
[
    QGVAR(enabled),
    "CHECKBOX",
    [LSTRING(enabled_displayName), LSTRING(enabled_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    false
] call CBA_fnc_addSetting;

[
    QGVAR(radius),
    "SLIDER",
    [LSTRING(radius_displayName), LSTRING(radius_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [1, 100, 10, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(responseTime),
    "SLIDER",
    [LSTRING(responseTime_displayName), LSTRING(responseTime_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [5, 120, 30, 0],
    true
] call CBA_fnc_addSetting;
