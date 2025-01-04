[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    false,
    1
] call CBA_fnc_addSetting;

[
    QGVAR(allowedBackpacks),
    "EDITBOX",
    [LSTRING(allowedBackpacks_displayName), LSTRING(allowedBackpacks_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    ["['B_Kitbag_rgr']"],
    1
] call CBA_fnc_addSetting;