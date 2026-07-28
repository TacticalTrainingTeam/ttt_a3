[
    QGVAR(additionalItems),
    "EDITBOX",
    [LSTRING(settingAdditionalItems_name), LSTRING(settingAdditionalItems_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "[]",
    true
] call CBA_fnc_addSetting;


[
    QGVAR(buildTime),
    "SLIDER",
    [LSTRING(settingBuildTime_name), LSTRING(settingBuildTime_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    [2, 60, 6, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(useAnimation),
    "CHECKBOX",
    [LSTRING(settingUseAnimation_name), LSTRING(settingUseAnimation_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(buildAnimation),
    "EDITBOX",
    [LSTRING(settingBuildAnimation_name), LSTRING(settingBuildAnimation_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "Acts_carFixingWheel",
    true
] call CBA_fnc_addSetting;
