[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(settingEnable_name), LSTRING(settingEnable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    true,
    {[] call FUNC(addActions);}
] call CBA_fnc_addSetting;

[
    QGVAR(neededItem),
    "EDITBOX",
    [LSTRING(settingNeededItem_name), LSTRING(settingNeededItem_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    "DemoCharge_Remote_Mag",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(timerDuration),
    "SLIDER",
    [LSTRING(settingTimerDuration_name), LSTRING(settingTimerDuration_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [5, 300, 30, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(placeTime),
    "SLIDER",
    [LSTRING(settingPlaceTime_name), LSTRING(settingPlaceTime_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [1, 30, 5, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(useAnimation),
    "CHECKBOX",
    [LSTRING(settingUseAnimation_name), LSTRING(settingUseAnimation_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(placeAnimation),
    "EDITBOX",
    [LSTRING(settingPlaceAnimation_name), LSTRING(settingPlaceAnimation_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    "Acts_carFixingWheel",
    true
] call CBA_fnc_addSetting;
