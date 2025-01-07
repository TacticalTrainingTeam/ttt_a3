[
    QGVAR(enableDRP),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam),LSTRING(subCategory)],
    true,
    0
] call CBA_fnc_addSetting;