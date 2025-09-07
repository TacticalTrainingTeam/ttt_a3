[
    QGVAR(enableTeleport),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    1
] call CBA_fnc_addSetting;

[
    QGVAR(enableJIPMoveToRespawn),
    "CHECKBOX",
    [LSTRING(enableJipMove_displayName), LSTRING(enableJipMove_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    1
] call CBA_fnc_addSetting;
