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
    ["[]"],
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(neededItem),
    "EDITBOX",
    [LSTRING(neededItem_displayName), LSTRING(neededItem_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [''],
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(neededSkill),
    "LIST",
    [LSTRING(neededSkill_displayName), LSTRING(neededSkill_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [[0, 1, 2], ["STR_ACE_Repair_AssignEngineerRole_role_none", "STR_ACE_Repair_AssignEngineerRole_role_engineer", "STR_ACE_Repair_AssignEngineerRole_role_advanced"], 1],
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;