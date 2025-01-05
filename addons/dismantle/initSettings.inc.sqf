[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    false,
    true,
    {[] call FUNC(addActions);} 
] call CBA_fnc_addSetting;

[
    QGVAR(supportedObjects),
    "EDITBOX",
    [LSTRING(supportedObjects_displayName), LSTRING(supportedObjects_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    ["['Land_CzechHedgehog_01_new_F', 'Land_CzechHedgehog_01_old_F']"],
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(neededItem),
    "EDITBOX",
    [LSTRING(neededItem_displayName), LSTRING(neededItem_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    ["Toolkit"],
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(neededSkill),
    "LIST",
    [LSTRING(neededSkill_displayName), LSTRING(neededSkill_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [[0, 1, 2], ["None", "Engineer", "Advanced Engineer"], 1],
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;