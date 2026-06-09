[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(settingEnable_name), LSTRING(settingEnable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    false,
    true,
    {[] call FUNC(addActions);}
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks),
    "EDITBOX",
    [LSTRING(settingSupportedBackpacks_name), LSTRING(settingSupportedBackpacks_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "[]",
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(facilityObject),
    "EDITBOX",
    [LSTRING(settingFacilityObject_name), LSTRING(settingFacilityObject_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "Land_MedicalTent_01_floor_dark_F",
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

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
    [2, 60, 20, 0],
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
