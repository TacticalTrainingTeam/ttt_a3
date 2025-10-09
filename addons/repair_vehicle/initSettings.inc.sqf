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
    QGVAR(supportedVehicles),
    "EDITBOX",
    [LSTRING(settingSupportedVehicles_name), LSTRING(settingSupportedVehicles_description)],
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
    "Land_RepairDepot_01_green_F",
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(buildTime),
    "SLIDER",
    [LSTRING(settingBuildTime_name), LSTRING(settingBuildTime_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    [2, 60, 30, 0],
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
