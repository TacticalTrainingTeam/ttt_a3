[
    QGVAR(faction),
    "LIST",
    [LSTRING(faction_displayName), LSTRING(faction_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [[0, 1, 2], [LSTRING(faction_nato), LSTRING(faction_opfor), LSTRING(faction_indep)], 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(quantityMultiplier),
    "SLIDER",
    [LSTRING(quantityMultiplier_displayName), LSTRING(quantityMultiplier_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [0.5, 5.0, 1.0, 1],
    true
] call CBA_fnc_addSetting;
