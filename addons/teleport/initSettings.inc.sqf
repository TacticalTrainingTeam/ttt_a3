[
    QGVAR(enableTeleport),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subcategory)],
    true,
    true
] call CBA_fnc_addSetting;