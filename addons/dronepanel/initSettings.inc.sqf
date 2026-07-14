[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    false,
    1,
    {[] call FUNC(addActions);}
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks),
    "EDITBOX",
    [LSTRING(supportedBackpacks_displayName), LSTRING(allowedBackpacks_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    "[]",
    1,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(tarpColor),
    "LIST",
    ["Tarp Color", "Color of the Panel"],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    [[0, 1, 2, 3], ["Black", "Green", "Red", "Yellow"], 2],
    1
] call CBA_fnc_addSetting;

[
    QGVAR(buildTime),
    "SLIDER",
    [LSTRING(settingBuildTime_name), LSTRING(settingBuildTime_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    [2, 60, 6, 0],
    1
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks),
    "EDITBOX",
    [LSTRING(supportedBackpacks_displayName), LSTRING(allowedBackpacks_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    "[]",
    1,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;
