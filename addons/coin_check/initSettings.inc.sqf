// isGlobal = false: personal per-client setting, so each player can opt out for themselves
[
    QGVAR(enabled),
    "CHECKBOX",
    [LSTRING(enabled_displayName), LSTRING(enabled_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    false
] call CBA_fnc_addSetting;
