[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(displayName), LSTRING(description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true
] call CBA_fnc_addSetting;