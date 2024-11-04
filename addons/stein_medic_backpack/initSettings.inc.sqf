[
    QGVAR(enable), 
    "CHECKBOX",
    [LSTRING(settingEnable_name), LSTRING(settingEnable_description)],
    ["Tactical Training Team", "EinStein medizinischer Rucksack"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks), 
    "EDITBOX",
    ["Erlaubte Rucksäcke", "Classnames der Rucksäcke die eine Plane haben."],
    ["Tactical Training Team", "EinStein medizinischer Rucksack"],
    "[""B_Kitbag_cbr""]",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedItems), 
    "EDITBOX",
    ["Zusätzliche Gegenstände", "Classnames der Gegenstände die auf der Plane gespawnt werden."],
    ["Tactical Training Team", "EinStein medizinischer Rucksack"],
    "[""Land_FirstAidKit_01_open_F""]",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedObject), 
    "EDITBOX",
    ["Objekt", "Classname des Objekts das eine medizinische Einrichtung sein soll."],
    ["Tactical Training Team", "EinStein medizinischer Rucksack"],
    "Land_MedicalTent_01_floor_dark_F",
    true
] call CBA_fnc_addSetting;